// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from interfaces_pkg:msg/ListOfMaskDetections.idl
// generated code does not contain a copyright notice

#ifndef INTERFACES_PKG__MSG__DETAIL__LIST_OF_MASK_DETECTIONS__BUILDER_HPP_
#define INTERFACES_PKG__MSG__DETAIL__LIST_OF_MASK_DETECTIONS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "interfaces_pkg/msg/detail/list_of_mask_detections__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace interfaces_pkg
{

namespace msg
{

namespace builder
{

class Init_ListOfMaskDetections_masks
{
public:
  Init_ListOfMaskDetections_masks()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::interfaces_pkg::msg::ListOfMaskDetections masks(::interfaces_pkg::msg::ListOfMaskDetections::_masks_type arg)
  {
    msg_.masks = std::move(arg);
    return std::move(msg_);
  }

private:
  ::interfaces_pkg::msg::ListOfMaskDetections msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::interfaces_pkg::msg::ListOfMaskDetections>()
{
  return interfaces_pkg::msg::builder::Init_ListOfMaskDetections_masks();
}

}  // namespace interfaces_pkg

#endif  // INTERFACES_PKG__MSG__DETAIL__LIST_OF_MASK_DETECTIONS__BUILDER_HPP_
