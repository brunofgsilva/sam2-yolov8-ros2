// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from interfaces_pkg:msg/TrackingMask.idl
// generated code does not contain a copyright notice

#ifndef INTERFACES_PKG__MSG__DETAIL__TRACKING_MASK__STRUCT_HPP_
#define INTERFACES_PKG__MSG__DETAIL__TRACKING_MASK__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'centroid'
// Member 'position_relative'
// Member 'position_absolute'
#include "geometry_msgs/msg/detail/point__struct.hpp"
// Member 'mask'
#include "interfaces_pkg/msg/detail/list_of_mask_detections__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__interfaces_pkg__msg__TrackingMask __attribute__((deprecated))
#else
# define DEPRECATED__interfaces_pkg__msg__TrackingMask __declspec(deprecated)
#endif

namespace interfaces_pkg
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct TrackingMask_
{
  using Type = TrackingMask_<ContainerAllocator>;

  explicit TrackingMask_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : centroid(_init),
    mask(_init),
    position_relative(_init),
    position_absolute(_init)
  {
    (void)_init;
  }

  explicit TrackingMask_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : centroid(_alloc, _init),
    mask(_alloc, _init),
    position_relative(_alloc, _init),
    position_absolute(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _centroid_type =
    geometry_msgs::msg::Point_<ContainerAllocator>;
  _centroid_type centroid;
  using _mask_type =
    interfaces_pkg::msg::ListOfMaskDetections_<ContainerAllocator>;
  _mask_type mask;
  using _position_relative_type =
    geometry_msgs::msg::Point_<ContainerAllocator>;
  _position_relative_type position_relative;
  using _position_absolute_type =
    geometry_msgs::msg::Point_<ContainerAllocator>;
  _position_absolute_type position_absolute;

  // setters for named parameter idiom
  Type & set__centroid(
    const geometry_msgs::msg::Point_<ContainerAllocator> & _arg)
  {
    this->centroid = _arg;
    return *this;
  }
  Type & set__mask(
    const interfaces_pkg::msg::ListOfMaskDetections_<ContainerAllocator> & _arg)
  {
    this->mask = _arg;
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

  // constant declarations

  // pointer types
  using RawPtr =
    interfaces_pkg::msg::TrackingMask_<ContainerAllocator> *;
  using ConstRawPtr =
    const interfaces_pkg::msg::TrackingMask_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<interfaces_pkg::msg::TrackingMask_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<interfaces_pkg::msg::TrackingMask_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      interfaces_pkg::msg::TrackingMask_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<interfaces_pkg::msg::TrackingMask_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      interfaces_pkg::msg::TrackingMask_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<interfaces_pkg::msg::TrackingMask_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<interfaces_pkg::msg::TrackingMask_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<interfaces_pkg::msg::TrackingMask_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__interfaces_pkg__msg__TrackingMask
    std::shared_ptr<interfaces_pkg::msg::TrackingMask_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__interfaces_pkg__msg__TrackingMask
    std::shared_ptr<interfaces_pkg::msg::TrackingMask_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const TrackingMask_ & other) const
  {
    if (this->centroid != other.centroid) {
      return false;
    }
    if (this->mask != other.mask) {
      return false;
    }
    if (this->position_relative != other.position_relative) {
      return false;
    }
    if (this->position_absolute != other.position_absolute) {
      return false;
    }
    return true;
  }
  bool operator!=(const TrackingMask_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct TrackingMask_

// alias to use template instance with default allocator
using TrackingMask =
  interfaces_pkg::msg::TrackingMask_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace interfaces_pkg

#endif  // INTERFACES_PKG__MSG__DETAIL__TRACKING_MASK__STRUCT_HPP_
