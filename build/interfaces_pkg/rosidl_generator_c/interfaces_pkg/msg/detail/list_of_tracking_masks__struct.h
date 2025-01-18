// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from interfaces_pkg:msg/ListOfTrackingMasks.idl
// generated code does not contain a copyright notice

#ifndef INTERFACES_PKG__MSG__DETAIL__LIST_OF_TRACKING_MASKS__STRUCT_H_
#define INTERFACES_PKG__MSG__DETAIL__LIST_OF_TRACKING_MASKS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'list_of_masks'
#include "interfaces_pkg/msg/detail/tracking_mask__struct.h"

/// Struct defined in msg/ListOfTrackingMasks in the package interfaces_pkg.
/**
  * SAM2 Tracking activated information. All masks of the same object in an image
 */
typedef struct interfaces_pkg__msg__ListOfTrackingMasks
{
  /// list of masks of the tracking selection
  interfaces_pkg__msg__TrackingMask__Sequence list_of_masks;
  /// Nr of objects detected in the frame
  int32_t nr_of_objects_detected;
} interfaces_pkg__msg__ListOfTrackingMasks;

// Struct for a sequence of interfaces_pkg__msg__ListOfTrackingMasks.
typedef struct interfaces_pkg__msg__ListOfTrackingMasks__Sequence
{
  interfaces_pkg__msg__ListOfTrackingMasks * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} interfaces_pkg__msg__ListOfTrackingMasks__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // INTERFACES_PKG__MSG__DETAIL__LIST_OF_TRACKING_MASKS__STRUCT_H_
