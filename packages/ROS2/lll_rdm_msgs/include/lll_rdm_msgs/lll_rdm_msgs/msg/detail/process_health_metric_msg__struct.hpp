// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from lll_rdm_msgs:msg/ProcessHealthMetricMsg.idl
// generated code does not contain a copyright notice

#ifndef LLL_RDM_MSGS__MSG__DETAIL__PROCESS_HEALTH_METRIC_MSG__STRUCT_HPP_
#define LLL_RDM_MSGS__MSG__DETAIL__PROCESS_HEALTH_METRIC_MSG__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'header'
#include "lll_rdm_msgs/msg/detail/msg_header__struct.hpp"
// Member 'data'
#include "lll_rdm_msgs/msg/detail/process_health_metric_msg_data__struct.hpp"
// Member 'tags'
#include "lll_rdm_msgs/msg/detail/metric_tags_msg_data__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__lll_rdm_msgs__msg__ProcessHealthMetricMsg __attribute__((deprecated))
#else
# define DEPRECATED__lll_rdm_msgs__msg__ProcessHealthMetricMsg __declspec(deprecated)
#endif

namespace lll_rdm_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct ProcessHealthMetricMsg_
{
  using Type = ProcessHealthMetricMsg_<ContainerAllocator>;

  explicit ProcessHealthMetricMsg_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init),
    data(_init)
  {
    (void)_init;
  }

  explicit ProcessHealthMetricMsg_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init),
    data(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _header_type =
    lll_rdm_msgs::msg::MsgHeader_<ContainerAllocator>;
  _header_type header;
  using _data_type =
    lll_rdm_msgs::msg::ProcessHealthMetricMsgData_<ContainerAllocator>;
  _data_type data;
  using _tags_type =
    std::vector<lll_rdm_msgs::msg::MetricTagsMsgData_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<lll_rdm_msgs::msg::MetricTagsMsgData_<ContainerAllocator>>>;
  _tags_type tags;

  // setters for named parameter idiom
  Type & set__header(
    const lll_rdm_msgs::msg::MsgHeader_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__data(
    const lll_rdm_msgs::msg::ProcessHealthMetricMsgData_<ContainerAllocator> & _arg)
  {
    this->data = _arg;
    return *this;
  }
  Type & set__tags(
    const std::vector<lll_rdm_msgs::msg::MetricTagsMsgData_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<lll_rdm_msgs::msg::MetricTagsMsgData_<ContainerAllocator>>> & _arg)
  {
    this->tags = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    lll_rdm_msgs::msg::ProcessHealthMetricMsg_<ContainerAllocator> *;
  using ConstRawPtr =
    const lll_rdm_msgs::msg::ProcessHealthMetricMsg_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<lll_rdm_msgs::msg::ProcessHealthMetricMsg_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<lll_rdm_msgs::msg::ProcessHealthMetricMsg_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      lll_rdm_msgs::msg::ProcessHealthMetricMsg_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<lll_rdm_msgs::msg::ProcessHealthMetricMsg_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      lll_rdm_msgs::msg::ProcessHealthMetricMsg_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<lll_rdm_msgs::msg::ProcessHealthMetricMsg_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<lll_rdm_msgs::msg::ProcessHealthMetricMsg_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<lll_rdm_msgs::msg::ProcessHealthMetricMsg_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__lll_rdm_msgs__msg__ProcessHealthMetricMsg
    std::shared_ptr<lll_rdm_msgs::msg::ProcessHealthMetricMsg_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__lll_rdm_msgs__msg__ProcessHealthMetricMsg
    std::shared_ptr<lll_rdm_msgs::msg::ProcessHealthMetricMsg_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ProcessHealthMetricMsg_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->data != other.data) {
      return false;
    }
    if (this->tags != other.tags) {
      return false;
    }
    return true;
  }
  bool operator!=(const ProcessHealthMetricMsg_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ProcessHealthMetricMsg_

// alias to use template instance with default allocator
using ProcessHealthMetricMsg =
  lll_rdm_msgs::msg::ProcessHealthMetricMsg_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace lll_rdm_msgs

#endif  // LLL_RDM_MSGS__MSG__DETAIL__PROCESS_HEALTH_METRIC_MSG__STRUCT_HPP_
