// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from interfaces_pkg:msg/DetectedObject.idl
// generated code does not contain a copyright notice

#ifndef INTERFACES_PKG__MSG__DETAIL__DETECTED_OBJECT__BUILDER_HPP_
#define INTERFACES_PKG__MSG__DETAIL__DETECTED_OBJECT__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "interfaces_pkg/msg/detail/detected_object__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace interfaces_pkg
{

namespace msg
{

namespace builder
{

class Init_DetectedObject_camera
{
public:
  explicit Init_DetectedObject_camera(::interfaces_pkg::msg::DetectedObject & msg)
  : msg_(msg)
  {}
  ::interfaces_pkg::msg::DetectedObject camera(::interfaces_pkg::msg::DetectedObject::_camera_type arg)
  {
    msg_.camera = std::move(arg);
    return std::move(msg_);
  }

private:
  ::interfaces_pkg::msg::DetectedObject msg_;
};

class Init_DetectedObject_box_center_y
{
public:
  explicit Init_DetectedObject_box_center_y(::interfaces_pkg::msg::DetectedObject & msg)
  : msg_(msg)
  {}
  Init_DetectedObject_camera box_center_y(::interfaces_pkg::msg::DetectedObject::_box_center_y_type arg)
  {
    msg_.box_center_y = std::move(arg);
    return Init_DetectedObject_camera(msg_);
  }

private:
  ::interfaces_pkg::msg::DetectedObject msg_;
};

class Init_DetectedObject_box_center_x
{
public:
  explicit Init_DetectedObject_box_center_x(::interfaces_pkg::msg::DetectedObject & msg)
  : msg_(msg)
  {}
  Init_DetectedObject_box_center_y box_center_x(::interfaces_pkg::msg::DetectedObject::_box_center_x_type arg)
  {
    msg_.box_center_x = std::move(arg);
    return Init_DetectedObject_box_center_y(msg_);
  }

private:
  ::interfaces_pkg::msg::DetectedObject msg_;
};

class Init_DetectedObject_box_height
{
public:
  explicit Init_DetectedObject_box_height(::interfaces_pkg::msg::DetectedObject & msg)
  : msg_(msg)
  {}
  Init_DetectedObject_box_center_x box_height(::interfaces_pkg::msg::DetectedObject::_box_height_type arg)
  {
    msg_.box_height = std::move(arg);
    return Init_DetectedObject_box_center_x(msg_);
  }

private:
  ::interfaces_pkg::msg::DetectedObject msg_;
};

class Init_DetectedObject_box_width
{
public:
  explicit Init_DetectedObject_box_width(::interfaces_pkg::msg::DetectedObject & msg)
  : msg_(msg)
  {}
  Init_DetectedObject_box_height box_width(::interfaces_pkg::msg::DetectedObject::_box_width_type arg)
  {
    msg_.box_width = std::move(arg);
    return Init_DetectedObject_box_height(msg_);
  }

private:
  ::interfaces_pkg::msg::DetectedObject msg_;
};

class Init_DetectedObject_box_top_left_y
{
public:
  explicit Init_DetectedObject_box_top_left_y(::interfaces_pkg::msg::DetectedObject & msg)
  : msg_(msg)
  {}
  Init_DetectedObject_box_width box_top_left_y(::interfaces_pkg::msg::DetectedObject::_box_top_left_y_type arg)
  {
    msg_.box_top_left_y = std::move(arg);
    return Init_DetectedObject_box_width(msg_);
  }

private:
  ::interfaces_pkg::msg::DetectedObject msg_;
};

class Init_DetectedObject_box_top_left_x
{
public:
  explicit Init_DetectedObject_box_top_left_x(::interfaces_pkg::msg::DetectedObject & msg)
  : msg_(msg)
  {}
  Init_DetectedObject_box_top_left_y box_top_left_x(::interfaces_pkg::msg::DetectedObject::_box_top_left_x_type arg)
  {
    msg_.box_top_left_x = std::move(arg);
    return Init_DetectedObject_box_top_left_y(msg_);
  }

private:
  ::interfaces_pkg::msg::DetectedObject msg_;
};

class Init_DetectedObject_obj_width
{
public:
  explicit Init_DetectedObject_obj_width(::interfaces_pkg::msg::DetectedObject & msg)
  : msg_(msg)
  {}
  Init_DetectedObject_box_top_left_x obj_width(::interfaces_pkg::msg::DetectedObject::_obj_width_type arg)
  {
    msg_.obj_width = std::move(arg);
    return Init_DetectedObject_box_top_left_x(msg_);
  }

private:
  ::interfaces_pkg::msg::DetectedObject msg_;
};

class Init_DetectedObject_obj_height
{
public:
  explicit Init_DetectedObject_obj_height(::interfaces_pkg::msg::DetectedObject & msg)
  : msg_(msg)
  {}
  Init_DetectedObject_obj_width obj_height(::interfaces_pkg::msg::DetectedObject::_obj_height_type arg)
  {
    msg_.obj_height = std::move(arg);
    return Init_DetectedObject_obj_width(msg_);
  }

private:
  ::interfaces_pkg::msg::DetectedObject msg_;
};

class Init_DetectedObject_position_absolute
{
public:
  explicit Init_DetectedObject_position_absolute(::interfaces_pkg::msg::DetectedObject & msg)
  : msg_(msg)
  {}
  Init_DetectedObject_obj_height position_absolute(::interfaces_pkg::msg::DetectedObject::_position_absolute_type arg)
  {
    msg_.position_absolute = std::move(arg);
    return Init_DetectedObject_obj_height(msg_);
  }

private:
  ::interfaces_pkg::msg::DetectedObject msg_;
};

class Init_DetectedObject_position_relative
{
public:
  explicit Init_DetectedObject_position_relative(::interfaces_pkg::msg::DetectedObject & msg)
  : msg_(msg)
  {}
  Init_DetectedObject_position_absolute position_relative(::interfaces_pkg::msg::DetectedObject::_position_relative_type arg)
  {
    msg_.position_relative = std::move(arg);
    return Init_DetectedObject_position_absolute(msg_);
  }

private:
  ::interfaces_pkg::msg::DetectedObject msg_;
};

class Init_DetectedObject_confidence
{
public:
  explicit Init_DetectedObject_confidence(::interfaces_pkg::msg::DetectedObject & msg)
  : msg_(msg)
  {}
  Init_DetectedObject_position_relative confidence(::interfaces_pkg::msg::DetectedObject::_confidence_type arg)
  {
    msg_.confidence = std::move(arg);
    return Init_DetectedObject_position_relative(msg_);
  }

private:
  ::interfaces_pkg::msg::DetectedObject msg_;
};

class Init_DetectedObject_object_id
{
public:
  explicit Init_DetectedObject_object_id(::interfaces_pkg::msg::DetectedObject & msg)
  : msg_(msg)
  {}
  Init_DetectedObject_confidence object_id(::interfaces_pkg::msg::DetectedObject::_object_id_type arg)
  {
    msg_.object_id = std::move(arg);
    return Init_DetectedObject_confidence(msg_);
  }

private:
  ::interfaces_pkg::msg::DetectedObject msg_;
};

class Init_DetectedObject_object_name
{
public:
  Init_DetectedObject_object_name()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_DetectedObject_object_id object_name(::interfaces_pkg::msg::DetectedObject::_object_name_type arg)
  {
    msg_.object_name = std::move(arg);
    return Init_DetectedObject_object_id(msg_);
  }

private:
  ::interfaces_pkg::msg::DetectedObject msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::interfaces_pkg::msg::DetectedObject>()
{
  return interfaces_pkg::msg::builder::Init_DetectedObject_object_name();
}

}  // namespace interfaces_pkg

#endif  // INTERFACES_PKG__MSG__DETAIL__DETECTED_OBJECT__BUILDER_HPP_
