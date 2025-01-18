// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from interfaces_pkg:msg/MaskDetection.idl
// generated code does not contain a copyright notice

#ifndef INTERFACES_PKG__MSG__DETAIL__MASK_DETECTION__STRUCT_H_
#define INTERFACES_PKG__MSG__DETAIL__MASK_DETECTION__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'point'
#include "geometry_msgs/msg/detail/point__struct.h"

/// Struct defined in msg/MaskDetection in the package interfaces_pkg.
/**
  * List of Pixels of detection mask
 */
typedef struct interfaces_pkg__msg__MaskDetection
{
  geometry_msgs__msg__Point__Sequence point;
} interfaces_pkg__msg__MaskDetection;

// Struct for a sequence of interfaces_pkg__msg__MaskDetection.
typedef struct interfaces_pkg__msg__MaskDetection__Sequence
{
  interfaces_pkg__msg__MaskDetection * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} interfaces_pkg__msg__MaskDetection__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // INTERFACES_PKG__MSG__DETAIL__MASK_DETECTION__STRUCT_H_