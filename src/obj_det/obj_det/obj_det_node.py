from ultralytics import YOLO
import rclpy
from rclpy.node import Node
from geometry_msgs.msg import Point, Pose2D
from sensor_msgs.msg import Image
from interfaces_pkg.msg import DetectedObject, Yolov8Objects

from cv_bridge import CvBridge
import cv2

import numpy as np

import torch

from sam2.build_sam import build_sam2_camera_predictor, build_sam2
from sam2.sam2_image_predictor import SAM2ImagePredictor

import time

from pathlib import Path


class Yolo_det(Node):
    def __init__(self):
        super().__init__("Yolo_det")
        self.get_logger().info("Initialised Yolo Object Node")
        print('Hi from obj_det.')
        
        self.first_time = False
        self.prev_nr_obj = 0
        
        # Publish Results
        self.detected_objects_publisher = self.create_publisher(Yolov8Objects, 'objects_detected_filtered', 10)
        
        self.object_model = YOLO('yolov8m.pt')
        print("Sucessfully imported YOLO model")
        
        # Define paths for video or camera
        self.home = str(Path.home())
        midpath_videos = "umib_sam2_yolov8_ros2_ws/src/obj_det/obj_det/videos"
        video_name = 'oranges.mp4'
        
        self.video_path = self.home + '/' + midpath_videos + '/' + video_name
        # self.video_path = None  # Default to None for webcam
        
        
        # Define model and configurations
        sam2_checkpoint = self.home+"/Bruno/sam2/checkpoints/sam2.1_hiera_small.pt"
        model_cfg = "configs/sam2.1/sam2.1_hiera_s.yaml"
        # self.predictor = build_sam2_camera_predictor(model_cfg, sam2_checkpoint)
        self.sam2_model = build_sam2(model_cfg, sam2_checkpoint)

        self.predictor = SAM2ImagePredictor(self.sam2_model)

        self.br = CvBridge()
        self.tracking_received_points = []
        self.tracking_received_labels = []
        self.obj_ids = []
        
        if self.video_path:
            self.cap = cv2.VideoCapture(self.video_path)
            source_type = f"Video file: {self.video_path}"
        else:
            self.cap = cv2.VideoCapture(0)  # Use webcam
            source_type = "Webcam"
    
        if not self.cap.isOpened():
            self.get_logger().error(f"Failed to open {source_type}.")
            self.destroy_node()
            raise RuntimeError(f"Cannot open {source_type}.")
        else:
            self.get_logger().info(f"{source_type} opened successfully.")
            
        self.counter = 0
        
        # Get video frame rate (default to 30 if not available)
        self.frame_rate = self.cap.get(cv2.CAP_PROP_FPS) or 30
        self.frame_delay = 1.0 / self.frame_rate  # Frame delay in seconds

        # Start timer before creating the self.timer
        self.start_time = time.time()
        
        self.timer = self.create_timer(0.1, self.read_camera)
        self.get_logger().info('Video reader node initialized.')
        
        
    def read_camera(self):
        ret, frame = self.cap.read()
        if not ret:
            self.get_logger().warning('Failed to read frame from webcam.')
            elapsed_time = time.time() - self.start_time
            self.get_logger().info(f"Time to read the video: {elapsed_time:.4f} seconds")
            # self.cap.set(cv2.CAP_PROP_POS_FRAMES, 0)  # Restart video if it ends
            return
        
        # Resize the frame to match webcam resolution (e.g., 640x480)
        desired_width = 640
        desired_height = 480
        frame = cv2.resize(frame, (desired_width, desired_height))

        # Process the frame (e.g., display it or perform operations)
        self.get_logger().info('Frame captured successfully.')
        
        self.current_frame = frame.copy()
        
        self.yolo_object_detection(self.object_model, self.cap, self.current_frame)
            
    def yolo_object_detection(self, model, camera, current_frame):
        print('Inside routine')
        # print(model)
        # print(camera)
        # print(current_frame)
        copy_frame = current_frame.copy()
        object_results = model.track(current_frame, persist=True, tracker="bytetrack.yaml")
        num_obj = len(object_results[0])
        print('---------------------')
        
        if len(object_results) == 0 or len(object_results[0]) == 0:
            self.get_logger().info('No objects detected.')
            return
        
        self.get_logger().info(f"Objects detected: {num_obj}")
        
        object_list = []
        
        yolov8_objects = Yolov8Objects()
        
        num_obj_filtered = 0
        
        self.tracking_received_points.clear()
        self.tracking_received_labels.clear()
        self.obj_ids.clear()

        desired_class = 'orange'
        
        
        for object_idx in range(num_obj):
            
            det_obj = DetectedObject()

            boxes_id = object_results[0].boxes[object_idx]
            object_confidence = boxes_id.conf[0].item()
            
            if object_confidence > 0.2:
                num_obj_filtered += 1
                box_top_left_x = int(boxes_id.xyxy[0][0])
                box_top_left_y = int(boxes_id.xyxy[0][1])
                box_width = int(boxes_id.xyxy[0][2]) - int(boxes_id.xyxy[0][0])
                box_height = int(boxes_id.xyxy[0][3]) - int(boxes_id.xyxy[0][1])
                
                center_x = int(box_top_left_x + (box_width / 2))
                center_y = int(box_top_left_y + (box_height / 2))
        
                class_id = int(boxes_id.cls[0])
                class_name = model.names[int(boxes_id.cls[0])]
                
                det_obj.object_name = class_name
                det_obj.object_id = class_id
                det_obj.confidence = object_confidence
                
                det_obj.box_top_left_x = box_top_left_x
                det_obj.box_top_left_y = box_top_left_y
                det_obj.box_width = box_width
                det_obj.box_height = box_height
                det_obj.box_center_x = center_x
                det_obj.box_center_y = center_y
                
                yolov8_objects.objects.append(det_obj)
                
                
                print('\n\n\n\n')
                print('Class Name: ', class_name)
                print('Class ID: ', class_id)
                print('Detection confidence: ', object_confidence)
                print('Width: ', box_width, 'Height', box_height)
                print('Center :', center_x,', ', center_y)       
                
                if class_name == desired_class:
                    self.counter += 1
                    self.tracking_received_points.append((center_x, center_y))
                    self.tracking_received_labels.append(1)
                    self.obj_ids.append(self.counter)
                
                                
                cv2.circle(
                    current_frame,
                    (center_x, center_y),
                    2,
                    (0, 0, 255),  # Red color
                    2  # Line thickness
                )
                
                # Draw bounding box and label on the frame
                cv2.rectangle(
                    current_frame,
                    (box_top_left_x, box_top_left_y),
                    (box_top_left_x + box_width, box_top_left_y + box_height),
                    (0, 255, 0),  # Green color
                    2  # Line thickness
                )
                cv2.putText(
                    current_frame,
                    f"{class_name}: {object_confidence:.2f}",
                    (box_top_left_x, box_top_left_y - 10),  # Position above the box
                    cv2.FONT_HERSHEY_SIMPLEX,
                    0.5,  # Font scale
                    (0, 255, 0),  # Green color
                    2  # Line thickness
                )
        
        print(self.counter, desired_class, ' detected.')
        if self.prev_nr_obj == self.counter:
            self.first_time = False
        else:
            self.first_time = True
        self.prev_nr_obj = self.counter
        self.counter = 0
        yolov8_objects.num_objects = num_obj_filtered
        self.detected_objects_publisher.publish(yolov8_objects)
        print('---------------------')
            
        # Display the annotated frame
        # cv2.imshow("YOLO Detection", current_frame)
        # if cv2.waitKey(1) & 0xFF == ord('q'):
        #     self.get_logger().info('Exiting...')
        #     self.destroy_node()
        if self.prev_nr_obj != 0:
            with torch.inference_mode(), torch.autocast("cuda", dtype=torch.bfloat16):
                self.sam2_tracking(self.obj_ids, self.tracking_received_points, self.tracking_received_labels, copy_frame)
    
    # def get_pc(self, center_x, center_y):
    #     print('pc')
    

    def sam2_tracking(self, initial_obj_id, tracking_received_points, tracking_received_labels, frame):
        print('sam2_tracking')
        
        # Step 1: Set the image for the predictor
        self.predictor.set_image(frame)

        image_batch = [frame]  # List of images (can be multiple frames in your case)

        # Set the image batch for the predictor
        self.predictor.set_image_batch(image_batch)

        # Step 2: Predict masks for the given points and labels
        

        print(tracking_received_points, tracking_received_labels)
        

        print('......................')

        # Convert tracking_received_points to the required format for pts_batch
        points_array = np.array([[[x, y]] for x, y in tracking_received_points])  # Shape (B, 1, 2)

        # Convert tracking_received_labels to the required format for labels_batch
        labels_array = np.array([[label] for label in tracking_received_labels])  # Shape (B, 1)

        # Wrap into batches
        pts_batch = [points_array]  # List containing the points array
        labels_batch = [labels_array]  # List containing the labels array

        # Print to verify
        print("pts_batch:", pts_batch)
        print("labels_batch:", labels_batch)


        print('......................')

        # image1_pts = np.array([
        #     [[500, 375]],
        #     [[650, 750]], 
        #     [[200, 200]]
        #     ]) # Bx1x2 where B corresponds to number of objects 
        # image1_labels = np.array([[1], [1], [1]])

        # pts_batch = [image1_pts]
        # labels_batch = [image1_labels]

        # Now structure the points and labels into batches (for one image)
        # pts_batch = [points_array]  # One image in the batch
        # labels_batch = [labels_array]  # One set of labels in the batch

        print("pts_batch:", pts_batch)
        print("labels_batch:", labels_batch)
        print("Frame shape:", frame.shape)

        print('-')

        # Run the predictor to get the masks and scores
        masks_batch, scores_batch, _ = self.predictor.predict_batch(pts_batch, labels_batch, box_batch=None, multimask_output=True)

        print('-')
        
        # Select the best mask for each object based on the highest score
        best_masks = []
        for masks, scores in zip(masks_batch, scores_batch):
            best_masks.append(masks[range(len(masks)), np.argmax(scores, axis=-1)])

        print('best masks selected len - ', len(best_masks))
        # Process each mask and display it on the image
        # Process each mask and display them all together on the image
        combined_mask = None  # Initialize a combined mask

        for masks in best_masks:
            print('nr de mascaras: ', len(masks))
            for mask in masks:
                # Combine all masks into one array
                if combined_mask is None:
                    combined_mask = mask  # Initialize the combined mask
                else:
                    combined_mask = np.logical_or(combined_mask, mask)  # Combine masks using logical OR

        if combined_mask is not None:
            # Convert the combined mask to a binary image (0 or 255)
            combined_mask_image = (combined_mask * 255).astype(np.uint8)
            
            # Create a green overlay for the combined mask
            green_mask = np.zeros_like(frame, dtype=np.uint8)  # Same shape as the frame
            green_mask[:, :, 1] = combined_mask_image  # Set the green channel (index 1) to the mask
            
            # Overlay the green mask onto the original frame
            combined_image = cv2.addWeighted(frame, 1.0, green_mask, 0.5, 0)
            
            # Show the combined image
            cv2.imshow("All Object Masks", combined_image)
            # cv2.waitKey(0)
            if cv2.waitKey(1) & 0xFF == ord('q'):
                self.get_logger().info('Exiting...')
                self.destroy_node()

        print('Tracking complete.')

                
            # #Start analysing data from contours  
            # contours, _ = cv2.findContours(mask, cv2.RETR_TREE, cv2.CHAIN_APPROX_NONE)
            # polygons = []
            # for obj in contours:
            #     coords = []
                    
            #     # for point in obj:
            #     #     coords.append(int(point[0][0]))
            #     #     coords.append(int(point[0][1]))
            #     for point in obj:
            #         coords.append([int(point[0][0]), int(point[0][1])])  # Store as [x, y]
            #     polygons.append(coords)
            #     print('POLYGONS: ', polygons)
            #     # polygons.append(coords)
            
            

def main(args=None):
    rclpy.init(args=args)
    node = Yolo_det()
    rclpy.spin(node)
    rclpy.shutdown()


if __name__ == '__main__':
    main()
