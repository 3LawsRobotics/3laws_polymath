// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from lll_rdm_msgs:msg/ControlTrackingMetricHighFrequencyMsgData.idl
// generated code does not contain a copyright notice

#ifndef LLL_RDM_MSGS__MSG__DETAIL__CONTROL_TRACKING_METRIC_HIGH_FREQUENCY_MSG_DATA__STRUCT_HPP_
#define LLL_RDM_MSGS__MSG__DETAIL__CONTROL_TRACKING_METRIC_HIGH_FREQUENCY_MSG_DATA__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__lll_rdm_msgs__msg__ControlTrackingMetricHighFrequencyMsgData __attribute__((deprecated))
#else
# define DEPRECATED__lll_rdm_msgs__msg__ControlTrackingMetricHighFrequencyMsgData __declspec(deprecated)
#endif

namespace lll_rdm_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct ControlTrackingMetricHighFrequencyMsgData_
{
  using Type = ControlTrackingMetricHighFrequencyMsgData_<ContainerAllocator>;

  explicit ControlTrackingMetricHighFrequencyMsgData_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
  }

  explicit ControlTrackingMetricHighFrequencyMsgData_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
    (void)_alloc;
  }

  // field types and members
  using _tracking_error_type =
    std::vector<double, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<double>>;
  _tracking_error_type tracking_error;

  // setters for named parameter idiom
  Type & set__tracking_error(
    const std::vector<double, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<double>> & _arg)
  {
    this->tracking_error = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    lll_rdm_msgs::msg::ControlTrackingMetricHighFrequencyMsgData_<ContainerAllocator> *;
  using ConstRawPtr =
    const lll_rdm_msgs::msg::ControlTrackingMetricHighFrequencyMsgData_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<lll_rdm_msgs::msg::ControlTrackingMetricHighFrequencyMsgData_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<lll_rdm_msgs::msg::ControlTrackingMetricHighFrequencyMsgData_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      lll_rdm_msgs::msg::ControlTrackingMetricHighFrequencyMsgData_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<lll_rdm_msgs::msg::ControlTrackingMetricHighFrequencyMsgData_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      lll_rdm_msgs::msg::ControlTrackingMetricHighFrequencyMsgData_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<lll_rdm_msgs::msg::ControlTrackingMetricHighFrequencyMsgData_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<lll_rdm_msgs::msg::ControlTrackingMetricHighFrequencyMsgData_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<lll_rdm_msgs::msg::ControlTrackingMetricHighFrequencyMsgData_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__lll_rdm_msgs__msg__ControlTrackingMetricHighFrequencyMsgData
    std::shared_ptr<lll_rdm_msgs::msg::ControlTrackingMetricHighFrequencyMsgData_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__lll_rdm_msgs__msg__ControlTrackingMetricHighFrequencyMsgData
    std::shared_ptr<lll_rdm_msgs::msg::ControlTrackingMetricHighFrequencyMsgData_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ControlTrackingMetricHighFrequencyMsgData_ & other) const
  {
    if (this->tracking_error != other.tracking_error) {
      return false;
    }
    return true;
  }
  bool operator!=(const ControlTrackingMetricHighFrequencyMsgData_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ControlTrackingMetricHighFrequencyMsgData_

// alias to use template instance with default allocator
using ControlTrackingMetricHighFrequencyMsgData =
  lll_rdm_msgs::msg::ControlTrackingMetricHighFrequencyMsgData_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace lll_rdm_msgs

#endif  // LLL_RDM_MSGS__MSG__DETAIL__CONTROL_TRACKING_METRIC_HIGH_FREQUENCY_MSG_DATA__STRUCT_HPP_
