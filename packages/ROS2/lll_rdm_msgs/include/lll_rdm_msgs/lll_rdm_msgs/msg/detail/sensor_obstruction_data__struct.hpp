// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from lll_rdm_msgs:msg/SensorObstructionData.idl
// generated code does not contain a copyright notice

#ifndef LLL_RDM_MSGS__MSG__DETAIL__SENSOR_OBSTRUCTION_DATA__STRUCT_HPP_
#define LLL_RDM_MSGS__MSG__DETAIL__SENSOR_OBSTRUCTION_DATA__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__lll_rdm_msgs__msg__SensorObstructionData __attribute__((deprecated))
#else
# define DEPRECATED__lll_rdm_msgs__msg__SensorObstructionData __declspec(deprecated)
#endif

namespace lll_rdm_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct SensorObstructionData_
{
  using Type = SensorObstructionData_<ContainerAllocator>;

  explicit SensorObstructionData_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->start_angle = 0.0;
      this->end_angle = 0.0;
      this->min_dist = 0.0;
      this->max_dist = 0.0;
      this->type = "";
    }
  }

  explicit SensorObstructionData_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : type(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->start_angle = 0.0;
      this->end_angle = 0.0;
      this->min_dist = 0.0;
      this->max_dist = 0.0;
      this->type = "";
    }
  }

  // field types and members
  using _start_angle_type =
    double;
  _start_angle_type start_angle;
  using _end_angle_type =
    double;
  _end_angle_type end_angle;
  using _min_dist_type =
    double;
  _min_dist_type min_dist;
  using _max_dist_type =
    double;
  _max_dist_type max_dist;
  using _type_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _type_type type;

  // setters for named parameter idiom
  Type & set__start_angle(
    const double & _arg)
  {
    this->start_angle = _arg;
    return *this;
  }
  Type & set__end_angle(
    const double & _arg)
  {
    this->end_angle = _arg;
    return *this;
  }
  Type & set__min_dist(
    const double & _arg)
  {
    this->min_dist = _arg;
    return *this;
  }
  Type & set__max_dist(
    const double & _arg)
  {
    this->max_dist = _arg;
    return *this;
  }
  Type & set__type(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->type = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    lll_rdm_msgs::msg::SensorObstructionData_<ContainerAllocator> *;
  using ConstRawPtr =
    const lll_rdm_msgs::msg::SensorObstructionData_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<lll_rdm_msgs::msg::SensorObstructionData_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<lll_rdm_msgs::msg::SensorObstructionData_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      lll_rdm_msgs::msg::SensorObstructionData_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<lll_rdm_msgs::msg::SensorObstructionData_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      lll_rdm_msgs::msg::SensorObstructionData_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<lll_rdm_msgs::msg::SensorObstructionData_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<lll_rdm_msgs::msg::SensorObstructionData_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<lll_rdm_msgs::msg::SensorObstructionData_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__lll_rdm_msgs__msg__SensorObstructionData
    std::shared_ptr<lll_rdm_msgs::msg::SensorObstructionData_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__lll_rdm_msgs__msg__SensorObstructionData
    std::shared_ptr<lll_rdm_msgs::msg::SensorObstructionData_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SensorObstructionData_ & other) const
  {
    if (this->start_angle != other.start_angle) {
      return false;
    }
    if (this->end_angle != other.end_angle) {
      return false;
    }
    if (this->min_dist != other.min_dist) {
      return false;
    }
    if (this->max_dist != other.max_dist) {
      return false;
    }
    if (this->type != other.type) {
      return false;
    }
    return true;
  }
  bool operator!=(const SensorObstructionData_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SensorObstructionData_

// alias to use template instance with default allocator
using SensorObstructionData =
  lll_rdm_msgs::msg::SensorObstructionData_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace lll_rdm_msgs

#endif  // LLL_RDM_MSGS__MSG__DETAIL__SENSOR_OBSTRUCTION_DATA__STRUCT_HPP_
