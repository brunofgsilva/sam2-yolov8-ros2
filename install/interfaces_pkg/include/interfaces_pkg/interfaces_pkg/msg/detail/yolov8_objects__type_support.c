// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from interfaces_pkg:msg/Yolov8Objects.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "interfaces_pkg/msg/detail/yolov8_objects__rosidl_typesupport_introspection_c.h"
#include "interfaces_pkg/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "interfaces_pkg/msg/detail/yolov8_objects__functions.h"
#include "interfaces_pkg/msg/detail/yolov8_objects__struct.h"


// Include directives for member types
// Member `objects`
#include "interfaces_pkg/msg/detected_object.h"
// Member `objects`
#include "interfaces_pkg/msg/detail/detected_object__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void interfaces_pkg__msg__Yolov8Objects__rosidl_typesupport_introspection_c__Yolov8Objects_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  interfaces_pkg__msg__Yolov8Objects__init(message_memory);
}

void interfaces_pkg__msg__Yolov8Objects__rosidl_typesupport_introspection_c__Yolov8Objects_fini_function(void * message_memory)
{
  interfaces_pkg__msg__Yolov8Objects__fini(message_memory);
}

size_t interfaces_pkg__msg__Yolov8Objects__rosidl_typesupport_introspection_c__size_function__Yolov8Objects__objects(
  const void * untyped_member)
{
  const interfaces_pkg__msg__DetectedObject__Sequence * member =
    (const interfaces_pkg__msg__DetectedObject__Sequence *)(untyped_member);
  return member->size;
}

const void * interfaces_pkg__msg__Yolov8Objects__rosidl_typesupport_introspection_c__get_const_function__Yolov8Objects__objects(
  const void * untyped_member, size_t index)
{
  const interfaces_pkg__msg__DetectedObject__Sequence * member =
    (const interfaces_pkg__msg__DetectedObject__Sequence *)(untyped_member);
  return &member->data[index];
}

void * interfaces_pkg__msg__Yolov8Objects__rosidl_typesupport_introspection_c__get_function__Yolov8Objects__objects(
  void * untyped_member, size_t index)
{
  interfaces_pkg__msg__DetectedObject__Sequence * member =
    (interfaces_pkg__msg__DetectedObject__Sequence *)(untyped_member);
  return &member->data[index];
}

void interfaces_pkg__msg__Yolov8Objects__rosidl_typesupport_introspection_c__fetch_function__Yolov8Objects__objects(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const interfaces_pkg__msg__DetectedObject * item =
    ((const interfaces_pkg__msg__DetectedObject *)
    interfaces_pkg__msg__Yolov8Objects__rosidl_typesupport_introspection_c__get_const_function__Yolov8Objects__objects(untyped_member, index));
  interfaces_pkg__msg__DetectedObject * value =
    (interfaces_pkg__msg__DetectedObject *)(untyped_value);
  *value = *item;
}

void interfaces_pkg__msg__Yolov8Objects__rosidl_typesupport_introspection_c__assign_function__Yolov8Objects__objects(
  void * untyped_member, size_t index, const void * untyped_value)
{
  interfaces_pkg__msg__DetectedObject * item =
    ((interfaces_pkg__msg__DetectedObject *)
    interfaces_pkg__msg__Yolov8Objects__rosidl_typesupport_introspection_c__get_function__Yolov8Objects__objects(untyped_member, index));
  const interfaces_pkg__msg__DetectedObject * value =
    (const interfaces_pkg__msg__DetectedObject *)(untyped_value);
  *item = *value;
}

bool interfaces_pkg__msg__Yolov8Objects__rosidl_typesupport_introspection_c__resize_function__Yolov8Objects__objects(
  void * untyped_member, size_t size)
{
  interfaces_pkg__msg__DetectedObject__Sequence * member =
    (interfaces_pkg__msg__DetectedObject__Sequence *)(untyped_member);
  interfaces_pkg__msg__DetectedObject__Sequence__fini(member);
  return interfaces_pkg__msg__DetectedObject__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember interfaces_pkg__msg__Yolov8Objects__rosidl_typesupport_introspection_c__Yolov8Objects_message_member_array[2] = {
  {
    "num_objects",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(interfaces_pkg__msg__Yolov8Objects, num_objects),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "objects",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(interfaces_pkg__msg__Yolov8Objects, objects),  // bytes offset in struct
    NULL,  // default value
    interfaces_pkg__msg__Yolov8Objects__rosidl_typesupport_introspection_c__size_function__Yolov8Objects__objects,  // size() function pointer
    interfaces_pkg__msg__Yolov8Objects__rosidl_typesupport_introspection_c__get_const_function__Yolov8Objects__objects,  // get_const(index) function pointer
    interfaces_pkg__msg__Yolov8Objects__rosidl_typesupport_introspection_c__get_function__Yolov8Objects__objects,  // get(index) function pointer
    interfaces_pkg__msg__Yolov8Objects__rosidl_typesupport_introspection_c__fetch_function__Yolov8Objects__objects,  // fetch(index, &value) function pointer
    interfaces_pkg__msg__Yolov8Objects__rosidl_typesupport_introspection_c__assign_function__Yolov8Objects__objects,  // assign(index, value) function pointer
    interfaces_pkg__msg__Yolov8Objects__rosidl_typesupport_introspection_c__resize_function__Yolov8Objects__objects  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers interfaces_pkg__msg__Yolov8Objects__rosidl_typesupport_introspection_c__Yolov8Objects_message_members = {
  "interfaces_pkg__msg",  // message namespace
  "Yolov8Objects",  // message name
  2,  // number of fields
  sizeof(interfaces_pkg__msg__Yolov8Objects),
  interfaces_pkg__msg__Yolov8Objects__rosidl_typesupport_introspection_c__Yolov8Objects_message_member_array,  // message members
  interfaces_pkg__msg__Yolov8Objects__rosidl_typesupport_introspection_c__Yolov8Objects_init_function,  // function to initialize message memory (memory has to be allocated)
  interfaces_pkg__msg__Yolov8Objects__rosidl_typesupport_introspection_c__Yolov8Objects_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t interfaces_pkg__msg__Yolov8Objects__rosidl_typesupport_introspection_c__Yolov8Objects_message_type_support_handle = {
  0,
  &interfaces_pkg__msg__Yolov8Objects__rosidl_typesupport_introspection_c__Yolov8Objects_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_interfaces_pkg
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, interfaces_pkg, msg, Yolov8Objects)() {
  interfaces_pkg__msg__Yolov8Objects__rosidl_typesupport_introspection_c__Yolov8Objects_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, interfaces_pkg, msg, DetectedObject)();
  if (!interfaces_pkg__msg__Yolov8Objects__rosidl_typesupport_introspection_c__Yolov8Objects_message_type_support_handle.typesupport_identifier) {
    interfaces_pkg__msg__Yolov8Objects__rosidl_typesupport_introspection_c__Yolov8Objects_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &interfaces_pkg__msg__Yolov8Objects__rosidl_typesupport_introspection_c__Yolov8Objects_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
