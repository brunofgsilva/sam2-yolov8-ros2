// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from interfaces_pkg:msg/ListOfTrackingMasks.idl
// generated code does not contain a copyright notice

#ifndef INTERFACES_PKG__MSG__DETAIL__LIST_OF_TRACKING_MASKS__TRAITS_HPP_
#define INTERFACES_PKG__MSG__DETAIL__LIST_OF_TRACKING_MASKS__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "interfaces_pkg/msg/detail/list_of_tracking_masks__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'list_of_masks'
#include "interfaces_pkg/msg/detail/tracking_mask__traits.hpp"

namespace interfaces_pkg
{

namespace msg
{

inline void to_flow_style_yaml(
  const ListOfTrackingMasks & msg,
  std::ostream & out)
{
  out << "{";
  // member: list_of_masks
  {
    if (msg.list_of_masks.size() == 0) {
      out << "list_of_masks: []";
    } else {
      out << "list_of_masks: [";
      size_t pending_items = msg.list_of_masks.size();
      for (auto item : msg.list_of_masks) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: nr_of_objects_detected
  {
    out << "nr_of_objects_detected: ";
    rosidl_generator_traits::value_to_yaml(msg.nr_of_objects_detected, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const ListOfTrackingMasks & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: list_of_masks
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.list_of_masks.size() == 0) {
      out << "list_of_masks: []\n";
    } else {
      out << "list_of_masks:\n";
      for (auto item : msg.list_of_masks) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }

  // member: nr_of_objects_detected
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "nr_of_objects_detected: ";
    rosidl_generator_traits::value_to_yaml(msg.nr_of_objects_detected, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const ListOfTrackingMasks & msg, bool use_flow_style = false)
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
  const interfaces_pkg::msg::ListOfTrackingMasks & msg,
  std::ostream & out, size_t indentation = 0)
{
  interfaces_pkg::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use interfaces_pkg::msg::to_yaml() instead")]]
inline std::string to_yaml(const interfaces_pkg::msg::ListOfTrackingMasks & msg)
{
  return interfaces_pkg::msg::to_yaml(msg);
}

template<>
inline const char * data_type<interfaces_pkg::msg::ListOfTrackingMasks>()
{
  return "interfaces_pkg::msg::ListOfTrackingMasks";
}

template<>
inline const char * name<interfaces_pkg::msg::ListOfTrackingMasks>()
{
  return "interfaces_pkg/msg/ListOfTrackingMasks";
}

template<>
struct has_fixed_size<interfaces_pkg::msg::ListOfTrackingMasks>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<interfaces_pkg::msg::ListOfTrackingMasks>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<interfaces_pkg::msg::ListOfTrackingMasks>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // INTERFACES_PKG__MSG__DETAIL__LIST_OF_TRACKING_MASKS__TRAITS_HPP_
