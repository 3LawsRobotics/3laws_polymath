// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from lll_rdm_msgs:msg/SystemResourcesInputMsgData.idl
// generated code does not contain a copyright notice

#ifndef LLL_RDM_MSGS__MSG__DETAIL__SYSTEM_RESOURCES_INPUT_MSG_DATA__STRUCT_HPP_
#define LLL_RDM_MSGS__MSG__DETAIL__SYSTEM_RESOURCES_INPUT_MSG_DATA__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__lll_rdm_msgs__msg__SystemResourcesInputMsgData __attribute__((deprecated))
#else
# define DEPRECATED__lll_rdm_msgs__msg__SystemResourcesInputMsgData __declspec(deprecated)
#endif

namespace lll_rdm_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct SystemResourcesInputMsgData_
{
  using Type = SystemResourcesInputMsgData_<ContainerAllocator>;

  explicit SystemResourcesInputMsgData_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->system_id = "";
      this->cpu_load = 0.0;
      this->ram_usage = 0.0;
      this->disk_usage = 0.0;
      this->network_read = 0.0;
      this->network_write = 0.0;
      this->cpu_nb = 0ul;
      this->procs_nb = 0ul;
    }
  }

  explicit SystemResourcesInputMsgData_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : system_id(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->system_id = "";
      this->cpu_load = 0.0;
      this->ram_usage = 0.0;
      this->disk_usage = 0.0;
      this->network_read = 0.0;
      this->network_write = 0.0;
      this->cpu_nb = 0ul;
      this->procs_nb = 0ul;
    }
  }

  // field types and members
  using _system_id_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _system_id_type system_id;
  using _cpu_load_type =
    double;
  _cpu_load_type cpu_load;
  using _ram_usage_type =
    double;
  _ram_usage_type ram_usage;
  using _disk_usage_type =
    double;
  _disk_usage_type disk_usage;
  using _network_read_type =
    double;
  _network_read_type network_read;
  using _network_write_type =
    double;
  _network_write_type network_write;
  using _cpu_nb_type =
    uint32_t;
  _cpu_nb_type cpu_nb;
  using _procs_nb_type =
    uint32_t;
  _procs_nb_type procs_nb;

  // setters for named parameter idiom
  Type & set__system_id(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->system_id = _arg;
    return *this;
  }
  Type & set__cpu_load(
    const double & _arg)
  {
    this->cpu_load = _arg;
    return *this;
  }
  Type & set__ram_usage(
    const double & _arg)
  {
    this->ram_usage = _arg;
    return *this;
  }
  Type & set__disk_usage(
    const double & _arg)
  {
    this->disk_usage = _arg;
    return *this;
  }
  Type & set__network_read(
    const double & _arg)
  {
    this->network_read = _arg;
    return *this;
  }
  Type & set__network_write(
    const double & _arg)
  {
    this->network_write = _arg;
    return *this;
  }
  Type & set__cpu_nb(
    const uint32_t & _arg)
  {
    this->cpu_nb = _arg;
    return *this;
  }
  Type & set__procs_nb(
    const uint32_t & _arg)
  {
    this->procs_nb = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    lll_rdm_msgs::msg::SystemResourcesInputMsgData_<ContainerAllocator> *;
  using ConstRawPtr =
    const lll_rdm_msgs::msg::SystemResourcesInputMsgData_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<lll_rdm_msgs::msg::SystemResourcesInputMsgData_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<lll_rdm_msgs::msg::SystemResourcesInputMsgData_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      lll_rdm_msgs::msg::SystemResourcesInputMsgData_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<lll_rdm_msgs::msg::SystemResourcesInputMsgData_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      lll_rdm_msgs::msg::SystemResourcesInputMsgData_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<lll_rdm_msgs::msg::SystemResourcesInputMsgData_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<lll_rdm_msgs::msg::SystemResourcesInputMsgData_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<lll_rdm_msgs::msg::SystemResourcesInputMsgData_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__lll_rdm_msgs__msg__SystemResourcesInputMsgData
    std::shared_ptr<lll_rdm_msgs::msg::SystemResourcesInputMsgData_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__lll_rdm_msgs__msg__SystemResourcesInputMsgData
    std::shared_ptr<lll_rdm_msgs::msg::SystemResourcesInputMsgData_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SystemResourcesInputMsgData_ & other) const
  {
    if (this->system_id != other.system_id) {
      return false;
    }
    if (this->cpu_load != other.cpu_load) {
      return false;
    }
    if (this->ram_usage != other.ram_usage) {
      return false;
    }
    if (this->disk_usage != other.disk_usage) {
      return false;
    }
    if (this->network_read != other.network_read) {
      return false;
    }
    if (this->network_write != other.network_write) {
      return false;
    }
    if (this->cpu_nb != other.cpu_nb) {
      return false;
    }
    if (this->procs_nb != other.procs_nb) {
      return false;
    }
    return true;
  }
  bool operator!=(const SystemResourcesInputMsgData_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SystemResourcesInputMsgData_

// alias to use template instance with default allocator
using SystemResourcesInputMsgData =
  lll_rdm_msgs::msg::SystemResourcesInputMsgData_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace lll_rdm_msgs

#endif  // LLL_RDM_MSGS__MSG__DETAIL__SYSTEM_RESOURCES_INPUT_MSG_DATA__STRUCT_HPP_
