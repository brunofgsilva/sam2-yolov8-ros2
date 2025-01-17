// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from interfaces_pkg:msg/Yolov8Objects.idl
// generated code does not contain a copyright notice

#ifndef INTERFACES_PKG__MSG__DETAIL__YOLOV8_OBJECTS__BUILDER_HPP_
#define INTERFACES_PKG__MSG__DETAIL__YOLOV8_OBJECTS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "interfaces_pkg/msg/detail/yolov8_objects__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace interfaces_pkg
{

namespace msg
{

namespace builder
{

class Init_Yolov8Objects_objects
{
public:
  explicit Init_Yolov8Objects_objects(::interfaces_pkg::msg::Yolov8Objects & msg)
  : msg_(msg)
  {}
  ::interfaces_pkg::msg::Yolov8Objects objects(::interfaces_pkg::msg::Yolov8Objects::_objects_type arg)
  {
    msg_.objects = std::move(arg);
    return std::move(msg_);
  }

private:
  ::interfaces_pkg::msg::Yolov8Objects msg_;
};

class Init_Yolov8Objects_num_objects
{
public:
  Init_Yolov8Objects_num_objects()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Yolov8Objects_objects num_objects(::interfaces_pkg::msg::Yolov8Objects::_num_objects_type arg)
  {
    msg_.num_objects = std::move(arg);
    return Init_Yolov8Objects_objects(msg_);
  }

private:
  ::interfaces_pkg::msg::Yolov8Objects msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::interfaces_pkg::msg::Yolov8Objects>()
{
  return interfaces_pkg::msg::builder::Init_Yolov8Objects_num_objects();
}

}  // namespace interfaces_pkg

#endif  // INTERFACES_PKG__MSG__DETAIL__YOLOV8_OBJECTS__BUILDER_HPP_
