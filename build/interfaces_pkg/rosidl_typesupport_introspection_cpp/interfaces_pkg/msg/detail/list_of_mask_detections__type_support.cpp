// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from interfaces_pkg:msg/ListOfMaskDetections.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "interfaces_pkg/msg/detail/list_of_mask_detections__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace interfaces_pkg
{

namespace msg
{

namespace rosidl_typesupport_introspection_cpp
{

void ListOfMaskDetections_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) interfaces_pkg::msg::ListOfMaskDetections(_init);
}

void ListOfMaskDetections_fini_function(void * message_memory)
{
  auto typed_message = static_cast<interfaces_pkg::msg::ListOfMaskDetections *>(message_memory);
  typed_message->~ListOfMaskDetections();
}

size_t size_function__ListOfMaskDetections__masks(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<interfaces_pkg::msg::MaskDetection> *>(untyped_member);
  return member->size();
}

const void * get_const_function__ListOfMaskDetections__masks(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<interfaces_pkg::msg::MaskDetection> *>(untyped_member);
  return &member[index];
}

void * get_function__ListOfMaskDetections__masks(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<interfaces_pkg::msg::MaskDetection> *>(untyped_member);
  return &member[index];
}

void fetch_function__ListOfMaskDetections__masks(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const interfaces_pkg::msg::MaskDetection *>(
    get_const_function__ListOfMaskDetections__masks(untyped_member, index));
  auto & value = *reinterpret_cast<interfaces_pkg::msg::MaskDetection *>(untyped_value);
  value = item;
}

void assign_function__ListOfMaskDetections__masks(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<interfaces_pkg::msg::MaskDetection *>(
    get_function__ListOfMaskDetections__masks(untyped_member, index));
  const auto & value = *reinterpret_cast<const interfaces_pkg::msg::MaskDetection *>(untyped_value);
  item = value;
}

void resize_function__ListOfMaskDetections__masks(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<interfaces_pkg::msg::MaskDetection> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember ListOfMaskDetections_message_member_array[1] = {
  {
    "masks",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<interfaces_pkg::msg::MaskDetection>(),  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(interfaces_pkg::msg::ListOfMaskDetections, masks),  // bytes offset in struct
    nullptr,  // default value
    size_function__ListOfMaskDetections__masks,  // size() function pointer
    get_const_function__ListOfMaskDetections__masks,  // get_const(index) function pointer
    get_function__ListOfMaskDetections__masks,  // get(index) function pointer
    fetch_function__ListOfMaskDetections__masks,  // fetch(index, &value) function pointer
    assign_function__ListOfMaskDetections__masks,  // assign(index, value) function pointer
    resize_function__ListOfMaskDetections__masks  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers ListOfMaskDetections_message_members = {
  "interfaces_pkg::msg",  // message namespace
  "ListOfMaskDetections",  // message name
  1,  // number of fields
  sizeof(interfaces_pkg::msg::ListOfMaskDetections),
  ListOfMaskDetections_message_member_array,  // message members
  ListOfMaskDetections_init_function,  // function to initialize message memory (memory has to be allocated)
  ListOfMaskDetections_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t ListOfMaskDetections_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &ListOfMaskDetections_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace interfaces_pkg


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<interfaces_pkg::msg::ListOfMaskDetections>()
{
  return &::interfaces_pkg::msg::rosidl_typesupport_introspection_cpp::ListOfMaskDetections_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, interfaces_pkg, msg, ListOfMaskDetections)() {
  return &::interfaces_pkg::msg::rosidl_typesupport_introspection_cpp::ListOfMaskDetections_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
