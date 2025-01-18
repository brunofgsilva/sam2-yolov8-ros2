// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from interfaces_pkg:msg/TrackingMask.idl
// generated code does not contain a copyright notice

#ifndef INTERFACES_PKG__MSG__DETAIL__TRACKING_MASK__STRUCT_H_
#define INTERFACES_PKG__MSG__DETAIL__TRACKING_MASK__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'centroid'
// Member 'position_relative'
// Member 'position_absolute'
#include "geometry_msgs/msg/detail/point__struct.h"
// Member 'mask'
#include "interfaces_pkg/msg/detail/list_of_mask_detections__struct.h"

/// Struct defined in msg/TrackingMask in the package interfaces_pkg.
/**
  * SAM2 Tracking activated information
 */
typedef struct interfaces_pkg__msg__TrackingMask
{
  /// pixel centroid coordinates
  geometry_msgs__msg__Point centroid;
  /// mask of the tracking selection
  interfaces_pkg__msg__ListOfMaskDetections mask;
  /// position relative to the robot frame
  geometry_msgs__msg__Point position_relative;
  /// position relative to the map frame
  geometry_msgs__msg__Point position_absolute;
} interfaces_pkg__msg__TrackingMask;

// Struct for a sequence of interfaces_pkg__msg__TrackingMask.
typedef struct interfaces_pkg__msg__TrackingMask__Sequence
{
  interfaces_pkg__msg__TrackingMask * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} interfaces_pkg__msg__TrackingMask__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // INTERFACES_PKG__MSG__DETAIL__TRACKING_MASK__STRUCT_H_
