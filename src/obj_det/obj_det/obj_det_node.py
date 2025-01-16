from ultralytics import YOLO
import rclpy
from rclpy.node import Node
from geometry_msgs.msg import Point, Pose2D
from sensor_msgs.msg import Image
from interfaces_pkg.msg import DetectedObject, Yolov8Objects

from cv_bridge import CvBridge
import cv2

import time

class Yolo_det(Node):
    def __init__(self):
        super().__init__("Yolo_det")
        self.get_logger().info("Initialised Yolo Object Node")
        print('Hi from obj_det.')
        
        # Publish Results
        self.detected_objects_publisher = self.create_publisher(Yolov8Objects, 'objects_detected_filtered', 10)
        
        self.object_model = YOLO('yolov8m.pt')
        print("Sucessfully imported YOLO model")
        
        self.video_path = '/home/bruno/umibots_ws/src/obj_det/obj_det/cereal_box.mp4'
        # self.video_path = None  # Default to None for webcam

        # self.cap = cv2.VideoCapture(0) 
        self.br = CvBridge()
        
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
        
        for object_idx in range(num_obj):
            
            det_obj = DetectedObject()

            boxes_id = object_results[0].boxes[object_idx]
            object_confidence = boxes_id.conf[0].item()
            
            if object_confidence > 0.5:
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
                
                
                if class_name == 'book':
                    self.counter += 1
                
                print('\n\n\n\n')
                print('Class Name: ', class_name)
                print('Class ID: ', class_id)
                print('Detection confidence: ', object_confidence)
                print('Width: ', box_width, 'Height', box_height)
                print('Center :', center_x,', ', center_y)
                
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
        
        print(self.counter, ' books detected.')
        self.counter = 0
        yolov8_objects.num_objects = num_obj_filtered
        self.detected_objects_publisher.publish(yolov8_objects)
        print('---------------------')
            
        # Display the annotated frame
        cv2.imshow("YOLO Detection", current_frame)
        if cv2.waitKey(1) & 0xFF == ord('q'):
            self.get_logger().info('Exiting...')
            self.destroy_node()
            
def main(args=None):
    rclpy.init(args=args)
    node = Yolo_det()
    rclpy.spin(node)
    rclpy.shutdown()


if __name__ == '__main__':
    main()
