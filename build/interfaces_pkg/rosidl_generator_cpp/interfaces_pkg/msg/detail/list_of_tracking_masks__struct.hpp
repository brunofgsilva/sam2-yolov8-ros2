// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from interfaces_pkg:msg/ListOfTrackingMasks.idl
// generated code does not contain a copyright notice

#ifndef INTERFACES_PKG__MSG__DETAIL__LIST_OF_TRACKING_MASKS__STRUCT_HPP_
#define INTERFACES_PKG__MSG__DETAIL__LIST_OF_TRACKING_MASKS__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'list_of_masks'
#include "interfaces_pkg/msg/detail/tracking_mask__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__interfaces_pkg__msg__ListOfTrackingMasks __attribute__((deprecated))
#else
# define DEPRECATED__interfaces_pkg__msg__ListOfTrackingMasks __declspec(deprecated)
#endif

namespace interfaces_pkg
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct ListOfTrackingMasks_
{
  using Type = ListOfTrackingMasks_<ContainerAllocator>;

  explicit ListOfTrackingMasks_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->nr_of_objects_detected = 0l;
    }
  }

  explicit ListOfTrackingMasks_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->nr_of_objects_detected = 0l;
    }
  }

  // field types and members
  using _list_of_masks_type =
    std::vector<interfaces_pkg::msg::TrackingMask_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<interfaces_pkg::msg::TrackingMask_<ContainerAllocator>>>;
  _list_of_masks_type list_of_masks;
  using _nr_of_objects_detected_type =
    int32_t;
  _nr_of_objects_detected_type nr_of_objects_detected;

  // setters for named parameter idiom
  Type & set__list_of_masks(
    const std::vector<interfaces_pkg::msg::TrackingMask_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<interfaces_pkg::msg::TrackingMask_<ContainerAllocator>>> & _arg)
  {
    this->list_of_masks = _arg;
    return *this;
  }
  Type & set__nr_of_objects_detected(
    const int32_t & _arg)
  {
    this->nr_of_objects_detected = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    interfaces_pkg::msg::ListOfTrackingMasks_<ContainerAllocator> *;
  using ConstRawPtr =
    const interfaces_pkg::msg::ListOfTrackingMasks_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<interfaces_pkg::msg::ListOfTrackingMasks_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<interfaces_pkg::msg::ListOfTrackingMasks_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      interfaces_pkg::msg::ListOfTrackingMasks_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<interfaces_pkg::msg::ListOfTrackingMasks_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      interfaces_pkg::msg::ListOfTrackingMasks_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<interfaces_pkg::msg::ListOfTrackingMasks_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<interfaces_pkg::msg::ListOfTrackingMasks_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<interfaces_pkg::msg::ListOfTrackingMasks_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__interfaces_pkg__msg__ListOfTrackingMasks
    std::shared_ptr<interfaces_pkg::msg::ListOfTrackingMasks_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__interfaces_pkg__msg__ListOfTrackingMasks
    std::shared_ptr<interfaces_pkg::msg::ListOfTrackingMasks_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ListOfTrackingMasks_ & other) const
  {
    if (this->list_of_masks != other.list_of_masks) {
      return false;
    }
    if (this->nr_of_objects_detected != other.nr_of_objects_detected) {
      return false;
    }
    return true;
  }
  bool operator!=(const ListOfTrackingMasks_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ListOfTrackingMasks_

// alias to use template instance with default allocator
using ListOfTrackingMasks =
  interfaces_pkg::msg::ListOfTrackingMasks_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace interfaces_pkg

#endif  // INTERFACES_PKG__MSG__DETAIL__LIST_OF_TRACKING_MASKS__STRUCT_HPP_
