// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from interfaces_pkg:msg/DetectedObject.idl
// generated code does not contain a copyright notice

#ifndef INTERFACES_PKG__MSG__DETAIL__DETECTED_OBJECT__STRUCT_H_
#define INTERFACES_PKG__MSG__DETAIL__DETECTED_OBJECT__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'object_name'
// Member 'camera'
#include "rosidl_runtime_c/string.h"
// Member 'position_relative'
// Member 'position_absolute'
#include "geometry_msgs/msg/detail/point__struct.h"

/// Struct defined in msg/DetectedObject in the package interfaces_pkg.
typedef struct interfaces_pkg__msg__DetectedObject
{
  rosidl_runtime_c__String object_name;
  int32_t object_id;
  float confidence;
  geometry_msgs__msg__Point position_relative;
  geometry_msgs__msg__Point position_absolute;
  int32_t obj_height;
  int32_t obj_width;
  int32_t box_top_left_x;
  int32_t box_top_left_y;
  int32_t box_width;
  int32_t box_height;
  int32_t box_center_x;
  int32_t box_center_y;
  rosidl_runtime_c__String camera;
} interfaces_pkg__msg__DetectedObject;

// Struct for a sequence of interfaces_pkg__msg__DetectedObject.
typedef struct interfaces_pkg__msg__DetectedObject__Sequence
{
  interfaces_pkg__msg__DetectedObject * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} interfaces_pkg__msg__DetectedObject__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // INTERFACES_PKG__MSG__DETAIL__DETECTED_OBJECT__STRUCT_H_
