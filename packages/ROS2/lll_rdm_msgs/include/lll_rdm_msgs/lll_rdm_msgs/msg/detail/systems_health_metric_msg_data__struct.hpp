// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from lll_rdm_msgs:msg/SystemsHealthMetricMsgData.idl
// generated code does not contain a copyright notice

#ifndef LLL_RDM_MSGS__MSG__DETAIL__SYSTEMS_HEALTH_METRIC_MSG_DATA__STRUCT_HPP_
#define LLL_RDM_MSGS__MSG__DETAIL__SYSTEMS_HEALTH_METRIC_MSG_DATA__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'values'
#include "lll_rdm_msgs/msg/detail/system_resources_input_msg_data__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__lll_rdm_msgs__msg__SystemsHealthMetricMsgData __attribute__((deprecated))
#else
# define DEPRECATED__lll_rdm_msgs__msg__SystemsHealthMetricMsgData __declspec(deprecated)
#endif

namespace lll_rdm_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct SystemsHealthMetricMsgData_
{
  using Type = SystemsHealthMetricMsgData_<ContainerAllocator>;

  explicit SystemsHealthMetricMsgData_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : values(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->timeout = false;
      this->time_since_last_msg = 0ll;
    }
  }

  explicit SystemsHealthMetricMsgData_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : values(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->timeout = false;
      this->time_since_last_msg = 0ll;
    }
  }

  // field types and members
  using _timeout_type =
    bool;
  _timeout_type timeout;
  using _time_since_last_msg_type =
    int64_t;
  _time_since_last_msg_type time_since_last_msg;
  using _values_type =
    lll_rdm_msgs::msg::SystemResourcesInputMsgData_<ContainerAllocator>;
  _values_type values;

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
  Type & set__values(
    const lll_rdm_msgs::msg::SystemResourcesInputMsgData_<ContainerAllocator> & _arg)
  {
    this->values = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    lll_rdm_msgs::msg::SystemsHealthMetricMsgData_<ContainerAllocator> *;
  using ConstRawPtr =
    const lll_rdm_msgs::msg::SystemsHealthMetricMsgData_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<lll_rdm_msgs::msg::SystemsHealthMetricMsgData_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<lll_rdm_msgs::msg::SystemsHealthMetricMsgData_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      lll_rdm_msgs::msg::SystemsHealthMetricMsgData_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<lll_rdm_msgs::msg::SystemsHealthMetricMsgData_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      lll_rdm_msgs::msg::SystemsHealthMetricMsgData_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<lll_rdm_msgs::msg::SystemsHealthMetricMsgData_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<lll_rdm_msgs::msg::SystemsHealthMetricMsgData_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<lll_rdm_msgs::msg::SystemsHealthMetricMsgData_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__lll_rdm_msgs__msg__SystemsHealthMetricMsgData
    std::shared_ptr<lll_rdm_msgs::msg::SystemsHealthMetricMsgData_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__lll_rdm_msgs__msg__SystemsHealthMetricMsgData
    std::shared_ptr<lll_rdm_msgs::msg::SystemsHealthMetricMsgData_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SystemsHealthMetricMsgData_ & other) const
  {
    if (this->timeout != other.timeout) {
      return false;
    }
    if (this->time_since_last_msg != other.time_since_last_msg) {
      return false;
    }
    if (this->values != other.values) {
      return false;
    }
    return true;
  }
  bool operator!=(const SystemsHealthMetricMsgData_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SystemsHealthMetricMsgData_

// alias to use template instance with default allocator
using SystemsHealthMetricMsgData =
  lll_rdm_msgs::msg::SystemsHealthMetricMsgData_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace lll_rdm_msgs

#endif  // LLL_RDM_MSGS__MSG__DETAIL__SYSTEMS_HEALTH_METRIC_MSG_DATA__STRUCT_HPP_
