// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from interfaces_pkg:msg/MaskDetection.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "interfaces_pkg/msg/detail/mask_detection__rosidl_typesupport_introspection_c.h"
#include "interfaces_pkg/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "interfaces_pkg/msg/detail/mask_detection__functions.h"
#include "interfaces_pkg/msg/detail/mask_detection__struct.h"


// Include directives for member types
// Member `point`
#include "geometry_msgs/msg/point.h"
// Member `point`
#include "geometry_msgs/msg/detail/point__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void interfaces_pkg__msg__MaskDetection__rosidl_typesupport_introspection_c__MaskDetection_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  interfaces_pkg__msg__MaskDetection__init(message_memory);
}

void interfaces_pkg__msg__MaskDetection__rosidl_typesupport_introspection_c__MaskDetection_fini_function(void * message_memory)
{
  interfaces_pkg__msg__MaskDetection__fini(message_memory);
}

size_t interfaces_pkg__msg__MaskDetection__rosidl_typesupport_introspection_c__size_function__MaskDetection__point(
  const void * untyped_member)
{
  const geometry_msgs__msg__Point__Sequence * member =
    (const geometry_msgs__msg__Point__Sequence *)(untyped_member);
  return member->size;
}

const void * interfaces_pkg__msg__MaskDetection__rosidl_typesupport_introspection_c__get_const_function__MaskDetection__point(
  const void * untyped_member, size_t index)
{
  const geometry_msgs__msg__Point__Sequence * member =
    (const geometry_msgs__msg__Point__Sequence *)(untyped_member);
  return &member->data[index];
}

void * interfaces_pkg__msg__MaskDetection__rosidl_typesupport_introspection_c__get_function__MaskDetection__point(
  void * untyped_member, size_t index)
{
  geometry_msgs__msg__Point__Sequence * member =
    (geometry_msgs__msg__Point__Sequence *)(untyped_member);
  return &member->data[index];
}

void interfaces_pkg__msg__MaskDetection__rosidl_typesupport_introspection_c__fetch_function__MaskDetection__point(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const geometry_msgs__msg__Point * item =
    ((const geometry_msgs__msg__Point *)
    interfaces_pkg__msg__MaskDetection__rosidl_typesupport_introspection_c__get_const_function__MaskDetection__point(untyped_member, index));
  geometry_msgs__msg__Point * value =
    (geometry_msgs__msg__Point *)(untyped_value);
  *value = *item;
}

void interfaces_pkg__msg__MaskDetection__rosidl_typesupport_introspection_c__assign_function__MaskDetection__point(
  void * untyped_member, size_t index, const void * untyped_value)
{
  geometry_msgs__msg__Point * item =
    ((geometry_msgs__msg__Point *)
    interfaces_pkg__msg__MaskDetection__rosidl_typesupport_introspection_c__get_function__MaskDetection__point(untyped_member, index));
  const geometry_msgs__msg__Point * value =
    (const geometry_msgs__msg__Point *)(untyped_value);
  *item = *value;
}

bool interfaces_pkg__msg__MaskDetection__rosidl_typesupport_introspection_c__resize_function__MaskDetection__point(
  void * untyped_member, size_t size)
{
  geometry_msgs__msg__Point__Sequence * member =
    (geometry_msgs__msg__Point__Sequence *)(untyped_member);
  geometry_msgs__msg__Point__Sequence__fini(member);
  return geometry_msgs__msg__Point__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember interfaces_pkg__msg__MaskDetection__rosidl_typesupport_introspection_c__MaskDetection_message_member_array[1] = {
  {
    "point",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(interfaces_pkg__msg__MaskDetection, point),  // bytes offset in struct
    NULL,  // default value
    interfaces_pkg__msg__MaskDetection__rosidl_typesupport_introspection_c__size_function__MaskDetection__point,  // size() function pointer
    interfaces_pkg__msg__MaskDetection__rosidl_typesupport_introspection_c__get_const_function__MaskDetection__point,  // get_const(index) function pointer
    interfaces_pkg__msg__MaskDetection__rosidl_typesupport_introspection_c__get_function__MaskDetection__point,  // get(index) function pointer
    interfaces_pkg__msg__MaskDetection__rosidl_typesupport_introspection_c__fetch_function__MaskDetection__point,  // fetch(index, &value) function pointer
    interfaces_pkg__msg__MaskDetection__rosidl_typesupport_introspection_c__assign_function__MaskDetection__point,  // assign(index, value) function pointer
    interfaces_pkg__msg__MaskDetection__rosidl_typesupport_introspection_c__resize_function__MaskDetection__point  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers interfaces_pkg__msg__MaskDetection__rosidl_typesupport_introspection_c__MaskDetection_message_members = {
  "interfaces_pkg__msg",  // message namespace
  "MaskDetection",  // message name
  1,  // number of fields
  sizeof(interfaces_pkg__msg__MaskDetection),
  interfaces_pkg__msg__MaskDetection__rosidl_typesupport_introspection_c__MaskDetection_message_member_array,  // message members
  interfaces_pkg__msg__MaskDetection__rosidl_typesupport_introspection_c__MaskDetection_init_function,  // function to initialize message memory (memory has to be allocated)
  interfaces_pkg__msg__MaskDetection__rosidl_typesupport_introspection_c__MaskDetection_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t interfaces_pkg__msg__MaskDetection__rosidl_typesupport_introspection_c__MaskDetection_message_type_support_handle = {
  0,
  &interfaces_pkg__msg__MaskDetection__rosidl_typesupport_introspection_c__MaskDetection_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_interfaces_pkg
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, interfaces_pkg, msg, MaskDetection)() {
  interfaces_pkg__msg__MaskDetection__rosidl_typesupport_introspection_c__MaskDetection_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, geometry_msgs, msg, Point)();
  if (!interfaces_pkg__msg__MaskDetection__rosidl_typesupport_introspection_c__MaskDetection_message_type_support_handle.typesupport_identifier) {
    interfaces_pkg__msg__MaskDetection__rosidl_typesupport_introspection_c__MaskDetection_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &interfaces_pkg__msg__MaskDetection__rosidl_typesupport_introspection_c__MaskDetection_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
