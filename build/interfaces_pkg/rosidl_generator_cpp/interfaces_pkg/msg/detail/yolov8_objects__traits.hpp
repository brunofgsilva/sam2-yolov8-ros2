// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from interfaces_pkg:msg/Yolov8Objects.idl
// generated code does not contain a copyright notice

#ifndef INTERFACES_PKG__MSG__DETAIL__YOLOV8_OBJECTS__TRAITS_HPP_
#define INTERFACES_PKG__MSG__DETAIL__YOLOV8_OBJECTS__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "interfaces_pkg/msg/detail/yolov8_objects__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'objects'
#include "interfaces_pkg/msg/detail/detected_object__traits.hpp"

namespace interfaces_pkg
{

namespace msg
{

inline void to_flow_style_yaml(
  const Yolov8Objects & msg,
  std::ostream & out)
{
  out << "{";
  // member: num_objects
  {
    out << "num_objects: ";
    rosidl_generator_traits::value_to_yaml(msg.num_objects, out);
    out << ", ";
  }

  // member: objects
  {
    if (msg.objects.size() == 0) {
      out << "objects: []";
    } else {
      out << "objects: [";
      size_t pending_items = msg.objects.size();
      for (auto item : msg.objects) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Yolov8Objects & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: num_objects
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "num_objects: ";
    rosidl_generator_traits::value_to_yaml(msg.num_objects, out);
    out << "\n";
  }

  // member: objects
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.objects.size() == 0) {
      out << "objects: []\n";
    } else {
      out << "objects:\n";
      for (auto item : msg.objects) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Yolov8Objects & msg, bool use_flow_style = false)
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
  const interfaces_pkg::msg::Yolov8Objects & msg,
  std::ostream & out, size_t indentation = 0)
{
  interfaces_pkg::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use interfaces_pkg::msg::to_yaml() instead")]]
inline std::string to_yaml(const interfaces_pkg::msg::Yolov8Objects & msg)
{
  return interfaces_pkg::msg::to_yaml(msg);
}

template<>
inline const char * data_type<interfaces_pkg::msg::Yolov8Objects>()
{
  return "interfaces_pkg::msg::Yolov8Objects";
}

template<>
inline const char * name<interfaces_pkg::msg::Yolov8Objects>()
{
  return "interfaces_pkg/msg/Yolov8Objects";
}

template<>
struct has_fixed_size<interfaces_pkg::msg::Yolov8Objects>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<interfaces_pkg::msg::Yolov8Objects>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<interfaces_pkg::msg::Yolov8Objects>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // INTERFACES_PKG__MSG__DETAIL__YOLOV8_OBJECTS__TRAITS_HPP_
