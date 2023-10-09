// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from lll_rdm_msgs:msg/ClockHealthMetricRtcMsgData.idl
// generated code does not contain a copyright notice

#ifndef LLL_RDM_MSGS__MSG__DETAIL__CLOCK_HEALTH_METRIC_RTC_MSG_DATA__STRUCT_HPP_
#define LLL_RDM_MSGS__MSG__DETAIL__CLOCK_HEALTH_METRIC_RTC_MSG_DATA__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__lll_rdm_msgs__msg__ClockHealthMetricRtcMsgData __attribute__((deprecated))
#else
# define DEPRECATED__lll_rdm_msgs__msg__ClockHealthMetricRtcMsgData __declspec(deprecated)
#endif

namespace lll_rdm_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct ClockHealthMetricRtcMsgData_
{
  using Type = ClockHealthMetricRtcMsgData_<ContainerAllocator>;

  explicit ClockHealthMetricRtcMsgData_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->timeout = false;
      this->time_since_last_msg = 0ll;
      this->offset_from_rtc = 0ll;
    }
  }

  explicit ClockHealthMetricRtcMsgData_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->timeout = false;
      this->time_since_last_msg = 0ll;
      this->offset_from_rtc = 0ll;
    }
  }

  // field types and members
  using _timeout_type =
    bool;
  _timeout_type timeout;
  using _time_since_last_msg_type =
    int64_t;
  _time_since_last_msg_type time_since_last_msg;
  using _offset_from_rtc_type =
    int64_t;
  _offset_from_rtc_type offset_from_rtc;

  // setters for named parameter idiom
  Type & set__timeout(
    const bool & _arg)
  {
    this->timeout = _arg;
    return *this;
  }
  Type & set__time_since_last_msg(
    const int64_t & _arg)
  {
    this->time_since_last_msg = _arg;
    return *this;
  }
  Type & set__offset_from_rtc(
    const int64_t & _arg)
  {
    this->offset_from_rtc = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    lll_rdm_msgs::msg::ClockHealthMetricRtcMsgData_<ContainerAllocator> *;
  using ConstRawPtr =
    const lll_rdm_msgs::msg::ClockHealthMetricRtcMsgData_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<lll_rdm_msgs::msg::ClockHealthMetricRtcMsgData_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<lll_rdm_msgs::msg::ClockHealthMetricRtcMsgData_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      lll_rdm_msgs::msg::ClockHealthMetricRtcMsgData_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<lll_rdm_msgs::msg::ClockHealthMetricRtcMsgData_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      lll_rdm_msgs::msg::ClockHealthMetricRtcMsgData_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<lll_rdm_msgs::msg::ClockHealthMetricRtcMsgData_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<lll_rdm_msgs::msg::ClockHealthMetricRtcMsgData_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<lll_rdm_msgs::msg::ClockHealthMetricRtcMsgData_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__lll_rdm_msgs__msg__ClockHealthMetricRtcMsgData
    std::shared_ptr<lll_rdm_msgs::msg::ClockHealthMetricRtcMsgData_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__lll_rdm_msgs__msg__ClockHealthMetricRtcMsgData
    std::shared_ptr<lll_rdm_msgs::msg::ClockHealthMetricRtcMsgData_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ClockHealthMetricRtcMsgData_ & other) const
  {
    if (this->timeout != other.timeout) {
      return false;
    }
    if (this->time_since_last_msg != other.time_since_last_msg) {
      return false;
    }
    if (this->offset_from_rtc != other.offset_from_rtc) {
      return false;
    }
    return true;
  }
  bool operator!=(const ClockHealthMetricRtcMsgData_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ClockHealthMetricRtcMsgData_

// alias to use template instance with default allocator
using ClockHealthMetricRtcMsgData =
  lll_rdm_msgs::msg::ClockHealthMetricRtcMsgData_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace lll_rdm_msgs

#endif  // LLL_RDM_MSGS__MSG__DETAIL__CLOCK_HEALTH_METRIC_RTC_MSG_DATA__STRUCT_HPP_
