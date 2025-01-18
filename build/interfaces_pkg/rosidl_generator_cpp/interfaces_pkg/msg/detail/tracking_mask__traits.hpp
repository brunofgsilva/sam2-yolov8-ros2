// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from interfaces_pkg:msg/TrackingMask.idl
// generated code does not contain a copyright notice

#ifndef INTERFACES_PKG__MSG__DETAIL__TRACKING_MASK__TRAITS_HPP_
#define INTERFACES_PKG__MSG__DETAIL__TRACKING_MASK__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "interfaces_pkg/msg/detail/tracking_mask__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'centroid'
// Member 'position_relative'
// Member 'position_absolute'
#include "geometry_msgs/msg/detail/point__traits.hpp"
// Member 'mask'
#include "interfaces_pkg/msg/detail/list_of_mask_detections__traits.hpp"

namespace interfaces_pkg
{

namespace msg
{

inline void to_flow_style_yaml(
  const TrackingMask & msg,
  std::ostream & out)
{
  out << "{";
  // member: centroid
  {
    out << "centroid: ";
    to_flow_style_yaml(msg.centroid, out);
    out << ", ";
  }

  // member: mask
  {
    out << "mask: ";
    to_flow_style_yaml(msg.mask, out);
    out << ", ";
  }

  // member: position_relative
  {
    out << "position_relative: ";
    to_flow_style_yaml(msg.position_relative, out);
    out << ", ";
  }

  // member: position_absolute
  {
    out << "position_absolute: ";
    to_flow_style_yaml(msg.position_absolute, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const TrackingMask & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: centroid
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "centroid:\n";
    to_block_style_yaml(msg.centroid, out, indentation + 2);
  }

  // member: mask
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "mask:\n";
    to_block_style_yaml(msg.mask, out, indentation + 2);
  }

  // member: position_relative
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "position_relative:\n";
    to_block_style_yaml(msg.position_relative, out, indentation + 2);
  }

  // member: position_absolute
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "position_absolute:\n";
    to_block_style_yaml(msg.position_absolute, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const TrackingMask & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace msg

}  // namespace interfaces_pkg

namespace rosidl_generator_traits
{

[[deprecated("use interfaces_pkg::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const interfaces_pkg::msg::TrackingMask & msg,
  std::ostream & out, size_t indentation = 0)
{
  interfaces_pkg::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use interfaces_pkg::msg::to_yaml() instead")]]
inline std::string to_yaml(const interfaces_pkg::msg::TrackingMask & msg)
{
  return interfaces_pkg::msg::to_yaml(msg);
}

template<>
inline const char * data_type<interfaces_pkg::msg::TrackingMask>()
{
  return "interfaces_pkg::msg::TrackingMask";
}

template<>
inline const char * name<interfaces_pkg::msg::TrackingMask>()
{
  return "interfaces_pkg/msg/TrackingMask";
}

template<>
struct has_fixed_size<interfaces_pkg::msg::TrackingMask>
  : std::integral_constant<bool, has_fixed_size<geometry_msgs::msg::Point>::value && has_fixed_size<interfaces_pkg::msg::ListOfMaskDetections>::value> {};

template<>
struct has_bounded_size<interfaces_pkg::msg::TrackingMask>
  : std::integral_constant<bool, has_bounded_size<geometry_msgs::msg::Point>::value && has_bounded_size<interfaces_pkg::msg::ListOfMaskDetections>::value> {};

template<>
struct is_message<interfaces_pkg::msg::TrackingMask>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // INTERFACES_PKG__MSG__DETAIL__TRACKING_MASK__TRAITS_HPP_
