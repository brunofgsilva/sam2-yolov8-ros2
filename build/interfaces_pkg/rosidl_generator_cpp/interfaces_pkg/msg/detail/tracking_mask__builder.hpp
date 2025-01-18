// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from interfaces_pkg:msg/TrackingMask.idl
// generated code does not contain a copyright notice

#ifndef INTERFACES_PKG__MSG__DETAIL__TRACKING_MASK__BUILDER_HPP_
#define INTERFACES_PKG__MSG__DETAIL__TRACKING_MASK__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "interfaces_pkg/msg/detail/tracking_mask__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace interfaces_pkg
{

namespace msg
{

namespace builder
{

class Init_TrackingMask_position_absolute
{
public:
  explicit Init_TrackingMask_position_absolute(::interfaces_pkg::msg::TrackingMask & msg)
  : msg_(msg)
  {}
  ::interfaces_pkg::msg::TrackingMask position_absolute(::interfaces_pkg::msg::TrackingMask::_position_absolute_type arg)
  {
    msg_.position_absolute = std::move(arg);
    return std::move(msg_);
  }

private:
  ::interfaces_pkg::msg::TrackingMask msg_;
};

class Init_TrackingMask_position_relative
{
public:
  explicit Init_TrackingMask_position_relative(::interfaces_pkg::msg::TrackingMask & msg)
  : msg_(msg)
  {}
  Init_TrackingMask_position_absolute position_relative(::interfaces_pkg::msg::TrackingMask::_position_relative_type arg)
  {
    msg_.position_relative = std::move(arg);
    return Init_TrackingMask_position_absolute(msg_);
  }

private:
  ::interfaces_pkg::msg::TrackingMask msg_;
};

class Init_TrackingMask_mask
{
public:
  explicit Init_TrackingMask_mask(::interfaces_pkg::msg::TrackingMask & msg)
  : msg_(msg)
  {}
  Init_TrackingMask_position_relative mask(::interfaces_pkg::msg::TrackingMask::_mask_type arg)
  {
    msg_.mask = std::move(arg);
    return Init_TrackingMask_position_relative(msg_);
  }

private:
  ::interfaces_pkg::msg::TrackingMask msg_;
};

class Init_TrackingMask_centroid
{
public:
  explicit Init_TrackingMask_centroid(::interfaces_pkg::msg::TrackingMask & msg)
  : msg_(msg)
  {}
  Init_TrackingMask_mask centroid(::interfaces_pkg::msg::TrackingMask::_centroid_type arg)
  {
    msg_.centroid = std::move(arg);
    return Init_TrackingMask_mask(msg_);
  }

private:
  ::interfaces_pkg::msg::TrackingMask msg_;
};

class Init_TrackingMask_object_id
{
public:
  explicit Init_TrackingMask_object_id(::interfaces_pkg::msg::TrackingMask & msg)
  : msg_(msg)
  {}
  Init_TrackingMask_centroid object_id(::interfaces_pkg::msg::TrackingMask::_object_id_type arg)
  {
    msg_.object_id = std::move(arg);
    return Init_TrackingMask_centroid(msg_);
  }

private:
  ::interfaces_pkg::msg::TrackingMask msg_;
};

class Init_TrackingMask_obj_name
{
public:
  Init_TrackingMask_obj_name()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_TrackingMask_object_id obj_name(::interfaces_pkg::msg::TrackingMask::_obj_name_type arg)
  {
    msg_.obj_name = std::move(arg);
    return Init_TrackingMask_object_id(msg_);
  }

private:
  ::interfaces_pkg::msg::TrackingMask msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::interfaces_pkg::msg::TrackingMask>()
{
  return interfaces_pkg::msg::builder::Init_TrackingMask_obj_name();
}

}  // namespace interfaces_pkg

#endif  // INTERFACES_PKG__MSG__DETAIL__TRACKING_MASK__BUILDER_HPP_
