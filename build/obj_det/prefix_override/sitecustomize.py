import sys
if sys.prefix == '/usr':
    sys.real_prefix = sys.prefix
    sys.prefix = sys.exec_prefix = '/home/charmie/umib_sam2_yolov8_ros2_ws/install/obj_det'
