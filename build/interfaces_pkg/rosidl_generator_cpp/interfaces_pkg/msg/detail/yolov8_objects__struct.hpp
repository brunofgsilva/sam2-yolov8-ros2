// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from interfaces_pkg:msg/Yolov8Objects.idl
// generated code does not contain a copyright notice

#ifndef INTERFACES_PKG__MSG__DETAIL__YOLOV8_OBJECTS__STRUCT_HPP_
#define INTERFACES_PKG__MSG__DETAIL__YOLOV8_OBJECTS__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'objects'
#include "interfaces_pkg/msg/detail/detected_object__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__interfaces_pkg__msg__Yolov8Objects __attribute__((deprecated))
#else
# define DEPRECATED__interfaces_pkg__msg__Yolov8Objects __declspec(deprecated)
#endif

namespace interfaces_pkg
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct Yolov8Objects_
{
  using Type = Yolov8Objects_<ContainerAllocator>;

  explicit Yolov8Objects_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->num_objects = 0l;
    }
  }

  explicit Yolov8Objects_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->num_objects = 0l;
    }
  }

  // field types and members
  using _num_objects_type =
    int32_t;
  _num_objects_type num_objects;
  using _objects_type =
    std::vector<interfaces_pkg::msg::DetectedObject_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<interfaces_pkg::msg::DetectedObject_<ContainerAllocator>>>;
  _objects_type objects;

  // setters for named parameter idiom
  Type & set__num_objects(
    const int32_t & _arg)
  {
    this->num_objects = _arg;
    return *this;
  }
  Type & set__objects(
    const std::vector<interfaces_pkg::msg::DetectedObject_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<interfaces_pkg::msg::DetectedObject_<ContainerAllocator>>> & _arg)
  {
    this->objects = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    interfaces_pkg::msg::Yolov8Objects_<ContainerAllocator> *;
  using ConstRawPtr =
    const interfaces_pkg::msg::Yolov8Objects_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<interfaces_pkg::msg::Yolov8Objects_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<interfaces_pkg::msg::Yolov8Objects_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      interfaces_pkg::msg::Yolov8Objects_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<interfaces_pkg::msg::Yolov8Objects_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      interfaces_pkg::msg::Yolov8Objects_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<interfaces_pkg::msg::Yolov8Objects_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<interfaces_pkg::msg::Yolov8Objects_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<interfaces_pkg::msg::Yolov8Objects_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__interfaces_pkg__msg__Yolov8Objects
    std::shared_ptr<interfaces_pkg::msg::Yolov8Objects_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__interfaces_pkg__msg__Yolov8Objects
    std::shared_ptr<interfaces_pkg::msg::Yolov8Objects_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Yolov8Objects_ & other) const
  {
    if (this->num_objects != other.num_objects) {
      return false;
    }
    if (this->objects != other.objects) {
      return false;
    }
    return true;
  }
  bool operator!=(const Yolov8Objects_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Yolov8Objects_

// alias to use template instance with default allocator
using Yolov8Objects =
  interfaces_pkg::msg::Yolov8Objects_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace interfaces_pkg

#endif  // INTERFACES_PKG__MSG__DETAIL__YOLOV8_OBJECTS__STRUCT_HPP_
