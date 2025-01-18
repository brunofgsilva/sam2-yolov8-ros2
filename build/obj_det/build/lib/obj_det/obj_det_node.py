from ultralytics import YOLO
import rclpy
from rclpy.node import Node
from geometry_msgs.msg import Point
from sensor_msgs.msg import Image
from interfaces_pkg.msg import DetectedObject, Yolov8Objects, MaskDetection, ListOfMaskDetections, TrackingMask, ListOfTrackingMasks

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
        self.sam2_data_publisher = self.create_publisher(ListOfTrackingMasks, 'sam2_data_filtered', 10)
        
        self.object_model = YOLO('yolov8m.pt')
        print("Sucessfully imported YOLO model")
        
        # Define paths for video or camera
        self.home = str(Path.home())
        midpath_videos = "umib_sam2_yolov8_ros2_ws/src/obj_det/obj_det/videos"
        video_name = 'bicycles.mp4'
        
        self.video_path = self.home + '/' + midpath_videos + '/' + video_name
        # self.video_path = None  # Default to None for webcam
        
        
        # Define model and configurations
        sam2_checkpoint = self.home+"/sam2/checkpoints/sam2.1_hiera_small.pt"
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
            self.cap.set(cv2.CAP_PROP_POS_FRAMES, 0)  # Restart video if it ends
            return
        
        # Resize the frame to match webcam resolution (e.g., 640x480)
        desired_width = 640
        desired_height = 480
        if frame.shape[:2] != (desired_height, desired_width):
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

        self.desired_class = 'bicycle'
        
        
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
                
                if class_name == self.desired_class:
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
        
        print(self.counter, self.desired_class, ' detected.')
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
        cv2.imshow("YOLO Detection", current_frame)
        if cv2.waitKey(1) & 0xFF == ord('q'):
            self.get_logger().info('Exiting...')
            self.destroy_node()
        if self.prev_nr_obj != 0:
            with torch.inference_mode(), torch.autocast("cuda", dtype=torch.bfloat16):
                self.sam2_tracking(self.obj_ids, self.tracking_received_points, self.tracking_received_labels, copy_frame, self.prev_nr_obj)
    
    # def get_pc(self, center_x, center_y):
    #     print('pc')
    

    def combined_polygon_centroid(self, polygons, binary_mask):
        
        MIN_ACCEPTABLE_AREA = 100
        total_area = 0
        centroid_x = 0
        centroid_y = 0
        area_of_each_polygon = []
        centroid_of_each_polygon = []
        updated_filtered_polygons = []

        # print(binary_mask)

        print(len(polygons))

        for polygon_points in polygons:
            points = np.array(polygon_points, dtype=np.float32)
            
            # Skip invalid polygons
            if len(points) < 3:
                continue
            if not np.array_equal(points[0], points[-1]):
                points = np.vstack([points, points[0]])
            
            x = points[:, 0]
            y = points[:, 1]
            A = 0.5 * np.sum(x[:-1] * y[1:] - x[1:] * y[:-1]) # using the abolute value, because depending on the orientation (CW or CCW) the area may be returned as negative
            
            # Skip polygons with zero area
            if abs(A) < MIN_ACCEPTABLE_AREA:
                continue

            Cx = np.sum((x[:-1] + x[1:]) * (x[:-1] * y[1:] - x[1:] * y[:-1])) / (6 * A)
            Cy = np.sum((y[:-1] + y[1:]) * (x[:-1] * y[1:] - x[1:] * y[:-1])) / (6 * A)

            # Convert centroid coordinates to binary mask space
            Cx_ = max(0, min(binary_mask.shape[1] - 1, int(Cx + 0.5)))
            Cy_ = max(0, min(binary_mask.shape[0] - 1, int(Cy + 0.5)))
            
            # Access binary mask value
            mask_value = binary_mask[Cy_, Cx_]  # Note: mask is accessed as [row, col]

            # print(f"Centroid: ({Cx_}, {Cy_}), Mask Value: {mask_value}, Area: {abs(A)}")

            # Remove all polygons that are not part of the object being tracked (check if centroid is part of image mask)
            if mask_value.all() == 0:
                continue
            
            updated_filtered_polygons.append(polygon_points)
            area_of_each_polygon.append(abs(A))
            centroid_of_each_polygon.append((Cx, Cy))
            
            total_area += A
            centroid_x += Cx * A
            centroid_y += Cy * A

            # print(centroid_x, centroid_y)

        if total_area == 0:
            return None, None, None, None  # No valid polygons
        
        # Final combined centroid
        combined_Cx = centroid_x / total_area
        combined_Cy = centroid_y / total_area
        combined_C = (combined_Cx, combined_Cy)
        print('centroid', combined_C)
        return combined_C, updated_filtered_polygons, area_of_each_polygon, centroid_of_each_polygon



    def filter_and_publish_tracking_data(self, polygons, binary_mask, msg_list):

        MIN_AREA_FOR_PC_CALCULATION = 4000

        if polygons:
            print('inside polygons')
            centroid, updated_filtered_polygons, area_each_polygon, centroid_each_polygon = self.combined_polygon_centroid(polygons, binary_mask)
            
            if centroid is not None:
                print('.')
                
                
                msg = TrackingMask()
                msg.object_id = self.counter_msg
                msg.obj_name = self.desired_class
                msg.centroid.x = float(centroid[0])
                msg.centroid.y = float(centroid[1])
                print('.')
                list_masks = ListOfMaskDetections()
                requested_objects = []

                print('-')
                
                for p in updated_filtered_polygons: # only goes through filtres polygons, rather than all polygons

                    new_mask = MaskDetection()
                    for c in p:
                            
                        points_mask = Point()
                        points_mask.x = float(c[0])
                        points_mask.y = float(c[1])
                        points_mask.z = 0.0
                        new_mask.point.append(points_mask)

                    list_masks.masks.append(new_mask)
                    requested_objects.append(new_mask)
                
                # msg.binary_mask = self.node.br.cv2_to_imgmsg(white_mask, encoding='mono8')
                msg.mask = list_masks
                print('-')
                # AQUI DEVO PUBLICAR NO TÓPICO 

                msg_list.list_of_masks.append(msg)

                # self.sam2_data_publisher.publish(msg)

            else:
                print('=')
                msg_list = []

            return centroid, updated_filtered_polygons, area_each_polygon, centroid_each_polygon, msg_list
        else:
            print('else')

    def sam2_tracking(self, initial_obj_id, tracking_received_points, tracking_received_labels, frame, nr_objects_detected):
        print('sam2_tracking')
        
        # Step 1: Set the image for the predictor
        self.predictor.set_image(frame)

        image_batch = [frame]  # List of images (can be multiple frames in your case)

        # Set the image batch for the predictor
        self.predictor.set_image_batch(image_batch)            

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

        # print("pts_batch:", pts_batch)
        # print("labels_batch:", labels_batch)
        # print("Frame shape:", frame.shape)

        # print('-')

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

        list_of_objects = []

        for masks in best_masks:
            print('nr de mascaras: ', len(masks))
            polygons = []
            # Initialize combined images
            combined_white_mask = np.zeros_like(frame[:, :, 0], dtype=np.uint8)  # Single-channel for binary mask
            combined_teste = frame.copy()  # To draw polygons and centroids
            combined_frame_with_mask = frame.copy()  # To overlay masks
            accumulated_frame_with_mask = np.zeros_like(frame)  # Same shape as the frame, initialized to black
            msg_list = ListOfTrackingMasks()
            self.counter_msg = 0
            for mask in masks:
                print('MASK: ', mask)

                # Convert the mask to a binary image (0 or 255)
                mask_binary = (mask * 255).astype(np.uint8)  # This makes it a binary mask (0 and 255)

                contours, _ = cv2.findContours(mask_binary, cv2.RETR_TREE, cv2.CHAIN_APPROX_NONE)
                for obj in contours:
                    coords = []
                        
                    for point in obj:
                        coords.append([int(point[0][0]), int(point[0][1])])  # Store as [x, y]
                    polygons.append(coords)
                    # polygons.append(coords)

                # Now call filter_and_publish_tracking_data for each individual binary mask
                print('-')
                if polygons == []:
                    print('no polygon detected')
                
                else:
                    self.counter_msg += 1
                    centroid, updated_filtered_polygons, area_each_polygon, centroid_each_polygon, list_of_objects = self.filter_and_publish_tracking_data(polygons, mask_binary, msg_list)
                    print('binary mask used: ', mask_binary)
                    print('Returned: ', centroid)

                    if mask_binary is None or mask_binary.size == 0:
                        print("Warning: mask_binary is empty or None.")
                        continue
                    
                    # Ensure shapes match before applying bitwise_or
                    if combined_white_mask.shape != mask_binary.shape:
                        print("Error: Shapes of combined_white_mask and mask_binary do not match.")
                        break
                    # Add current binary mask to the combined one
                    combined_white_mask = cv2.bitwise_or(combined_white_mask, mask_binary)

                    # # Overlay the binary mask on the frame for visualization
                    # white_mask_overlay = cv2.bitwise_and(frame, frame, mask=mask_binary)
                    # combined_frame_with_mask = cv2.addWeighted(combined_frame_with_mask, 1.0, white_mask_overlay, 0.5, 0)
                    # Create the individual frame_with_mask for this specific mask
                    # Apply the mask to the frame
                    individual_frame_with_mask = cv2.bitwise_and(frame, frame, mask=mask_binary)

                    # Accumulate the result
                    accumulated_frame_with_mask = cv2.add(accumulated_frame_with_mask, individual_frame_with_mask)

                    if updated_filtered_polygons:
                        for p in updated_filtered_polygons:
                            cv2.polylines(combined_teste, [np.array(p, dtype=np.int32)], True, (0, 255, 255), 5)
                            cv2.fillPoly(combined_teste, [np.array(p, dtype=np.int32)], (0, 100, 100))
                        if centroid is not None:
                            cv2.circle(combined_teste, (int(centroid[0]), int(centroid[1])), 5, (0, 0, 255), -1)
                            for p, a in zip(centroid_each_polygon, area_each_polygon):
                                cv2.circle(combined_teste, (int(p[0]), int(p[1])), 5, (255, 0, 0), -1)
                                cv2.putText(combined_teste, f'A:{int(a)}', (int(p[0]), int(p[1])), 
                                            cv2.FONT_HERSHEY_DUPLEX, 1, (255, 255, 255), 1, cv2.LINE_AA)

                    # cv2.imshow("Frame with Mask BW", white_mask)
                    # cv2.imshow("Test Polygon", teste)


                # Combine all masks into one array
                if combined_mask is None:
                    combined_mask = mask_binary  # Initialize the combined mask
                else:
                    combined_mask = np.logical_or(combined_mask, mask_binary)  # Combine masks using logical OR
            msg_list.nr_of_objects_detected = nr_objects_detected
        
        if list_of_objects != []:
            self.sam2_data_publisher.publish(list_of_objects)     
        # Text to display
        text = f"{nr_objects_detected} {self.desired_class} detected"

        # Font settings
        font = cv2.FONT_HERSHEY_SIMPLEX
        font_scale = 1
        color = (255, 255, 255)  # White text
        thickness = 2
        position = (10, 30)  # Top-left corner (x, y)

        # Write text on each frame
        cv2.putText(combined_white_mask, text, position, font, font_scale, color, thickness)
        cv2.putText(combined_teste, text, position, font, font_scale, color, thickness)
        cv2.putText(accumulated_frame_with_mask, text, position, font, font_scale, color, thickness)

        # Display accumulated results after the loop
        cv2.imshow("Combined White Mask", combined_white_mask)
        cv2.imshow("Combined Test Polygon", combined_teste)
        cv2.imshow("Combined Frame with Mask", accumulated_frame_with_mask)

        if combined_mask is not None:
            # Convert the combined mask to a binary image (0 or 255)
            combined_mask_image = (combined_mask * 255).astype(np.uint8)
            
            # Create a green overlay for the combined mask
            green_mask = np.zeros_like(frame, dtype=np.uint8)  # Same shape as the frame
            green_mask[:, :, 1] = combined_mask_image  # Set the green channel (index 1) to the mask
            
            # Overlay the green mask onto the original frame
            combined_image = cv2.addWeighted(frame, 1.0, green_mask, 0.5, 0)

            # Write text on each frame
            cv2.putText(combined_image, text, position, font, font_scale, color, thickness)

            
            # Show the combined image
            cv2.imshow("All Object Masks", combined_image)
            # cv2.waitKey(0)
            if cv2.waitKey(1) & 0xFF == ord('q'):
                self.get_logger().info('Exiting...')
                self.destroy_node()

            # Show the combined image
            cv2.imshow("Original frame", frame)
            # cv2.waitKey(0)
            if cv2.waitKey(1) & 0xFF == ord('q'):
                self.get_logger().info('Exiting...')
                self.destroy_node()
                
        print('Tracking complete.')
            

def main(args=None):
    rclpy.init(args=args)
    node = Yolo_det()
    rclpy.spin(node)
    rclpy.shutdown()


if __name__ == '__main__':
    main()
