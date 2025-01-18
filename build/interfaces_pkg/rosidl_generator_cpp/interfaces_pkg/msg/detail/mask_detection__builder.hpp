// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from interfaces_pkg:msg/MaskDetection.idl
// generated code does not contain a copyright notice

#ifndef INTERFACES_PKG__MSG__DETAIL__MASK_DETECTION__BUILDER_HPP_
#define INTERFACES_PKG__MSG__DETAIL__MASK_DETECTION__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "interfaces_pkg/msg/detail/mask_detection__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace interfaces_pkg
{

namespace msg
{

namespace builder
{

class Init_MaskDetection_point
{
public:
  Init_MaskDetection_point()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::interfaces_pkg::msg::MaskDetection point(::interfaces_pkg::msg::MaskDetection::_point_type arg)
  {
    msg_.point = std::move(arg);
    return std::move(msg_);
  }

private:
  ::interfaces_pkg::msg::MaskDetection msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::interfaces_pkg::msg::MaskDetection>()
{
  return interfaces_pkg::msg::builder::Init_MaskDetection_point();
}

}  // namespace interfaces_pkg

#endif  // INTERFACES_PKG__MSG__DETAIL__MASK_DETECTION__BUILDER_HPP_
