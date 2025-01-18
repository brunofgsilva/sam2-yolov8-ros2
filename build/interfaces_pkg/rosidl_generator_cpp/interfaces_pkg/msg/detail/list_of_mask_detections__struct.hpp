// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from interfaces_pkg:msg/ListOfMaskDetections.idl
// generated code does not contain a copyright notice

#ifndef INTERFACES_PKG__MSG__DETAIL__LIST_OF_MASK_DETECTIONS__STRUCT_HPP_
#define INTERFACES_PKG__MSG__DETAIL__LIST_OF_MASK_DETECTIONS__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'masks'
#include "interfaces_pkg/msg/detail/mask_detection__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__interfaces_pkg__msg__ListOfMaskDetections __attribute__((deprecated))
#else
# define DEPRECATED__interfaces_pkg__msg__ListOfMaskDetections __declspec(deprecated)
#endif

namespace interfaces_pkg
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct ListOfMaskDetections_
{
  using Type = ListOfMaskDetections_<ContainerAllocator>;

  explicit ListOfMaskDetections_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
  }

  explicit ListOfMaskDetections_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
    (void)_alloc;
  }

  // field types and members
  using _masks_type =
    std::vector<interfaces_pkg::msg::MaskDetection_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<interfaces_pkg::msg::MaskDetection_<ContainerAllocator>>>;
  _masks_type masks;

  // setters for named parameter idiom
  Type & set__masks(
    const std::vector<interfaces_pkg::msg::MaskDetection_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<interfaces_pkg::msg::MaskDetection_<ContainerAllocator>>> & _arg)
  {
    this->masks = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    interfaces_pkg::msg::ListOfMaskDetections_<ContainerAllocator> *;
  using ConstRawPtr =
    const interfaces_pkg::msg::ListOfMaskDetections_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<interfaces_pkg::msg::ListOfMaskDetections_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<interfaces_pkg::msg::ListOfMaskDetections_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      interfaces_pkg::msg::ListOfMaskDetections_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<interfaces_pkg::msg::ListOfMaskDetections_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      interfaces_pkg::msg::ListOfMaskDetections_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<interfaces_pkg::msg::ListOfMaskDetections_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<interfaces_pkg::msg::ListOfMaskDetections_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<interfaces_pkg::msg::ListOfMaskDetections_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__interfaces_pkg__msg__ListOfMaskDetections
    std::shared_ptr<interfaces_pkg::msg::ListOfMaskDetections_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__interfaces_pkg__msg__ListOfMaskDetections
    std::shared_ptr<interfaces_pkg::msg::ListOfMaskDetections_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ListOfMaskDetections_ & other) const
  {
    if (this->masks != other.masks) {
      return false;
    }
    return true;
  }
  bool operator!=(const ListOfMaskDetections_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ListOfMaskDetections_

// alias to use template instance with default allocator
using ListOfMaskDetections =
  interfaces_pkg::msg::ListOfMaskDetections_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace interfaces_pkg

#endif  // INTERFACES_PKG__MSG__DETAIL__LIST_OF_MASK_DETECTIONS__STRUCT_HPP_
