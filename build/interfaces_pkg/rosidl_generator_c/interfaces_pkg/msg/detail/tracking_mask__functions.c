// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from interfaces_pkg:msg/TrackingMask.idl
// generated code does not contain a copyright notice
#include "interfaces_pkg/msg/detail/tracking_mask__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `obj_name`
#include "rosidl_runtime_c/string_functions.h"
// Member `centroid`
// Member `position_relative`
// Member `position_absolute`
#include "geometry_msgs/msg/detail/point__functions.h"
// Member `mask`
#include "interfaces_pkg/msg/detail/list_of_mask_detections__functions.h"

bool
interfaces_pkg__msg__TrackingMask__init(interfaces_pkg__msg__TrackingMask * msg)
{
  if (!msg) {
    return false;
  }
  // obj_name
  if (!rosidl_runtime_c__String__init(&msg->obj_name)) {
    interfaces_pkg__msg__TrackingMask__fini(msg);
    return false;
  }
  // object_id
  // centroid
  if (!geometry_msgs__msg__Point__init(&msg->centroid)) {
    interfaces_pkg__msg__TrackingMask__fini(msg);
    return false;
  }
  // mask
  if (!interfaces_pkg__msg__ListOfMaskDetections__init(&msg->mask)) {
    interfaces_pkg__msg__TrackingMask__fini(msg);
    return false;
  }
  // position_relative
  if (!geometry_msgs__msg__Point__init(&msg->position_relative)) {
    interfaces_pkg__msg__TrackingMask__fini(msg);
    return false;
  }
  // position_absolute
  if (!geometry_msgs__msg__Point__init(&msg->position_absolute)) {
    interfaces_pkg__msg__TrackingMask__fini(msg);
    return false;
  }
  return true;
}

void
interfaces_pkg__msg__TrackingMask__fini(interfaces_pkg__msg__TrackingMask * msg)
{
  if (!msg) {
    return;
  }
  // obj_name
  rosidl_runtime_c__String__fini(&msg->obj_name);
  // object_id
  // centroid
  geometry_msgs__msg__Point__fini(&msg->centroid);
  // mask
  interfaces_pkg__msg__ListOfMaskDetections__fini(&msg->mask);
  // position_relative
  geometry_msgs__msg__Point__fini(&msg->position_relative);
  // position_absolute
  geometry_msgs__msg__Point__fini(&msg->position_absolute);
}

bool
interfaces_pkg__msg__TrackingMask__are_equal(const interfaces_pkg__msg__TrackingMask * lhs, const interfaces_pkg__msg__TrackingMask * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // obj_name
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->obj_name), &(rhs->obj_name)))
  {
    return false;
  }
  // object_id
  if (lhs->object_id != rhs->object_id) {
    return false;
  }
  // centroid
  if (!geometry_msgs__msg__Point__are_equal(
      &(lhs->centroid), &(rhs->centroid)))
  {
    return false;
  }
  // mask
  if (!interfaces_pkg__msg__ListOfMaskDetections__are_equal(
      &(lhs->mask), &(rhs->mask)))
  {
    return false;
  }
  // position_relative
  if (!geometry_msgs__msg__Point__are_equal(
      &(lhs->position_relative), &(rhs->position_relative)))
  {
    return false;
  }
  // position_absolute
  if (!geometry_msgs__msg__Point__are_equal(
      &(lhs->position_absolute), &(rhs->position_absolute)))
  {
    return false;
  }
  return true;
}

bool
interfaces_pkg__msg__TrackingMask__copy(
  const interfaces_pkg__msg__TrackingMask * input,
  interfaces_pkg__msg__TrackingMask * output)
{
  if (!input || !output) {
    return false;
  }
  // obj_name
  if (!rosidl_runtime_c__String__copy(
      &(input->obj_name), &(output->obj_name)))
  {
    return false;
  }
  // object_id
  output->object_id = input->object_id;
  // centroid
  if (!geometry_msgs__msg__Point__copy(
      &(input->centroid), &(output->centroid)))
  {
    return false;
  }
  // mask
  if (!interfaces_pkg__msg__ListOfMaskDetections__copy(
      &(input->mask), &(output->mask)))
  {
    return false;
  }
  // position_relative
  if (!geometry_msgs__msg__Point__copy(
      &(input->position_relative), &(output->position_relative)))
  {
    return false;
  }
  // position_absolute
  if (!geometry_msgs__msg__Point__copy(
      &(input->position_absolute), &(output->position_absolute)))
  {
    return false;
  }
  return true;
}

interfaces_pkg__msg__TrackingMask *
interfaces_pkg__msg__TrackingMask__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  interfaces_pkg__msg__TrackingMask * msg = (interfaces_pkg__msg__TrackingMask *)allocator.allocate(sizeof(interfaces_pkg__msg__TrackingMask), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(interfaces_pkg__msg__TrackingMask));
  bool success = interfaces_pkg__msg__TrackingMask__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
interfaces_pkg__msg__TrackingMask__destroy(interfaces_pkg__msg__TrackingMask * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    interfaces_pkg__msg__TrackingMask__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
interfaces_pkg__msg__TrackingMask__Sequence__init(interfaces_pkg__msg__TrackingMask__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  interfaces_pkg__msg__TrackingMask * data = NULL;

  if (size) {
    data = (interfaces_pkg__msg__TrackingMask *)allocator.zero_allocate(size, sizeof(interfaces_pkg__msg__TrackingMask), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = interfaces_pkg__msg__TrackingMask__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        interfaces_pkg__msg__TrackingMask__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
interfaces_pkg__msg__TrackingMask__Sequence__fini(interfaces_pkg__msg__TrackingMask__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      interfaces_pkg__msg__TrackingMask__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

interfaces_pkg__msg__TrackingMask__Sequence *
interfaces_pkg__msg__TrackingMask__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  interfaces_pkg__msg__TrackingMask__Sequence * array = (interfaces_pkg__msg__TrackingMask__Sequence *)allocator.allocate(sizeof(interfaces_pkg__msg__TrackingMask__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = interfaces_pkg__msg__TrackingMask__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
interfaces_pkg__msg__TrackingMask__Sequence__destroy(interfaces_pkg__msg__TrackingMask__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    interfaces_pkg__msg__TrackingMask__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
interfaces_pkg__msg__TrackingMask__Sequence__are_equal(const interfaces_pkg__msg__TrackingMask__Sequence * lhs, const interfaces_pkg__msg__TrackingMask__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!interfaces_pkg__msg__TrackingMask__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
interfaces_pkg__msg__TrackingMask__Sequence__copy(
  const interfaces_pkg__msg__TrackingMask__Sequence * input,
  interfaces_pkg__msg__TrackingMask__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(interfaces_pkg__msg__TrackingMask);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    interfaces_pkg__msg__TrackingMask * data =
      (interfaces_pkg__msg__TrackingMask *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!interfaces_pkg__msg__TrackingMask__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          interfaces_pkg__msg__TrackingMask__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!interfaces_pkg__msg__TrackingMask__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
