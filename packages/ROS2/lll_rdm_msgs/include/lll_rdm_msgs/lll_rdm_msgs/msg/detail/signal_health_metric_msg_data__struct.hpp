// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from lll_rdm_msgs:msg/SignalHealthMetricMsgData.idl
// generated code does not contain a copyright notice

#ifndef LLL_RDM_MSGS__MSG__DETAIL__SIGNAL_HEALTH_METRIC_MSG_DATA__STRUCT_HPP_
#define LLL_RDM_MSGS__MSG__DETAIL__SIGNAL_HEALTH_METRIC_MSG_DATA__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__lll_rdm_msgs__msg__SignalHealthMetricMsgData __attribute__((deprecated))
#else
# define DEPRECATED__lll_rdm_msgs__msg__SignalHealthMetricMsgData __declspec(deprecated)
#endif

namespace lll_rdm_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct SignalHealthMetricMsgData_
{
  using Type = SignalHealthMetricMsgData_<ContainerAllocator>;

  explicit SignalHealthMetricMsgData_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->timeout = false;
      this->time_since_last_msg = 0ll;
      this->wrong_size = false;
      this->bad_timestamp = false;
      this->has_nan = false;
      this->has_infinity = false;
      this->has_zero = false;
      this->has_subnormal = false;
      this->norm_type = "";
      this->norm = 0.0;
    }
  }

  explicit SignalHealthMetricMsgData_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : norm_type(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->timeout = false;
      this->time_since_last_msg = 0ll;
      this->wrong_size = false;
      this->bad_timestamp = false;
      this->has_nan = false;
      this->has_infinity = false;
      this->has_zero = false;
      this->has_subnormal = false;
      this->norm_type = "";
      this->norm = 0.0;
    }
  }

  // field types and members
  using _timeout_type =
    bool;
  _timeout_type timeout;
  using _time_since_last_msg_type =
    int64_t;
  _time_since_last_msg_type time_since_last_msg;
  using _wrong_size_type =
    bool;
  _wrong_size_type wrong_size;
  using _bad_timestamp_type =
    bool;
  _bad_timestamp_type bad_timestamp;
  using _has_nan_type =
    bool;
  _has_nan_type has_nan;
  using _has_infinity_type =
    bool;
  _has_infinity_type has_infinity;
  using _has_zero_type =
    bool;
  _has_zero_type has_zero;
  using _has_subnormal_type =
    bool;
  _has_subnormal_type has_subnormal;
  using _norm_type_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _norm_type_type norm_type;
  using _norm_type =
    double;
  _norm_type norm;
  using _values_type =
    std::vector<double, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<double>>;
  _values_type values;
  using _rates_type =
    std::vector<double, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<double>>;
  _rates_type rates;

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
  Type & set__wrong_size(
    const bool & _arg)
  {
    this->wrong_size = _arg;
    return *this;
  }
  Type & set__bad_timestamp(
    const bool & _arg)
  {
    this->bad_timestamp = _arg;
    return *this;
  }
  Type & set__has_nan(
    const bool & _arg)
  {
    this->has_nan = _arg;
    return *this;
  }
  Type & set__has_infinity(
    const bool & _arg)
  {
    this->has_infinity = _arg;
    return *this;
  }
  Type & set__has_zero(
    const bool & _arg)
  {
    this->has_zero = _arg;
    return *this;
  }
  Type & set__has_subnormal(
    const bool & _arg)
  {
    this->has_subnormal = _arg;
    return *this;
  }
  Type & set__norm_type(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->norm_type = _arg;
    return *this;
  }
  Type & set__norm(
    const double & _arg)
  {
    this->norm = _arg;
    return *this;
  }
  Type & set__values(
    const std::vector<double, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<double>> & _arg)
  {
    this->values = _arg;
    return *this;
  }
  Type & set__rates(
    const std::vector<double, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<double>> & _arg)
  {
    this->rates = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    lll_rdm_msgs::msg::SignalHealthMetricMsgData_<ContainerAllocator> *;
  using ConstRawPtr =
    const lll_rdm_msgs::msg::SignalHealthMetricMsgData_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<lll_rdm_msgs::msg::SignalHealthMetricMsgData_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<lll_rdm_msgs::msg::SignalHealthMetricMsgData_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      lll_rdm_msgs::msg::SignalHealthMetricMsgData_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<lll_rdm_msgs::msg::SignalHealthMetricMsgData_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      lll_rdm_msgs::msg::SignalHealthMetricMsgData_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<lll_rdm_msgs::msg::SignalHealthMetricMsgData_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<lll_rdm_msgs::msg::SignalHealthMetricMsgData_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<lll_rdm_msgs::msg::SignalHealthMetricMsgData_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__lll_rdm_msgs__msg__SignalHealthMetricMsgData
    std::shared_ptr<lll_rdm_msgs::msg::SignalHealthMetricMsgData_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__lll_rdm_msgs__msg__SignalHealthMetricMsgData
    std::shared_ptr<lll_rdm_msgs::msg::SignalHealthMetricMsgData_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SignalHealthMetricMsgData_ & other) const
  {
    if (this->timeout != other.timeout) {
      return false;
    }
    if (this->time_since_last_msg != other.time_since_last_msg) {
      return false;
    }
    if (this->wrong_size != other.wrong_size) {
      return false;
    }
    if (this->bad_timestamp != other.bad_timestamp) {
      return false;
    }
    if (this->has_nan != other.has_nan) {
      return false;
    }
    if (this->has_infinity != other.has_infinity) {
      return false;
    }
    if (this->has_zero != other.has_zero) {
      return false;
    }
    if (this->has_subnormal != other.has_subnormal) {
      return false;
    }
    if (this->norm_type != other.norm_type) {
      return false;
    }
    if (this->norm != other.norm) {
      return false;
    }
    if (this->values != other.values) {
      return false;
    }
    if (this->rates != other.rates) {
      return false;
    }
    return true;
  }
  bool operator!=(const SignalHealthMetricMsgData_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SignalHealthMetricMsgData_

// alias to use template instance with default allocator
using SignalHealthMetricMsgData =
  lll_rdm_msgs::msg::SignalHealthMetricMsgData_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace lll_rdm_msgs

#endif  // LLL_RDM_MSGS__MSG__DETAIL__SIGNAL_HEALTH_METRIC_MSG_DATA__STRUCT_HPP_
