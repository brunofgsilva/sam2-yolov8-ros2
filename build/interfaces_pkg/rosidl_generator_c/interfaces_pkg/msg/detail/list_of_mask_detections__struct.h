// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from interfaces_pkg:msg/ListOfMaskDetections.idl
// generated code does not contain a copyright notice

#ifndef INTERFACES_PKG__MSG__DETAIL__LIST_OF_MASK_DETECTIONS__STRUCT_H_
#define INTERFACES_PKG__MSG__DETAIL__LIST_OF_MASK_DETECTIONS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'masks'
#include "interfaces_pkg/msg/detail/mask_detection__struct.h"

/// Struct defined in msg/ListOfMaskDetections in the package interfaces_pkg.
/**
  * List of string messades for mass sending of strings
 */
typedef struct interfaces_pkg__msg__ListOfMaskDetections
{
  interfaces_pkg__msg__MaskDetection__Sequence masks;
} interfaces_pkg__msg__ListOfMaskDetections;

// Struct for a sequence of interfaces_pkg__msg__ListOfMaskDetections.
typedef struct interfaces_pkg__msg__ListOfMaskDetections__Sequence
{
  interfaces_pkg__msg__ListOfMaskDetections * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} interfaces_pkg__msg__ListOfMaskDetections__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // INTERFACES_PKG__MSG__DETAIL__LIST_OF_MASK_DETECTIONS__STRUCT_H_
