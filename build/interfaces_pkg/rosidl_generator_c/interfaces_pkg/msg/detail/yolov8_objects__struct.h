// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from interfaces_pkg:msg/Yolov8Objects.idl
// generated code does not contain a copyright notice

#ifndef INTERFACES_PKG__MSG__DETAIL__YOLOV8_OBJECTS__STRUCT_H_
#define INTERFACES_PKG__MSG__DETAIL__YOLOV8_OBJECTS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'objects'
#include "interfaces_pkg/msg/detail/detected_object__struct.h"

/// Struct defined in msg/Yolov8Objects in the package interfaces_pkg.
typedef struct interfaces_pkg__msg__Yolov8Objects
{
  int32_t num_objects;
  interfaces_pkg__msg__DetectedObject__Sequence objects;
} interfaces_pkg__msg__Yolov8Objects;

// Struct for a sequence of interfaces_pkg__msg__Yolov8Objects.
typedef struct interfaces_pkg__msg__Yolov8Objects__Sequence
{
  interfaces_pkg__msg__Yolov8Objects * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} interfaces_pkg__msg__Yolov8Objects__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // INTERFACES_PKG__MSG__DETAIL__YOLOV8_OBJECTS__STRUCT_H_
