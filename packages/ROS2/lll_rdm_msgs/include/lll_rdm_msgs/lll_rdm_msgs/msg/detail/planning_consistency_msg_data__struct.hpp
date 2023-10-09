// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from lll_rdm_msgs:msg/PlanningConsistencyMsgData.idl
// generated code does not contain a copyright notice

#ifndef LLL_RDM_MSGS__MSG__DETAIL__PLANNING_CONSISTENCY_MSG_DATA__STRUCT_HPP_
#define LLL_RDM_MSGS__MSG__DETAIL__PLANNING_CONSISTENCY_MSG_DATA__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__lll_rdm_msgs__msg__PlanningConsistencyMsgData __attribute__((deprecated))
#else
# define DEPRECATED__lll_rdm_msgs__msg__PlanningConsistencyMsgData __declspec(deprecated)
#endif

namespace lll_rdm_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct PlanningConsistencyMsgData_
{
  using Type = PlanningConsistencyMsgData_<ContainerAllocator>;

  explicit PlanningConsistencyMsgData_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->consistent_lengths = false;
      this->consistent_state_size = false;
      this->consistent_input_size = false;
      this->strictly_sorted_time = false;
      this->acceleration_inconsistency = 0.0;
    }
  }

  explicit PlanningConsistencyMsgData_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->consistent_lengths = false;
      this->consistent_state_size = false;
      this->consistent_input_size = false;
      this->strictly_sorted_time = false;
      this->acceleration_inconsistency = 0.0;
    }
  }

  // field types and members
  using _consistent_lengths_type =
    bool;
  _consistent_lengths_type consistent_lengths;
  using _consistent_state_size_type =
    bool;
  _consistent_state_size_type consistent_state_size;
  using _consistent_input_size_type =
    bool;
  _consistent_input_size_type consistent_input_size;
  using _strictly_sorted_time_type =
    bool;
  _strictly_sorted_time_type strictly_sorted_time;
  using _acceleration_inconsistency_type =
    double;
  _acceleration_inconsistency_type acceleration_inconsistency;
  using _acceleration_inconsistency_values_type =
    std::vector<double, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<double>>;
  _acceleration_inconsistency_values_type acceleration_inconsistency_values;

  // setters for named parameter idiom
  Type & set__consistent_lengths(
    const bool & _arg)
  {
    this->consistent_lengths = _arg;
    return *this;
  }
  Type & set__consistent_state_size(
    const bool & _arg)
  {
    this->consistent_state_size = _arg;
    return *this;
  }
  Type & set__consistent_input_size(
    const bool & _arg)
  {
    this->consistent_input_size = _arg;
    return *this;
  }
  Type & set__strictly_sorted_time(
    const bool & _arg)
  {
    this->strictly_sorted_time = _arg;
    return *this;
  }
  Type & set__acceleration_inconsistency(
    const double & _arg)
  {
    this->acceleration_inconsistency = _arg;
    return *this;
  }
  Type & set__acceleration_inconsistency_values(
    const std::vector<double, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<double>> & _arg)
  {
    this->acceleration_inconsistency_values = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    lll_rdm_msgs::msg::PlanningConsistencyMsgData_<ContainerAllocator> *;
  using ConstRawPtr =
    const lll_rdm_msgs::msg::PlanningConsistencyMsgData_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<lll_rdm_msgs::msg::PlanningConsistencyMsgData_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<lll_rdm_msgs::msg::PlanningConsistencyMsgData_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      lll_rdm_msgs::msg::PlanningConsistencyMsgData_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<lll_rdm_msgs::msg::PlanningConsistencyMsgData_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      lll_rdm_msgs::msg::PlanningConsistencyMsgData_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<lll_rdm_msgs::msg::PlanningConsistencyMsgData_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<lll_rdm_msgs::msg::PlanningConsistencyMsgData_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<lll_rdm_msgs::msg::PlanningConsistencyMsgData_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__lll_rdm_msgs__msg__PlanningConsistencyMsgData
    std::shared_ptr<lll_rdm_msgs::msg::PlanningConsistencyMsgData_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__lll_rdm_msgs__msg__PlanningConsistencyMsgData
    std::shared_ptr<lll_rdm_msgs::msg::PlanningConsistencyMsgData_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const PlanningConsistencyMsgData_ & other) const
  {
    if (this->consistent_lengths != other.consistent_lengths) {
      return false;
    }
    if (this->consistent_state_size != other.consistent_state_size) {
      return false;
    }
    if (this->consistent_input_size != other.consistent_input_size) {
      return false;
    }
    if (this->strictly_sorted_time != other.strictly_sorted_time) {
      return false;
    }
    if (this->acceleration_inconsistency != other.acceleration_inconsistency) {
      return false;
    }
    if (this->acceleration_inconsistency_values != other.acceleration_inconsistency_values) {
      return false;
    }
    return true;
  }
  bool operator!=(const PlanningConsistencyMsgData_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct PlanningConsistencyMsgData_

// alias to use template instance with default allocator
using PlanningConsistencyMsgData =
  lll_rdm_msgs::msg::PlanningConsistencyMsgData_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace lll_rdm_msgs

#endif  // LLL_RDM_MSGS__MSG__DETAIL__PLANNING_CONSISTENCY_MSG_DATA__STRUCT_HPP_
