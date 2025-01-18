// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from interfaces_pkg:msg/DetectedObject.idl
// generated code does not contain a copyright notice

#ifndef INTERFACES_PKG__MSG__DETAIL__DETECTED_OBJECT__TRAITS_HPP_
#define INTERFACES_PKG__MSG__DETAIL__DETECTED_OBJECT__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "interfaces_pkg/msg/detail/detected_object__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'position_relative'
// Member 'position_absolute'
#include "geometry_msgs/msg/detail/point__traits.hpp"

namespace interfaces_pkg
{

namespace msg
{

inline void to_flow_style_yaml(
  const DetectedObject & msg,
  std::ostream & out)
{
  out << "{";
  // member: object_name
  {
    out << "object_name: ";
    rosidl_generator_traits::value_to_yaml(msg.object_name, out);
    out << ", ";
  }

  // member: object_id
  {
    out << "object_id: ";
    rosidl_generator_traits::value_to_yaml(msg.object_id, out);
    out << ", ";
  }

  // member: confidence
  {
    out << "confidence: ";
    rosidl_generator_traits::value_to_yaml(msg.confidence, out);
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
    out << ", ";
  }

  // member: obj_height
  {
    out << "obj_height: ";
    rosidl_generator_traits::value_to_yaml(msg.obj_height, out);
    out << ", ";
  }

  // member: obj_width
  {
    out << "obj_width: ";
    rosidl_generator_traits::value_to_yaml(msg.obj_width, out);
    out << ", ";
  }

  // member: box_top_left_x
  {
    out << "box_top_left_x: ";
    rosidl_generator_traits::value_to_yaml(msg.box_top_left_x, out);
    out << ", ";
  }

  // member: box_top_left_y
  {
    out << "box_top_left_y: ";
    rosidl_generator_traits::value_to_yaml(msg.box_top_left_y, out);
    out << ", ";
  }

  // member: box_width
  {
    out << "box_width: ";
    rosidl_generator_traits::value_to_yaml(msg.box_width, out);
    out << ", ";
  }

  // member: box_height
  {
    out << "box_height: ";
    rosidl_generator_traits::value_to_yaml(msg.box_height, out);
    out << ", ";
  }

  // member: box_center_x
  {
    out << "box_center_x: ";
    rosidl_generator_traits::value_to_yaml(msg.box_center_x, out);
    out << ", ";
  }

  // member: box_center_y
  {
    out << "box_center_y: ";
    rosidl_generator_traits::value_to_yaml(msg.box_center_y, out);
    out << ", ";
  }

  // member: camera
  {
    out << "camera: ";
    rosidl_generator_traits::value_to_yaml(msg.camera, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const DetectedObject & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: object_name
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "object_name: ";
    rosidl_generator_traits::value_to_yaml(msg.object_name, out);
    out << "\n";
  }

  // member: object_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "object_id: ";
    rosidl_generator_traits::value_to_yaml(msg.object_id, out);
    out << "\n";
  }

  // member: confidence
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "confidence: ";
    rosidl_generator_traits::value_to_yaml(msg.confidence, out);
    out << "\n";
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

  // member: obj_height
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "obj_height: ";
    rosidl_generator_traits::value_to_yaml(msg.obj_height, out);
    out << "\n";
  }

  // member: obj_width
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "obj_width: ";
    rosidl_generator_traits::value_to_yaml(msg.obj_width, out);
    out << "\n";
  }

  // member: box_top_left_x
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "box_top_left_x: ";
    rosidl_generator_traits::value_to_yaml(msg.box_top_left_x, out);
    out << "\n";
  }

  // member: box_top_left_y
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "box_top_left_y: ";
    rosidl_generator_traits::value_to_yaml(msg.box_top_left_y, out);
    out << "\n";
  }

  // member: box_width
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "box_width: ";
    rosidl_generator_traits::value_to_yaml(msg.box_width, out);
    out << "\n";
  }

  // member: box_height
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "box_height: ";
    rosidl_generator_traits::value_to_yaml(msg.box_height, out);
    out << "\n";
  }

  // member: box_center_x
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "box_center_x: ";
    rosidl_generator_traits::value_to_yaml(msg.box_center_x, out);
    out << "\n";
  }

  // member: box_center_y
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "box_center_y: ";
    rosidl_generator_traits::value_to_yaml(msg.box_center_y, out);
    out << "\n";
  }

  // member: camera
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "camera: ";
    rosidl_generator_traits::value_to_yaml(msg.camera, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const DetectedObject & msg, bool use_flow_style = false)
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
  const interfaces_pkg::msg::DetectedObject & msg,
  std::ostream & out, size_t indentation = 0)
{
  interfaces_pkg::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use interfaces_pkg::msg::to_yaml() instead")]]
inline std::string to_yaml(const interfaces_pkg::msg::DetectedObject & msg)
{
  return interfaces_pkg::msg::to_yaml(msg);
}

template<>
inline const char * data_type<interfaces_pkg::msg::DetectedObject>()
{
  return "interfaces_pkg::msg::DetectedObject";
}

template<>
inline const char * name<interfaces_pkg::msg::DetectedObject>()
{
  return "interfaces_pkg/msg/DetectedObject";
}

template<>
struct has_fixed_size<interfaces_pkg::msg::DetectedObject>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<interfaces_pkg::msg::DetectedObject>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<interfaces_pkg::msg::DetectedObject>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // INTERFACES_PKG__MSG__DETAIL__DETECTED_OBJECT__TRAITS_HPP_
