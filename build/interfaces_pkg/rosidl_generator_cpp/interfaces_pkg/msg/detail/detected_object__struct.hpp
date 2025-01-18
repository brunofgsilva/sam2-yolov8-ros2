// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from interfaces_pkg:msg/DetectedObject.idl
// generated code does not contain a copyright notice

#ifndef INTERFACES_PKG__MSG__DETAIL__DETECTED_OBJECT__STRUCT_HPP_
#define INTERFACES_PKG__MSG__DETAIL__DETECTED_OBJECT__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'position_relative'
// Member 'position_absolute'
#include "geometry_msgs/msg/detail/point__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__interfaces_pkg__msg__DetectedObject __attribute__((deprecated))
#else
# define DEPRECATED__interfaces_pkg__msg__DetectedObject __declspec(deprecated)
#endif

namespace interfaces_pkg
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct DetectedObject_
{
  using Type = DetectedObject_<ContainerAllocator>;

  explicit DetectedObject_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : position_relative(_init),
    position_absolute(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->object_name = "";
      this->object_id = 0l;
      this->confidence = 0.0f;
      this->obj_height = 0l;
      this->obj_width = 0l;
      this->box_top_left_x = 0l;
      this->box_top_left_y = 0l;
      this->box_width = 0l;
      this->box_height = 0l;
      this->box_center_x = 0l;
      this->box_center_y = 0l;
      this->camera = "";
    }
  }

  explicit DetectedObject_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : object_name(_alloc),
    position_relative(_alloc, _init),
    position_absolute(_alloc, _init),
    camera(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->object_name = "";
      this->object_id = 0l;
      this->confidence = 0.0f;
      this->obj_height = 0l;
      this->obj_width = 0l;
      this->box_top_left_x = 0l;
      this->box_top_left_y = 0l;
      this->box_width = 0l;
      this->box_height = 0l;
      this->box_center_x = 0l;
      this->box_center_y = 0l;
      this->camera = "";
    }
  }

  // field types and members
  using _object_name_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _object_name_type object_name;
  using _object_id_type =
    int32_t;
  _object_id_type object_id;
  using _confidence_type =
    float;
  _confidence_type confidence;
  using _position_relative_type =
    geometry_msgs::msg::Point_<ContainerAllocator>;
  _position_relative_type position_relative;
  using _position_absolute_type =
    geometry_msgs::msg::Point_<ContainerAllocator>;
  _position_absolute_type position_absolute;
  using _obj_height_type =
    int32_t;
  _obj_height_type obj_height;
  using _obj_width_type =
    int32_t;
  _obj_width_type obj_width;
  using _box_top_left_x_type =
    int32_t;
  _box_top_left_x_type box_top_left_x;
  using _box_top_left_y_type =
    int32_t;
  _box_top_left_y_type box_top_left_y;
  using _box_width_type =
    int32_t;
  _box_width_type box_width;
  using _box_height_type =
    int32_t;
  _box_height_type box_height;
  using _box_center_x_type =
    int32_t;
  _box_center_x_type box_center_x;
  using _box_center_y_type =
    int32_t;
  _box_center_y_type box_center_y;
  using _camera_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _camera_type camera;

  // setters for named parameter idiom
  Type & set__object_name(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->object_name = _arg;
    return *this;
  }
  Type & set__object_id(
    const int32_t & _arg)
  {
    this->object_id = _arg;
    return *this;
  }
  Type & set__confidence(
    const float & _arg)
  {
    this->confidence = _arg;
    return *this;
  }
  Type & set__position_relative(
    const geometry_msgs::msg::Point_<ContainerAllocator> & _arg)
  {
    this->position_relative = _arg;
    return *this;
  }
  Type & set__position_absolute(
    const geometry_msgs::msg::Point_<ContainerAllocator> & _arg)
  {
    this->position_absolute = _arg;
    return *this;
  }
  Type & set__obj_height(
    const int32_t & _arg)
  {
    this->obj_height = _arg;
    return *this;
  }
  Type & set__obj_width(
    const int32_t & _arg)
  {
    this->obj_width = _arg;
    return *this;
  }
  Type & set__box_top_left_x(
    const int32_t & _arg)
  {
    this->box_top_left_x = _arg;
    return *this;
  }
  Type & set__box_top_left_y(
    const int32_t & _arg)
  {
    this->box_top_left_y = _arg;
    return *this;
  }
  Type & set__box_width(
    const int32_t & _arg)
  {
    this->box_width = _arg;
    return *this;
  }
  Type & set__box_height(
    const int32_t & _arg)
  {
    this->box_height = _arg;
    return *this;
  }
  Type & set__box_center_x(
    const int32_t & _arg)
  {
    this->box_center_x = _arg;
    return *this;
  }
  Type & set__box_center_y(
    const int32_t & _arg)
  {
    this->box_center_y = _arg;
    return *this;
  }
  Type & set__camera(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->camera = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    interfaces_pkg::msg::DetectedObject_<ContainerAllocator> *;
  using ConstRawPtr =
    const interfaces_pkg::msg::DetectedObject_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<interfaces_pkg::msg::DetectedObject_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<interfaces_pkg::msg::DetectedObject_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      interfaces_pkg::msg::DetectedObject_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<interfaces_pkg::msg::DetectedObject_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      interfaces_pkg::msg::DetectedObject_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<interfaces_pkg::msg::DetectedObject_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<interfaces_pkg::msg::DetectedObject_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<interfaces_pkg::msg::DetectedObject_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__interfaces_pkg__msg__DetectedObject
    std::shared_ptr<interfaces_pkg::msg::DetectedObject_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__interfaces_pkg__msg__DetectedObject
    std::shared_ptr<interfaces_pkg::msg::DetectedObject_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const DetectedObject_ & other) const
  {
    if (this->object_name != other.object_name) {
      return false;
    }
    if (this->object_id != other.object_id) {
      return false;
    }
    if (this->confidence != other.confidence) {
      return false;
    }
    if (this->position_relative != other.position_relative) {
      return false;
    }
    if (this->position_absolute != other.position_absolute) {
      return false;
    }
    if (this->obj_height != other.obj_height) {
      return false;
    }
    if (this->obj_width != other.obj_width) {
      return false;
    }
    if (this->box_top_left_x != other.box_top_left_x) {
      return false;
    }
    if (this->box_top_left_y != other.box_top_left_y) {
      return false;
    }
    if (this->box_width != other.box_width) {
      return false;
    }
    if (this->box_height != other.box_height) {
      return false;
    }
    if (this->box_center_x != other.box_center_x) {
      return false;
    }
    if (this->box_center_y != other.box_center_y) {
      return false;
    }
    if (this->camera != other.camera) {
      return false;
    }
    return true;
  }
  bool operator!=(const DetectedObject_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct DetectedObject_

// alias to use template instance with default allocator
using DetectedObject =
  interfaces_pkg::msg::DetectedObject_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace interfaces_pkg

#endif  // INTERFACES_PKG__MSG__DETAIL__DETECTED_OBJECT__STRUCT_HPP_
