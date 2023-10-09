// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from lll_rdm_msgs:msg/SensorObstructionMetricMsgData.idl
// generated code does not contain a copyright notice

#ifndef LLL_RDM_MSGS__MSG__DETAIL__SENSOR_OBSTRUCTION_METRIC_MSG_DATA__STRUCT_HPP_
#define LLL_RDM_MSGS__MSG__DETAIL__SENSOR_OBSTRUCTION_METRIC_MSG_DATA__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'obstructions'
#include "lll_rdm_msgs/msg/detail/sensor_obstruction_data__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__lll_rdm_msgs__msg__SensorObstructionMetricMsgData __attribute__((deprecated))
#else
# define DEPRECATED__lll_rdm_msgs__msg__SensorObstructionMetricMsgData __declspec(deprecated)
#endif

namespace lll_rdm_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct SensorObstructionMetricMsgData_
{
  using Type = SensorObstructionMetricMsgData_<ContainerAllocator>;

  explicit SensorObstructionMetricMsgData_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->time_since_last_msg = 0ll;
    }
  }

  explicit SensorObstructionMetricMsgData_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->time_since_last_msg = 0ll;
    }
  }

  // field types and members
  using _time_since_last_msg_type =
    int64_t;
  _time_since_last_msg_type time_since_last_msg;
  using _obstructions_by_sectors_type =
    std::vector<double, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<double>>;
  _obstructions_by_sectors_type obstructions_by_sectors;
  using _obstructions_type =
    std::vector<lll_rdm_msgs::msg::SensorObstructionData_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<lll_rdm_msgs::msg::SensorObstructionData_<ContainerAllocator>>>;
  _obstructions_type obstructions;

  // setters for named parameter idiom
  Type & set__time_since_last_msg(
    const int64_t & _arg)
  {
    this->time_since_last_msg = _arg;
    return *this;
  }
  Type & set__obstructions_by_sectors(
    const std::vector<double, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<double>> & _arg)
  {
    this->obstructions_by_sectors = _arg;
    return *this;
  }
  Type & set__obstructions(
    const std::vector<lll_rdm_msgs::msg::SensorObstructionData_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<lll_rdm_msgs::msg::SensorObstructionData_<ContainerAllocator>>> & _arg)
  {
    this->obstructions = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    lll_rdm_msgs::msg::SensorObstructionMetricMsgData_<ContainerAllocator> *;
  using ConstRawPtr =
    const lll_rdm_msgs::msg::SensorObstructionMetricMsgData_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<lll_rdm_msgs::msg::SensorObstructionMetricMsgData_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<lll_rdm_msgs::msg::SensorObstructionMetricMsgData_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      lll_rdm_msgs::msg::SensorObstructionMetricMsgData_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<lll_rdm_msgs::msg::SensorObstructionMetricMsgData_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      lll_rdm_msgs::msg::SensorObstructionMetricMsgData_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<lll_rdm_msgs::msg::SensorObstructionMetricMsgData_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<lll_rdm_msgs::msg::SensorObstructionMetricMsgData_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<lll_rdm_msgs::msg::SensorObstructionMetricMsgData_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__lll_rdm_msgs__msg__SensorObstructionMetricMsgData
    std::shared_ptr<lll_rdm_msgs::msg::SensorObstructionMetricMsgData_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__lll_rdm_msgs__msg__SensorObstructionMetricMsgData
    std::shared_ptr<lll_rdm_msgs::msg::SensorObstructionMetricMsgData_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SensorObstructionMetricMsgData_ & other) const
  {
    if (this->time_since_last_msg != other.time_since_last_msg) {
      return false;
    }
    if (this->obstructions_by_sectors != other.obstructions_by_sectors) {
      return false;
    }
    if (this->obstructions != other.obstructions) {
      return false;
    }
    return true;
  }
  bool operator!=(const SensorObstructionMetricMsgData_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SensorObstructionMetricMsgData_

// alias to use template instance with default allocator
using SensorObstructionMetricMsgData =
  lll_rdm_msgs::msg::SensorObstructionMetricMsgData_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace lll_rdm_msgs

#endif  // LLL_RDM_MSGS__MSG__DETAIL__SENSOR_OBSTRUCTION_METRIC_MSG_DATA__STRUCT_HPP_
