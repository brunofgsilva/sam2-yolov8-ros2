// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from interfaces_pkg:msg/ListOfTrackingMasks.idl
// generated code does not contain a copyright notice

#ifndef INTERFACES_PKG__MSG__DETAIL__LIST_OF_TRACKING_MASKS__BUILDER_HPP_
#define INTERFACES_PKG__MSG__DETAIL__LIST_OF_TRACKING_MASKS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "interfaces_pkg/msg/detail/list_of_tracking_masks__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace interfaces_pkg
{

namespace msg
{

namespace builder
{

class Init_ListOfTrackingMasks_nr_of_objects_detected
{
public:
  explicit Init_ListOfTrackingMasks_nr_of_objects_detected(::interfaces_pkg::msg::ListOfTrackingMasks & msg)
  : msg_(msg)
  {}
  ::interfaces_pkg::msg::ListOfTrackingMasks nr_of_objects_detected(::interfaces_pkg::msg::ListOfTrackingMasks::_nr_of_objects_detected_type arg)
  {
    msg_.nr_of_objects_detected = std::move(arg);
    return std::move(msg_);
  }

private:
  ::interfaces_pkg::msg::ListOfTrackingMasks msg_;
};

class Init_ListOfTrackingMasks_list_of_masks
{
public:
  Init_ListOfTrackingMasks_list_of_masks()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ListOfTrackingMasks_nr_of_objects_detected list_of_masks(::interfaces_pkg::msg::ListOfTrackingMasks::_list_of_masks_type arg)
  {
    msg_.list_of_masks = std::move(arg);
    return Init_ListOfTrackingMasks_nr_of_objects_detected(msg_);
  }

private:
  ::interfaces_pkg::msg::ListOfTrackingMasks msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::interfaces_pkg::msg::ListOfTrackingMasks>()
{
  return interfaces_pkg::msg::builder::Init_ListOfTrackingMasks_list_of_masks();
}

}  // namespace interfaces_pkg

#endif  // INTERFACES_PKG__MSG__DETAIL__LIST_OF_TRACKING_MASKS__BUILDER_HPP_
