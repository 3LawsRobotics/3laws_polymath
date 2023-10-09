// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from lll_rdm_msgs:msg/ProcessHealthMetricMsgData.idl
// generated code does not contain a copyright notice

#ifndef LLL_RDM_MSGS__MSG__DETAIL__PROCESS_HEALTH_METRIC_MSG_DATA__STRUCT_HPP_
#define LLL_RDM_MSGS__MSG__DETAIL__PROCESS_HEALTH_METRIC_MSG_DATA__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__lll_rdm_msgs__msg__ProcessHealthMetricMsgData __attribute__((deprecated))
#else
# define DEPRECATED__lll_rdm_msgs__msg__ProcessHealthMetricMsgData __declspec(deprecated)
#endif

namespace lll_rdm_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct ProcessHealthMetricMsgData_
{
  using Type = ProcessHealthMetricMsgData_<ContainerAllocator>;

  explicit ProcessHealthMetricMsgData_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->cpu_usage = 0.0;
      this->cpu_usage_total = 0.0;
      this->ram_usage = 0ull;
      this->n_threads = 0ull;
      this->process_up_time = 0.0;
      this->process_run_time = 0.0;
      this->io_total_read = 0ull;
      this->io_total_write = 0ull;
      this->io_disk_read = 0ull;
      this->io_disk_write = 0ull;
    }
  }

  explicit ProcessHealthMetricMsgData_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->cpu_usage = 0.0;
      this->cpu_usage_total = 0.0;
      this->ram_usage = 0ull;
      this->n_threads = 0ull;
      this->process_up_time = 0.0;
      this->process_run_time = 0.0;
      this->io_total_read = 0ull;
      this->io_total_write = 0ull;
      this->io_disk_read = 0ull;
      this->io_disk_write = 0ull;
    }
  }

  // field types and members
  using _cpu_usage_type =
    double;
  _cpu_usage_type cpu_usage;
  using _cpu_usage_total_type =
    double;
  _cpu_usage_total_type cpu_usage_total;
  using _ram_usage_type =
    uint64_t;
  _ram_usage_type ram_usage;
  using _n_threads_type =
    uint64_t;
  _n_threads_type n_threads;
  using _process_up_time_type =
    double;
  _process_up_time_type process_up_time;
  using _process_run_time_type =
    double;
  _process_run_time_type process_run_time;
  using _io_total_read_type =
    uint64_t;
  _io_total_read_type io_total_read;
  using _io_total_write_type =
    uint64_t;
  _io_total_write_type io_total_write;
  using _io_disk_read_type =
    uint64_t;
  _io_disk_read_type io_disk_read;
  using _io_disk_write_type =
    uint64_t;
  _io_disk_write_type io_disk_write;

  // setters for named parameter idiom
  Type & set__cpu_usage(
    const double & _arg)
  {
    this->cpu_usage = _arg;
    return *this;
  }
  Type & set__cpu_usage_total(
    const double & _arg)
  {
    this->cpu_usage_total = _arg;
    return *this;
  }
  Type & set__ram_usage(
    const uint64_t & _arg)
  {
    this->ram_usage = _arg;
    return *this;
  }
  Type & set__n_threads(
    const uint64_t & _arg)
  {
    this->n_threads = _arg;
    return *this;
  }
  Type & set__process_up_time(
    const double & _arg)
  {
    this->process_up_time = _arg;
    return *this;
  }
  Type & set__process_run_time(
    const double & _arg)
  {
    this->process_run_time = _arg;
    return *this;
  }
  Type & set__io_total_read(
    const uint64_t & _arg)
  {
    this->io_total_read = _arg;
    return *this;
  }
  Type & set__io_total_write(
    const uint64_t & _arg)
  {
    this->io_total_write = _arg;
    return *this;
  }
  Type & set__io_disk_read(
    const uint64_t & _arg)
  {
    this->io_disk_read = _arg;
    return *this;
  }
  Type & set__io_disk_write(
    const uint64_t & _arg)
  {
    this->io_disk_write = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    lll_rdm_msgs::msg::ProcessHealthMetricMsgData_<ContainerAllocator> *;
  using ConstRawPtr =
    const lll_rdm_msgs::msg::ProcessHealthMetricMsgData_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<lll_rdm_msgs::msg::ProcessHealthMetricMsgData_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<lll_rdm_msgs::msg::ProcessHealthMetricMsgData_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      lll_rdm_msgs::msg::ProcessHealthMetricMsgData_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<lll_rdm_msgs::msg::ProcessHealthMetricMsgData_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      lll_rdm_msgs::msg::ProcessHealthMetricMsgData_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<lll_rdm_msgs::msg::ProcessHealthMetricMsgData_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<lll_rdm_msgs::msg::ProcessHealthMetricMsgData_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<lll_rdm_msgs::msg::ProcessHealthMetricMsgData_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__lll_rdm_msgs__msg__ProcessHealthMetricMsgData
    std::shared_ptr<lll_rdm_msgs::msg::ProcessHealthMetricMsgData_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__lll_rdm_msgs__msg__ProcessHealthMetricMsgData
    std::shared_ptr<lll_rdm_msgs::msg::ProcessHealthMetricMsgData_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ProcessHealthMetricMsgData_ & other) const
  {
    if (this->cpu_usage != other.cpu_usage) {
      return false;
    }
    if (this->cpu_usage_total != other.cpu_usage_total) {
      return false;
    }
    if (this->ram_usage != other.ram_usage) {
      return false;
    }
    if (this->n_threads != other.n_threads) {
      return false;
    }
    if (this->process_up_time != other.process_up_time) {
      return false;
    }
    if (this->process_run_time != other.process_run_time) {
      return false;
    }
    if (this->io_total_read != other.io_total_read) {
      return false;
    }
    if (this->io_total_write != other.io_total_write) {
      return false;
    }
    if (this->io_disk_read != other.io_disk_read) {
      return false;
    }
    if (this->io_disk_write != other.io_disk_write) {
      return false;
    }
    return true;
  }
  bool operator!=(const ProcessHealthMetricMsgData_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ProcessHealthMetricMsgData_

// alias to use template instance with default allocator
using ProcessHealthMetricMsgData =
  lll_rdm_msgs::msg::ProcessHealthMetricMsgData_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace lll_rdm_msgs

#endif  // LLL_RDM_MSGS__MSG__DETAIL__PROCESS_HEALTH_METRIC_MSG_DATA__STRUCT_HPP_
