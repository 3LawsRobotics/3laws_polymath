// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from lll_rdm_msgs:msg/DomainStatusMetricMsgData.idl
// generated code does not contain a copyright notice

#ifndef LLL_RDM_MSGS__MSG__DETAIL__DOMAIN_STATUS_METRIC_MSG_DATA__STRUCT_HPP_
#define LLL_RDM_MSGS__MSG__DETAIL__DOMAIN_STATUS_METRIC_MSG_DATA__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__lll_rdm_msgs__msg__DomainStatusMetricMsgData __attribute__((deprecated))
#else
# define DEPRECATED__lll_rdm_msgs__msg__DomainStatusMetricMsgData __declspec(deprecated)
#endif

namespace lll_rdm_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct DomainStatusMetricMsgData_
{
  using Type = DomainStatusMetricMsgData_<ContainerAllocator>;

  explicit DomainStatusMetricMsgData_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->system_status = "";
      this->behavior_status = "";
      this->hardware_status = "";
      this->perception_status = "";
      this->control_status = "";
    }
  }

  explicit DomainStatusMetricMsgData_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : system_status(_alloc),
    behavior_status(_alloc),
    hardware_status(_alloc),
    perception_status(_alloc),
    control_status(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->system_status = "";
      this->behavior_status = "";
      this->hardware_status = "";
      this->perception_status = "";
      this->control_status = "";
    }
  }

  // field types and members
  using _system_status_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _system_status_type system_status;
  using _behavior_status_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _behavior_status_type behavior_status;
  using _hardware_status_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _hardware_status_type hardware_status;
  using _perception_status_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _perception_status_type perception_status;
  using _control_status_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _control_status_type control_status;

  // setters for named parameter idiom
  Type & set__system_status(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->system_status = _arg;
    return *this;
  }
  Type & set__behavior_status(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->behavior_status = _arg;
    return *this;
  }
  Type & set__hardware_status(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->hardware_status = _arg;
    return *this;
  }
  Type & set__perception_status(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->perception_status = _arg;
    return *this;
  }
  Type & set__control_status(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->control_status = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    lll_rdm_msgs::msg::DomainStatusMetricMsgData_<ContainerAllocator> *;
  using ConstRawPtr =
    const lll_rdm_msgs::msg::DomainStatusMetricMsgData_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<lll_rdm_msgs::msg::DomainStatusMetricMsgData_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<lll_rdm_msgs::msg::DomainStatusMetricMsgData_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      lll_rdm_msgs::msg::DomainStatusMetricMsgData_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<lll_rdm_msgs::msg::DomainStatusMetricMsgData_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      lll_rdm_msgs::msg::DomainStatusMetricMsgData_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<lll_rdm_msgs::msg::DomainStatusMetricMsgData_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<lll_rdm_msgs::msg::DomainStatusMetricMsgData_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<lll_rdm_msgs::msg::DomainStatusMetricMsgData_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__lll_rdm_msgs__msg__DomainStatusMetricMsgData
    std::shared_ptr<lll_rdm_msgs::msg::DomainStatusMetricMsgData_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__lll_rdm_msgs__msg__DomainStatusMetricMsgData
    std::shared_ptr<lll_rdm_msgs::msg::DomainStatusMetricMsgData_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const DomainStatusMetricMsgData_ & other) const
  {
    if (this->system_status != other.system_status) {
      return false;
    }
    if (this->behavior_status != other.behavior_status) {
      return false;
    }
    if (this->hardware_status != other.hardware_status) {
      return false;
    }
    if (this->perception_status != other.perception_status) {
      return false;
    }
    if (this->control_status != other.control_status) {
      return false;
    }
    return true;
  }
  bool operator!=(const DomainStatusMetricMsgData_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct DomainStatusMetricMsgData_

// alias to use template instance with default allocator
using DomainStatusMetricMsgData =
  lll_rdm_msgs::msg::DomainStatusMetricMsgData_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace lll_rdm_msgs

#endif  // LLL_RDM_MSGS__MSG__DETAIL__DOMAIN_STATUS_METRIC_MSG_DATA__STRUCT_HPP_
