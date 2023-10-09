// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from lll_supervisor_msgs:msg/ObjectDetections.idl
// generated code does not contain a copyright notice

#ifndef LLL_SUPERVISOR_MSGS__MSG__DETAIL__OBJECT_DETECTIONS__STRUCT_HPP_
#define LLL_SUPERVISOR_MSGS__MSG__DETAIL__OBJECT_DETECTIONS__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.hpp"
// Member 'detections'
#include "lll_supervisor_msgs/msg/detail/object_detection2_d__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__lll_supervisor_msgs__msg__ObjectDetections __attribute__((deprecated))
#else
# define DEPRECATED__lll_supervisor_msgs__msg__ObjectDetections __declspec(deprecated)
#endif

namespace lll_supervisor_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct ObjectDetections_
{
  using Type = ObjectDetections_<ContainerAllocator>;

  explicit ObjectDetections_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init)
  {
    (void)_init;
  }

  explicit ObjectDetections_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _detections_type =
    std::vector<lll_supervisor_msgs::msg::ObjectDetection2D_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<lll_supervisor_msgs::msg::ObjectDetection2D_<ContainerAllocator>>>;
  _detections_type detections;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__detections(
    const std::vector<lll_supervisor_msgs::msg::ObjectDetection2D_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<lll_supervisor_msgs::msg::ObjectDetection2D_<ContainerAllocator>>> & _arg)
  {
    this->detections = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    lll_supervisor_msgs::msg::ObjectDetections_<ContainerAllocator> *;
  using ConstRawPtr =
    const lll_supervisor_msgs::msg::ObjectDetections_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<lll_supervisor_msgs::msg::ObjectDetections_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<lll_supervisor_msgs::msg::ObjectDetections_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      lll_supervisor_msgs::msg::ObjectDetections_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<lll_supervisor_msgs::msg::ObjectDetections_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      lll_supervisor_msgs::msg::ObjectDetections_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<lll_supervisor_msgs::msg::ObjectDetections_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<lll_supervisor_msgs::msg::ObjectDetections_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<lll_supervisor_msgs::msg::ObjectDetections_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__lll_supervisor_msgs__msg__ObjectDetections
    std::shared_ptr<lll_supervisor_msgs::msg::ObjectDetections_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__lll_supervisor_msgs__msg__ObjectDetections
    std::shared_ptr<lll_supervisor_msgs::msg::ObjectDetections_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ObjectDetections_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->detections != other.detections) {
      return false;
    }
    return true;
  }
  bool operator!=(const ObjectDetections_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ObjectDetections_

// alias to use template instance with default allocator
using ObjectDetections =
  lll_supervisor_msgs::msg::ObjectDetections_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace lll_supervisor_msgs

#endif  // LLL_SUPERVISOR_MSGS__MSG__DETAIL__OBJECT_DETECTIONS__STRUCT_HPP_
