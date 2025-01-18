// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from interfaces_pkg:msg/ListOfTrackingMasks.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "interfaces_pkg/msg/detail/list_of_tracking_masks__rosidl_typesupport_introspection_c.h"
#include "interfaces_pkg/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "interfaces_pkg/msg/detail/list_of_tracking_masks__functions.h"
#include "interfaces_pkg/msg/detail/list_of_tracking_masks__struct.h"


// Include directives for member types
// Member `list_of_masks`
#include "interfaces_pkg/msg/tracking_mask.h"
// Member `list_of_masks`
#include "interfaces_pkg/msg/detail/tracking_mask__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void interfaces_pkg__msg__ListOfTrackingMasks__rosidl_typesupport_introspection_c__ListOfTrackingMasks_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  interfaces_pkg__msg__ListOfTrackingMasks__init(message_memory);
}

void interfaces_pkg__msg__ListOfTrackingMasks__rosidl_typesupport_introspection_c__ListOfTrackingMasks_fini_function(void * message_memory)
{
  interfaces_pkg__msg__ListOfTrackingMasks__fini(message_memory);
}

size_t interfaces_pkg__msg__ListOfTrackingMasks__rosidl_typesupport_introspection_c__size_function__ListOfTrackingMasks__list_of_masks(
  const void * untyped_member)
{
  const interfaces_pkg__msg__TrackingMask__Sequence * member =
    (const interfaces_pkg__msg__TrackingMask__Sequence *)(untyped_member);
  return member->size;
}

const void * interfaces_pkg__msg__ListOfTrackingMasks__rosidl_typesupport_introspection_c__get_const_function__ListOfTrackingMasks__list_of_masks(
  const void * untyped_member, size_t index)
{
  const interfaces_pkg__msg__TrackingMask__Sequence * member =
    (const interfaces_pkg__msg__TrackingMask__Sequence *)(untyped_member);
  return &member->data[index];
}

void * interfaces_pkg__msg__ListOfTrackingMasks__rosidl_typesupport_introspection_c__get_function__ListOfTrackingMasks__list_of_masks(
  void * untyped_member, size_t index)
{
  interfaces_pkg__msg__TrackingMask__Sequence * member =
    (interfaces_pkg__msg__TrackingMask__Sequence *)(untyped_member);
  return &member->data[index];
}

void interfaces_pkg__msg__ListOfTrackingMasks__rosidl_typesupport_introspection_c__fetch_function__ListOfTrackingMasks__list_of_masks(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const interfaces_pkg__msg__TrackingMask * item =
    ((const interfaces_pkg__msg__TrackingMask *)
    interfaces_pkg__msg__ListOfTrackingMasks__rosidl_typesupport_introspection_c__get_const_function__ListOfTrackingMasks__list_of_masks(untyped_member, index));
  interfaces_pkg__msg__TrackingMask * value =
    (interfaces_pkg__msg__TrackingMask *)(untyped_value);
  *value = *item;
}

void interfaces_pkg__msg__ListOfTrackingMasks__rosidl_typesupport_introspection_c__assign_function__ListOfTrackingMasks__list_of_masks(
  void * untyped_member, size_t index, const void * untyped_value)
{
  interfaces_pkg__msg__TrackingMask * item =
    ((interfaces_pkg__msg__TrackingMask *)
    interfaces_pkg__msg__ListOfTrackingMasks__rosidl_typesupport_introspection_c__get_function__ListOfTrackingMasks__list_of_masks(untyped_member, index));
  const interfaces_pkg__msg__TrackingMask * value =
    (const interfaces_pkg__msg__TrackingMask *)(untyped_value);
  *item = *value;
}

bool interfaces_pkg__msg__ListOfTrackingMasks__rosidl_typesupport_introspection_c__resize_function__ListOfTrackingMasks__list_of_masks(
  void * untyped_member, size_t size)
{
  interfaces_pkg__msg__TrackingMask__Sequence * member =
    (interfaces_pkg__msg__TrackingMask__Sequence *)(untyped_member);
  interfaces_pkg__msg__TrackingMask__Sequence__fini(member);
  return interfaces_pkg__msg__TrackingMask__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember interfaces_pkg__msg__ListOfTrackingMasks__rosidl_typesupport_introspection_c__ListOfTrackingMasks_message_member_array[2] = {
  {
    "list_of_masks",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(interfaces_pkg__msg__ListOfTrackingMasks, list_of_masks),  // bytes offset in struct
    NULL,  // default value
    interfaces_pkg__msg__ListOfTrackingMasks__rosidl_typesupport_introspection_c__size_function__ListOfTrackingMasks__list_of_masks,  // size() function pointer
    interfaces_pkg__msg__ListOfTrackingMasks__rosidl_typesupport_introspection_c__get_const_function__ListOfTrackingMasks__list_of_masks,  // get_const(index) function pointer
    interfaces_pkg__msg__ListOfTrackingMasks__rosidl_typesupport_introspection_c__get_function__ListOfTrackingMasks__list_of_masks,  // get(index) function pointer
    interfaces_pkg__msg__ListOfTrackingMasks__rosidl_typesupport_introspection_c__fetch_function__ListOfTrackingMasks__list_of_masks,  // fetch(index, &value) function pointer
    interfaces_pkg__msg__ListOfTrackingMasks__rosidl_typesupport_introspection_c__assign_function__ListOfTrackingMasks__list_of_masks,  // assign(index, value) function pointer
    interfaces_pkg__msg__ListOfTrackingMasks__rosidl_typesupport_introspection_c__resize_function__ListOfTrackingMasks__list_of_masks  // resize(index) function pointer
  },
  {
    "nr_of_objects_detected",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(interfaces_pkg__msg__ListOfTrackingMasks, nr_of_objects_detected),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers interfaces_pkg__msg__ListOfTrackingMasks__rosidl_typesupport_introspection_c__ListOfTrackingMasks_message_members = {
  "interfaces_pkg__msg",  // message namespace
  "ListOfTrackingMasks",  // message name
  2,  // number of fields
  sizeof(interfaces_pkg__msg__ListOfTrackingMasks),
  interfaces_pkg__msg__ListOfTrackingMasks__rosidl_typesupport_introspection_c__ListOfTrackingMasks_message_member_array,  // message members
  interfaces_pkg__msg__ListOfTrackingMasks__rosidl_typesupport_introspection_c__ListOfTrackingMasks_init_function,  // function to initialize message memory (memory has to be allocated)
  interfaces_pkg__msg__ListOfTrackingMasks__rosidl_typesupport_introspection_c__ListOfTrackingMasks_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t interfaces_pkg__msg__ListOfTrackingMasks__rosidl_typesupport_introspection_c__ListOfTrackingMasks_message_type_support_handle = {
  0,
  &interfaces_pkg__msg__ListOfTrackingMasks__rosidl_typesupport_introspection_c__ListOfTrackingMasks_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_interfaces_pkg
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, interfaces_pkg, msg, ListOfTrackingMasks)() {
  interfaces_pkg__msg__ListOfTrackingMasks__rosidl_typesupport_introspection_c__ListOfTrackingMasks_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, interfaces_pkg, msg, TrackingMask)();
  if (!interfaces_pkg__msg__ListOfTrackingMasks__rosidl_typesupport_introspection_c__ListOfTrackingMasks_message_type_support_handle.typesupport_identifier) {
    interfaces_pkg__msg__ListOfTrackingMasks__rosidl_typesupport_introspection_c__ListOfTrackingMasks_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &interfaces_pkg__msg__ListOfTrackingMasks__rosidl_typesupport_introspection_c__ListOfTrackingMasks_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
