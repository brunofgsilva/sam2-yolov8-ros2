// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from interfaces_pkg:msg/ListOfTrackingMasks.idl
// generated code does not contain a copyright notice
#include "interfaces_pkg/msg/detail/list_of_tracking_masks__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `list_of_masks`
#include "interfaces_pkg/msg/detail/tracking_mask__functions.h"

bool
interfaces_pkg__msg__ListOfTrackingMasks__init(interfaces_pkg__msg__ListOfTrackingMasks * msg)
{
  if (!msg) {
    return false;
  }
  // list_of_masks
  if (!interfaces_pkg__msg__TrackingMask__Sequence__init(&msg->list_of_masks, 0)) {
    interfaces_pkg__msg__ListOfTrackingMasks__fini(msg);
    return false;
  }
  // nr_of_objects_detected
  return true;
}

void
interfaces_pkg__msg__ListOfTrackingMasks__fini(interfaces_pkg__msg__ListOfTrackingMasks * msg)
{
  if (!msg) {
    return;
  }
  // list_of_masks
  interfaces_pkg__msg__TrackingMask__Sequence__fini(&msg->list_of_masks);
  // nr_of_objects_detected
}

bool
interfaces_pkg__msg__ListOfTrackingMasks__are_equal(const interfaces_pkg__msg__ListOfTrackingMasks * lhs, const interfaces_pkg__msg__ListOfTrackingMasks * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // list_of_masks
  if (!interfaces_pkg__msg__TrackingMask__Sequence__are_equal(
      &(lhs->list_of_masks), &(rhs->list_of_masks)))
  {
    return false;
  }
  // nr_of_objects_detected
  if (lhs->nr_of_objects_detected != rhs->nr_of_objects_detected) {
    return false;
  }
  return true;
}

bool
interfaces_pkg__msg__ListOfTrackingMasks__copy(
  const interfaces_pkg__msg__ListOfTrackingMasks * input,
  interfaces_pkg__msg__ListOfTrackingMasks * output)
{
  if (!input || !output) {
    return false;
  }
  // list_of_masks
  if (!interfaces_pkg__msg__TrackingMask__Sequence__copy(
      &(input->list_of_masks), &(output->list_of_masks)))
  {
    return false;
  }
  // nr_of_objects_detected
  output->nr_of_objects_detected = input->nr_of_objects_detected;
  return true;
}

interfaces_pkg__msg__ListOfTrackingMasks *
interfaces_pkg__msg__ListOfTrackingMasks__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  interfaces_pkg__msg__ListOfTrackingMasks * msg = (interfaces_pkg__msg__ListOfTrackingMasks *)allocator.allocate(sizeof(interfaces_pkg__msg__ListOfTrackingMasks), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(interfaces_pkg__msg__ListOfTrackingMasks));
  bool success = interfaces_pkg__msg__ListOfTrackingMasks__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
interfaces_pkg__msg__ListOfTrackingMasks__destroy(interfaces_pkg__msg__ListOfTrackingMasks * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    interfaces_pkg__msg__ListOfTrackingMasks__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
interfaces_pkg__msg__ListOfTrackingMasks__Sequence__init(interfaces_pkg__msg__ListOfTrackingMasks__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  interfaces_pkg__msg__ListOfTrackingMasks * data = NULL;

  if (size) {
    data = (interfaces_pkg__msg__ListOfTrackingMasks *)allocator.zero_allocate(size, sizeof(interfaces_pkg__msg__ListOfTrackingMasks), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = interfaces_pkg__msg__ListOfTrackingMasks__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        interfaces_pkg__msg__ListOfTrackingMasks__fini(&data[i - 1]);
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
interfaces_pkg__msg__ListOfTrackingMasks__Sequence__fini(interfaces_pkg__msg__ListOfTrackingMasks__Sequence * array)
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
      interfaces_pkg__msg__ListOfTrackingMasks__fini(&array->data[i]);
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

interfaces_pkg__msg__ListOfTrackingMasks__Sequence *
interfaces_pkg__msg__ListOfTrackingMasks__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  interfaces_pkg__msg__ListOfTrackingMasks__Sequence * array = (interfaces_pkg__msg__ListOfTrackingMasks__Sequence *)allocator.allocate(sizeof(interfaces_pkg__msg__ListOfTrackingMasks__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = interfaces_pkg__msg__ListOfTrackingMasks__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
interfaces_pkg__msg__ListOfTrackingMasks__Sequence__destroy(interfaces_pkg__msg__ListOfTrackingMasks__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    interfaces_pkg__msg__ListOfTrackingMasks__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
interfaces_pkg__msg__ListOfTrackingMasks__Sequence__are_equal(const interfaces_pkg__msg__ListOfTrackingMasks__Sequence * lhs, const interfaces_pkg__msg__ListOfTrackingMasks__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!interfaces_pkg__msg__ListOfTrackingMasks__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
interfaces_pkg__msg__ListOfTrackingMasks__Sequence__copy(
  const interfaces_pkg__msg__ListOfTrackingMasks__Sequence * input,
  interfaces_pkg__msg__ListOfTrackingMasks__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(interfaces_pkg__msg__ListOfTrackingMasks);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    interfaces_pkg__msg__ListOfTrackingMasks * data =
      (interfaces_pkg__msg__ListOfTrackingMasks *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!interfaces_pkg__msg__ListOfTrackingMasks__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          interfaces_pkg__msg__ListOfTrackingMasks__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!interfaces_pkg__msg__ListOfTrackingMasks__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
