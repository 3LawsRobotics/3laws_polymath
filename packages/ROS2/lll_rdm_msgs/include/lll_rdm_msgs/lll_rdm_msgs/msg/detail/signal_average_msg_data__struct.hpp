// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from lll_rdm_msgs:msg/SignalAverageMsgData.idl
// generated code does not contain a copyright notice

#ifndef LLL_RDM_MSGS__MSG__DETAIL__SIGNAL_AVERAGE_MSG_DATA__STRUCT_HPP_
#define LLL_RDM_MSGS__MSG__DETAIL__SIGNAL_AVERAGE_MSG_DATA__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__lll_rdm_msgs__msg__SignalAverageMsgData __attribute__((deprecated))
#else
# define DEPRECATED__lll_rdm_msgs__msg__SignalAverageMsgData __declspec(deprecated)
#endif

namespace lll_rdm_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct SignalAverageMsgData_
{
  using Type = SignalAverageMsgData_<ContainerAllocator>;

  explicit SignalAverageMsgData_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->average = 0.0;
      this->min = 0.0;
      this->max = 0.0;
    }
  }

  explicit SignalAverageMsgData_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->average = 0.0;
      this->min = 0.0;
      this->max = 0.0;
    }
  }

  // field types and members
  using _average_type =
    double;
  _average_type average;
  using _min_type =
    double;
  _min_type min;
  using _max_type =
    double;
  _max_type max;

  // setters for named parameter idiom
  Type & set__average(
    const double & _arg)
  {
    this->average = _arg;
    return *this;
  }
  Type & set__min(
    const double & _arg)
  {
    this->min = _arg;
    return *this;
  }
  Type & set__max(
    const double & _arg)
  {
    this->max = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    lll_rdm_msgs::msg::SignalAverageMsgData_<ContainerAllocator> *;
  using ConstRawPtr =
    const lll_rdm_msgs::msg::SignalAverageMsgData_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<lll_rdm_msgs::msg::SignalAverageMsgData_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<lll_rdm_msgs::msg::SignalAverageMsgData_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      lll_rdm_msgs::msg::SignalAverageMsgData_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<lll_rdm_msgs::msg::SignalAverageMsgData_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      lll_rdm_msgs::msg::SignalAverageMsgData_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<lll_rdm_msgs::msg::SignalAverageMsgData_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<lll_rdm_msgs::msg::SignalAverageMsgData_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<lll_rdm_msgs::msg::SignalAverageMsgData_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__lll_rdm_msgs__msg__SignalAverageMsgData
    std::shared_ptr<lll_rdm_msgs::msg::SignalAverageMsgData_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__lll_rdm_msgs__msg__SignalAverageMsgData
    std::shared_ptr<lll_rdm_msgs::msg::SignalAverageMsgData_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SignalAverageMsgData_ & other) const
  {
    if (this->average != other.average) {
      return false;
    }
    if (this->min != other.min) {
      return false;
    }
    if (this->max != other.max) {
      return false;
    }
    return true;
  }
  bool operator!=(const SignalAverageMsgData_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SignalAverageMsgData_

// alias to use template instance with default allocator
using SignalAverageMsgData =
  lll_rdm_msgs::msg::SignalAverageMsgData_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace lll_rdm_msgs

#endif  // LLL_RDM_MSGS__MSG__DETAIL__SIGNAL_AVERAGE_MSG_DATA__STRUCT_HPP_
