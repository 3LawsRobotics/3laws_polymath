// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from lll_rdm_msgs:msg/NodeHealthMetricMsgTopicData.idl
// generated code does not contain a copyright notice

#ifndef LLL_RDM_MSGS__MSG__DETAIL__NODE_HEALTH_METRIC_MSG_TOPIC_DATA__STRUCT_HPP_
#define LLL_RDM_MSGS__MSG__DETAIL__NODE_HEALTH_METRIC_MSG_TOPIC_DATA__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'sender_rate'
// Member 'receiver_rate'
// Member 'delay'
#include "lll_rdm_msgs/msg/detail/signal_average_msg_data__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__lll_rdm_msgs__msg__NodeHealthMetricMsgTopicData __attribute__((deprecated))
#else
# define DEPRECATED__lll_rdm_msgs__msg__NodeHealthMetricMsgTopicData __declspec(deprecated)
#endif

namespace lll_rdm_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct NodeHealthMetricMsgTopicData_
{
  using Type = NodeHealthMetricMsgTopicData_<ContainerAllocator>;

  explicit NodeHealthMetricMsgTopicData_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : sender_rate(_init),
    receiver_rate(_init),
    delay(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->topic_id = "";
      this->timeout = false;
      this->time_since_last_msg = 0ll;
    }
  }

  explicit NodeHealthMetricMsgTopicData_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : topic_id(_alloc),
    sender_rate(_alloc, _init),
    receiver_rate(_alloc, _init),
    delay(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->topic_id = "";
      this->timeout = false;
      this->time_since_last_msg = 0ll;
    }
  }

  // field types and members
  using _topic_id_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _topic_id_type topic_id;
  using _timeout_type =
    bool;
  _timeout_type timeout;
  using _time_since_last_msg_type =
    int64_t;
  _time_since_last_msg_type time_since_last_msg;
  using _sender_rate_type =
    lll_rdm_msgs::msg::SignalAverageMsgData_<ContainerAllocator>;
  _sender_rate_type sender_rate;
  using _receiver_rate_type =
    lll_rdm_msgs::msg::SignalAverageMsgData_<ContainerAllocator>;
  _receiver_rate_type receiver_rate;
  using _delay_type =
    lll_rdm_msgs::msg::SignalAverageMsgData_<ContainerAllocator>;
  _delay_type delay;

  // setters for named parameter idiom
  Type & set__topic_id(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->topic_id = _arg;
    return *this;
  }
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
  Type & set__sender_rate(
    const lll_rdm_msgs::msg::SignalAverageMsgData_<ContainerAllocator> & _arg)
  {
    this->sender_rate = _arg;
    return *this;
  }
  Type & set__receiver_rate(
    const lll_rdm_msgs::msg::SignalAverageMsgData_<ContainerAllocator> & _arg)
  {
    this->receiver_rate = _arg;
    return *this;
  }
  Type & set__delay(
    const lll_rdm_msgs::msg::SignalAverageMsgData_<ContainerAllocator> & _arg)
  {
    this->delay = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    lll_rdm_msgs::msg::NodeHealthMetricMsgTopicData_<ContainerAllocator> *;
  using ConstRawPtr =
    const lll_rdm_msgs::msg::NodeHealthMetricMsgTopicData_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<lll_rdm_msgs::msg::NodeHealthMetricMsgTopicData_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<lll_rdm_msgs::msg::NodeHealthMetricMsgTopicData_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      lll_rdm_msgs::msg::NodeHealthMetricMsgTopicData_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<lll_rdm_msgs::msg::NodeHealthMetricMsgTopicData_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      lll_rdm_msgs::msg::NodeHealthMetricMsgTopicData_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<lll_rdm_msgs::msg::NodeHealthMetricMsgTopicData_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<lll_rdm_msgs::msg::NodeHealthMetricMsgTopicData_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<lll_rdm_msgs::msg::NodeHealthMetricMsgTopicData_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__lll_rdm_msgs__msg__NodeHealthMetricMsgTopicData
    std::shared_ptr<lll_rdm_msgs::msg::NodeHealthMetricMsgTopicData_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__lll_rdm_msgs__msg__NodeHealthMetricMsgTopicData
    std::shared_ptr<lll_rdm_msgs::msg::NodeHealthMetricMsgTopicData_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const NodeHealthMetricMsgTopicData_ & other) const
  {
    if (this->topic_id != other.topic_id) {
      return false;
    }
    if (this->timeout != other.timeout) {
      return false;
    }
    if (this->time_since_last_msg != other.time_since_last_msg) {
      return false;
    }
    if (this->sender_rate != other.sender_rate) {
      return false;
    }
    if (this->receiver_rate != other.receiver_rate) {
      return false;
    }
    if (this->delay != other.delay) {
      return false;
    }
    return true;
  }
  bool operator!=(const NodeHealthMetricMsgTopicData_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct NodeHealthMetricMsgTopicData_

// alias to use template instance with default allocator
using NodeHealthMetricMsgTopicData =
  lll_rdm_msgs::msg::NodeHealthMetricMsgTopicData_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace lll_rdm_msgs

#endif  // LLL_RDM_MSGS__MSG__DETAIL__NODE_HEALTH_METRIC_MSG_TOPIC_DATA__STRUCT_HPP_
