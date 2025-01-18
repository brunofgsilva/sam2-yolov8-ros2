// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from interfaces_pkg:msg/DetectedObject.idl
// generated code does not contain a copyright notice
#include "interfaces_pkg/msg/detail/detected_object__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `object_name`
// Member `camera`
#include "rosidl_runtime_c/string_functions.h"
// Member `position_relative`
// Member `position_absolute`
#include "geometry_msgs/msg/detail/point__functions.h"

bool
interfaces_pkg__msg__DetectedObject__init(interfaces_pkg__msg__DetectedObject * msg)
{
  if (!msg) {
    return false;
  }
  // object_name
  if (!rosidl_runtime_c__String__init(&msg->object_name)) {
    interfaces_pkg__msg__DetectedObject__fini(msg);
    return false;
  }
  // object_id
  // confidence
  // position_relative
  if (!geometry_msgs__msg__Point__init(&msg->position_relative)) {
    interfaces_pkg__msg__DetectedObject__fini(msg);
    return false;
  }
  // position_absolute
  if (!geometry_msgs__msg__Point__init(&msg->position_absolute)) {
    interfaces_pkg__msg__DetectedObject__fini(msg);
    return false;
  }
  // obj_height
  // obj_width
  // box_top_left_x
  // box_top_left_y
  // box_width
  // box_height
  // box_center_x
  // box_center_y
  // camera
  if (!rosidl_runtime_c__String__init(&msg->camera)) {
    interfaces_pkg__msg__DetectedObject__fini(msg);
    return false;
  }
  return true;
}

void
interfaces_pkg__msg__DetectedObject__fini(interfaces_pkg__msg__DetectedObject * msg)
{
  if (!msg) {
    return;
  }
  // object_name
  rosidl_runtime_c__String__fini(&msg->object_name);
  // object_id
  // confidence
  // position_relative
  geometry_msgs__msg__Point__fini(&msg->position_relative);
  // position_absolute
  geometry_msgs__msg__Point__fini(&msg->position_absolute);
  // obj_height
  // obj_width
  // box_top_left_x
  // box_top_left_y
  // box_width
  // box_height
  // box_center_x
  // box_center_y
  // camera
  rosidl_runtime_c__String__fini(&msg->camera);
}

bool
interfaces_pkg__msg__DetectedObject__are_equal(const interfaces_pkg__msg__DetectedObject * lhs, const interfaces_pkg__msg__DetectedObject * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // object_name
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->object_name), &(rhs->object_name)))
  {
    return false;
  }
  // object_id
  if (lhs->object_id != rhs->object_id) {
    return false;
  }
  // confidence
  if (lhs->confidence != rhs->confidence) {
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
  // obj_height
  if (lhs->obj_height != rhs->obj_height) {
    return false;
  }
  // obj_width
  if (lhs->obj_width != rhs->obj_width) {
    return false;
  }
  // box_top_left_x
  if (lhs->box_top_left_x != rhs->box_top_left_x) {
    return false;
  }
  // box_top_left_y
  if (lhs->box_top_left_y != rhs->box_top_left_y) {
    return false;
  }
  // box_width
  if (lhs->box_width != rhs->box_width) {
    return false;
  }
  // box_height
  if (lhs->box_height != rhs->box_height) {
    return false;
  }
  // box_center_x
  if (lhs->box_center_x != rhs->box_center_x) {
    return false;
  }
  // box_center_y
  if (lhs->box_center_y != rhs->box_center_y) {
    return false;
  }
  // camera
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->camera), &(rhs->camera)))
  {
    return false;
  }
  return true;
}

bool
interfaces_pkg__msg__DetectedObject__copy(
  const interfaces_pkg__msg__DetectedObject * input,
  interfaces_pkg__msg__DetectedObject * output)
{
  if (!input || !output) {
    return false;
  }
  // object_name
  if (!rosidl_runtime_c__String__copy(
      &(input->object_name), &(output->object_name)))
  {
    return false;
  }
  // object_id
  output->object_id = input->object_id;
  // confidence
  output->confidence = input->confidence;
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
  // obj_height
  output->obj_height = input->obj_height;
  // obj_width
  output->obj_width = input->obj_width;
  // box_top_left_x
  output->box_top_left_x = input->box_top_left_x;
  // box_top_left_y
  output->box_top_left_y = input->box_top_left_y;
  // box_width
  output->box_width = input->box_width;
  // box_height
  output->box_height = input->box_height;
  // box_center_x
  output->box_center_x = input->box_center_x;
  // box_center_y
  output->box_center_y = input->box_center_y;
  // camera
  if (!rosidl_runtime_c__String__copy(
      &(input->camera), &(output->camera)))
  {
    return false;
  }
  return true;
}

interfaces_pkg__msg__DetectedObject *
interfaces_pkg__msg__DetectedObject__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  interfaces_pkg__msg__DetectedObject * msg = (interfaces_pkg__msg__DetectedObject *)allocator.allocate(sizeof(interfaces_pkg__msg__DetectedObject), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(interfaces_pkg__msg__DetectedObject));
  bool success = interfaces_pkg__msg__DetectedObject__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
interfaces_pkg__msg__DetectedObject__destroy(interfaces_pkg__msg__DetectedObject * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    interfaces_pkg__msg__DetectedObject__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
interfaces_pkg__msg__DetectedObject__Sequence__init(interfaces_pkg__msg__DetectedObject__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  interfaces_pkg__msg__DetectedObject * data = NULL;

  if (size) {
    data = (interfaces_pkg__msg__DetectedObject *)allocator.zero_allocate(size, sizeof(interfaces_pkg__msg__DetectedObject), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = interfaces_pkg__msg__DetectedObject__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        interfaces_pkg__msg__DetectedObject__fini(&data[i - 1]);
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
interfaces_pkg__msg__DetectedObject__Sequence__fini(interfaces_pkg__msg__DetectedObject__Sequence * array)
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
      interfaces_pkg__msg__DetectedObject__fini(&array->data[i]);
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

interfaces_pkg__msg__DetectedObject__Sequence *
interfaces_pkg__msg__DetectedObject__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  interfaces_pkg__msg__DetectedObject__Sequence * array = (interfaces_pkg__msg__DetectedObject__Sequence *)allocator.allocate(sizeof(interfaces_pkg__msg__DetectedObject__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = interfaces_pkg__msg__DetectedObject__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
interfaces_pkg__msg__DetectedObject__Sequence__destroy(interfaces_pkg__msg__DetectedObject__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    interfaces_pkg__msg__DetectedObject__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
interfaces_pkg__msg__DetectedObject__Sequence__are_equal(const interfaces_pkg__msg__DetectedObject__Sequence * lhs, const interfaces_pkg__msg__DetectedObject__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!interfaces_pkg__msg__DetectedObject__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
interfaces_pkg__msg__DetectedObject__Sequence__copy(
  const interfaces_pkg__msg__DetectedObject__Sequence * input,
  interfaces_pkg__msg__DetectedObject__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(interfaces_pkg__msg__DetectedObject);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    interfaces_pkg__msg__DetectedObject * data =
      (interfaces_pkg__msg__DetectedObject *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!interfaces_pkg__msg__DetectedObject__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          interfaces_pkg__msg__DetectedObject__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!interfaces_pkg__msg__DetectedObject__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
