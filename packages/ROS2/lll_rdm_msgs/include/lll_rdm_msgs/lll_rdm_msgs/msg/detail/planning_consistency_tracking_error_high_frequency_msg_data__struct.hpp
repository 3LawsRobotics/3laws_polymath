// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from lll_rdm_msgs:msg/PlanningConsistencyTrackingErrorHighFrequencyMsgData.idl
// generated code does not contain a copyright notice

#ifndef LLL_RDM_MSGS__MSG__DETAIL__PLANNING_CONSISTENCY_TRACKING_ERROR_HIGH_FREQUENCY_MSG_DATA__STRUCT_HPP_
#define LLL_RDM_MSGS__MSG__DETAIL__PLANNING_CONSISTENCY_TRACKING_ERROR_HIGH_FREQUENCY_MSG_DATA__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__lll_rdm_msgs__msg__PlanningConsistencyTrackingErrorHighFrequencyMsgData __attribute__((deprecated))
#else
# define DEPRECATED__lll_rdm_msgs__msg__PlanningConsistencyTrackingErrorHighFrequencyMsgData __declspec(deprecated)
#endif

namespace lll_rdm_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct PlanningConsistencyTrackingErrorHighFrequencyMsgData_
{
  using Type = PlanningConsistencyTrackingErrorHighFrequencyMsgData_<ContainerAllocator>;

  explicit PlanningConsistencyTrackingErrorHighFrequencyMsgData_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
  }

  explicit PlanningConsistencyTrackingErrorHighFrequencyMsgData_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
    (void)_alloc;
  }

  // field types and members
  using _tracking_error_type =
    std::vector<double, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<double>>;
  _tracking_error_type tracking_error;
  using _desired_type =
    std::vector<double, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<double>>;
  _desired_type desired;
  using _actual_type =
    std::vector<double, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<double>>;
  _actual_type actual;

  // setters for named parameter idiom
  Type & set__tracking_error(
    const std::vector<double, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<double>> & _arg)
  {
    this->tracking_error = _arg;
    return *this;
  }
  Type & set__desired(
    const std::vector<double, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<double>> & _arg)
  {
    this->desired = _arg;
    return *this;
  }
  Type & set__actual(
    const std::vector<double, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<double>> & _arg)
  {
    this->actual = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    lll_rdm_msgs::msg::PlanningConsistencyTrackingErrorHighFrequencyMsgData_<ContainerAllocator> *;
  using ConstRawPtr =
    const lll_rdm_msgs::msg::PlanningConsistencyTrackingErrorHighFrequencyMsgData_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<lll_rdm_msgs::msg::PlanningConsistencyTrackingErrorHighFrequencyMsgData_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<lll_rdm_msgs::msg::PlanningConsistencyTrackingErrorHighFrequencyMsgData_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      lll_rdm_msgs::msg::PlanningConsistencyTrackingErrorHighFrequencyMsgData_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<lll_rdm_msgs::msg::PlanningConsistencyTrackingErrorHighFrequencyMsgData_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      lll_rdm_msgs::msg::PlanningConsistencyTrackingErrorHighFrequencyMsgData_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<lll_rdm_msgs::msg::PlanningConsistencyTrackingErrorHighFrequencyMsgData_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<lll_rdm_msgs::msg::PlanningConsistencyTrackingErrorHighFrequencyMsgData_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<lll_rdm_msgs::msg::PlanningConsistencyTrackingErrorHighFrequencyMsgData_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__lll_rdm_msgs__msg__PlanningConsistencyTrackingErrorHighFrequencyMsgData
    std::shared_ptr<lll_rdm_msgs::msg::PlanningConsistencyTrackingErrorHighFrequencyMsgData_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__lll_rdm_msgs__msg__PlanningConsistencyTrackingErrorHighFrequencyMsgData
    std::shared_ptr<lll_rdm_msgs::msg::PlanningConsistencyTrackingErrorHighFrequencyMsgData_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const PlanningConsistencyTrackingErrorHighFrequencyMsgData_ & other) const
  {
    if (this->tracking_error != other.tracking_error) {
      return false;
    }
    if (this->desired != other.desired) {
      return false;
    }
    if (this->actual != other.actual) {
      return false;
    }
    return true;
  }
  bool operator!=(const PlanningConsistencyTrackingErrorHighFrequencyMsgData_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct PlanningConsistencyTrackingErrorHighFrequencyMsgData_

// alias to use template instance with default allocator
using PlanningConsistencyTrackingErrorHighFrequencyMsgData =
  lll_rdm_msgs::msg::PlanningConsistencyTrackingErrorHighFrequencyMsgData_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace lll_rdm_msgs

#endif  // LLL_RDM_MSGS__MSG__DETAIL__PLANNING_CONSISTENCY_TRACKING_ERROR_HIGH_FREQUENCY_MSG_DATA__STRUCT_HPP_
