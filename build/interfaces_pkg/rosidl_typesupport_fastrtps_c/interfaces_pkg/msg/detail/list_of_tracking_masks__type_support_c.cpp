// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from interfaces_pkg:msg/ListOfTrackingMasks.idl
// generated code does not contain a copyright notice
#include "interfaces_pkg/msg/detail/list_of_tracking_masks__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "interfaces_pkg/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "interfaces_pkg/msg/detail/list_of_tracking_masks__struct.h"
#include "interfaces_pkg/msg/detail/list_of_tracking_masks__functions.h"
#include "fastcdr/Cdr.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif

#include "interfaces_pkg/msg/detail/tracking_mask__functions.h"  // list_of_masks

// forward declare type support functions
size_t get_serialized_size_interfaces_pkg__msg__TrackingMask(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_interfaces_pkg__msg__TrackingMask(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, interfaces_pkg, msg, TrackingMask)();


using _ListOfTrackingMasks__ros_msg_type = interfaces_pkg__msg__ListOfTrackingMasks;

static bool _ListOfTrackingMasks__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _ListOfTrackingMasks__ros_msg_type * ros_message = static_cast<const _ListOfTrackingMasks__ros_msg_type *>(untyped_ros_message);
  // Field name: list_of_masks
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, interfaces_pkg, msg, TrackingMask
      )()->data);
    size_t size = ros_message->list_of_masks.size;
    auto array_ptr = ros_message->list_of_masks.data;
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; ++i) {
      if (!callbacks->cdr_serialize(
          &array_ptr[i], cdr))
      {
        return false;
      }
    }
  }

  // Field name: nr_of_objects_detected
  {
    cdr << ros_message->nr_of_objects_detected;
  }

  return true;
}

static bool _ListOfTrackingMasks__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _ListOfTrackingMasks__ros_msg_type * ros_message = static_cast<_ListOfTrackingMasks__ros_msg_type *>(untyped_ros_message);
  // Field name: list_of_masks
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, interfaces_pkg, msg, TrackingMask
      )()->data);
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->list_of_masks.data) {
      interfaces_pkg__msg__TrackingMask__Sequence__fini(&ros_message->list_of_masks);
    }
    if (!interfaces_pkg__msg__TrackingMask__Sequence__init(&ros_message->list_of_masks, size)) {
      fprintf(stderr, "failed to create array for field 'list_of_masks'");
      return false;
    }
    auto array_ptr = ros_message->list_of_masks.data;
    for (size_t i = 0; i < size; ++i) {
      if (!callbacks->cdr_deserialize(
          cdr, &array_ptr[i]))
      {
        return false;
      }
    }
  }

  // Field name: nr_of_objects_detected
  {
    cdr >> ros_message->nr_of_objects_detected;
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_interfaces_pkg
size_t get_serialized_size_interfaces_pkg__msg__ListOfTrackingMasks(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _ListOfTrackingMasks__ros_msg_type * ros_message = static_cast<const _ListOfTrackingMasks__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name list_of_masks
  {
    size_t array_size = ros_message->list_of_masks.size;
    auto array_ptr = ros_message->list_of_masks.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += get_serialized_size_interfaces_pkg__msg__TrackingMask(
        &array_ptr[index], current_alignment);
    }
  }
  // field.name nr_of_objects_detected
  {
    size_t item_size = sizeof(ros_message->nr_of_objects_detected);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _ListOfTrackingMasks__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_interfaces_pkg__msg__ListOfTrackingMasks(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_interfaces_pkg
size_t max_serialized_size_interfaces_pkg__msg__ListOfTrackingMasks(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  size_t last_member_size = 0;
  (void)last_member_size;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;

  // member: list_of_masks
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_interfaces_pkg__msg__TrackingMask(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }
  // member: nr_of_objects_detected
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = interfaces_pkg__msg__ListOfTrackingMasks;
    is_plain =
      (
      offsetof(DataType, nr_of_objects_detected) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static size_t _ListOfTrackingMasks__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_interfaces_pkg__msg__ListOfTrackingMasks(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_ListOfTrackingMasks = {
  "interfaces_pkg::msg",
  "ListOfTrackingMasks",
  _ListOfTrackingMasks__cdr_serialize,
  _ListOfTrackingMasks__cdr_deserialize,
  _ListOfTrackingMasks__get_serialized_size,
  _ListOfTrackingMasks__max_serialized_size
};

static rosidl_message_type_support_t _ListOfTrackingMasks__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_ListOfTrackingMasks,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, interfaces_pkg, msg, ListOfTrackingMasks)() {
  return &_ListOfTrackingMasks__type_support;
}

#if defined(__cplusplus)
}
#endif
