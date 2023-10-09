// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from lll_rdm_msgs:msg/ClockHealthMetricUtcMsgData.idl
// generated code does not contain a copyright notice

#ifndef LLL_RDM_MSGS__MSG__DETAIL__CLOCK_HEALTH_METRIC_UTC_MSG_DATA__STRUCT_HPP_
#define LLL_RDM_MSGS__MSG__DETAIL__CLOCK_HEALTH_METRIC_UTC_MSG_DATA__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__lll_rdm_msgs__msg__ClockHealthMetricUtcMsgData __attribute__((deprecated))
#else
# define DEPRECATED__lll_rdm_msgs__msg__ClockHealthMetricUtcMsgData __declspec(deprecated)
#endif

namespace lll_rdm_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct ClockHealthMetricUtcMsgData_
{
  using Type = ClockHealthMetricUtcMsgData_<ContainerAllocator>;

  explicit ClockHealthMetricUtcMsgData_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->has_utc = false;
      this->utc_time = 0ll;
      this->rtc_time = 0ll;
      this->offset_from_utc = 0ll;
    }
  }

  explicit ClockHealthMetricUtcMsgData_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->has_utc = false;
      this->utc_time = 0ll;
      this->rtc_time = 0ll;
      this->offset_from_utc = 0ll;
    }
  }

  // field types and members
  using _has_utc_type =
    bool;
  _has_utc_type has_utc;
  using _utc_time_type =
    int64_t;
  _utc_time_type utc_time;
  using _rtc_time_type =
    int64_t;
  _rtc_time_type rtc_time;
  using _offset_from_utc_type =
    int64_t;
  _offset_from_utc_type offset_from_utc;

  // setters for named parameter idiom
  Type & set__has_utc(
    const bool & _arg)
  {
    this->has_utc = _arg;
    return *this;
  }
  Type & set__utc_time(
    const int64_t & _arg)
  {
    this->utc_time = _arg;
    return *this;
  }
  Type & set__rtc_time(
    const int64_t & _arg)
  {
    this->rtc_time = _arg;
    return *this;
  }
  Type & set__offset_from_utc(
    const int64_t & _arg)
  {
    this->offset_from_utc = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    lll_rdm_msgs::msg::ClockHealthMetricUtcMsgData_<ContainerAllocator> *;
  using ConstRawPtr =
    const lll_rdm_msgs::msg::ClockHealthMetricUtcMsgData_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<lll_rdm_msgs::msg::ClockHealthMetricUtcMsgData_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<lll_rdm_msgs::msg::ClockHealthMetricUtcMsgData_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      lll_rdm_msgs::msg::ClockHealthMetricUtcMsgData_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<lll_rdm_msgs::msg::ClockHealthMetricUtcMsgData_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      lll_rdm_msgs::msg::ClockHealthMetricUtcMsgData_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<lll_rdm_msgs::msg::ClockHealthMetricUtcMsgData_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<lll_rdm_msgs::msg::ClockHealthMetricUtcMsgData_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<lll_rdm_msgs::msg::ClockHealthMetricUtcMsgData_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__lll_rdm_msgs__msg__ClockHealthMetricUtcMsgData
    std::shared_ptr<lll_rdm_msgs::msg::ClockHealthMetricUtcMsgData_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__lll_rdm_msgs__msg__ClockHealthMetricUtcMsgData
    std::shared_ptr<lll_rdm_msgs::msg::ClockHealthMetricUtcMsgData_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ClockHealthMetricUtcMsgData_ & other) const
  {
    if (this->has_utc != other.has_utc) {
      return false;
    }
    if (this->utc_time != other.utc_time) {
      return false;
    }
    if (this->rtc_time != other.rtc_time) {
      return false;
    }
    if (this->offset_from_utc != other.offset_from_utc) {
      return false;
    }
    return true;
  }
  bool operator!=(const ClockHealthMetricUtcMsgData_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ClockHealthMetricUtcMsgData_

// alias to use template instance with default allocator
using ClockHealthMetricUtcMsgData =
  lll_rdm_msgs::msg::ClockHealthMetricUtcMsgData_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace lll_rdm_msgs

#endif  // LLL_RDM_MSGS__MSG__DETAIL__CLOCK_HEALTH_METRIC_UTC_MSG_DATA__STRUCT_HPP_
