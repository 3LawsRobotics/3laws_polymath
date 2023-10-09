// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from lll_msgs:msg/Trajectory.idl
// generated code does not contain a copyright notice

#ifndef LLL_MSGS__MSG__DETAIL__TRAJECTORY__STRUCT_HPP_
#define LLL_MSGS__MSG__DETAIL__TRAJECTORY__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__lll_msgs__msg__Trajectory __attribute__((deprecated))
#else
# define DEPRECATED__lll_msgs__msg__Trajectory __declspec(deprecated)
#endif

namespace lll_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct Trajectory_
{
  using Type = Trajectory_<ContainerAllocator>;

  explicit Trajectory_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->nx = 0ull;
      this->nu = 0ull;
      this->length = 0ull;
    }
  }

  explicit Trajectory_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->nx = 0ull;
      this->nu = 0ull;
      this->length = 0ull;
    }
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _nx_type =
    uint64_t;
  _nx_type nx;
  using _nu_type =
    uint64_t;
  _nu_type nu;
  using _length_type =
    uint64_t;
  _length_type length;
  using _times_type =
    std::vector<int64_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<int64_t>>;
  _times_type times;
  using _states_type =
    std::vector<double, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<double>>;
  _states_type states;
  using _inputs_type =
    std::vector<double, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<double>>;
  _inputs_type inputs;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__nx(
    const uint64_t & _arg)
  {
    this->nx = _arg;
    return *this;
  }
  Type & set__nu(
    const uint64_t & _arg)
  {
    this->nu = _arg;
    return *this;
  }
  Type & set__length(
    const uint64_t & _arg)
  {
    this->length = _arg;
    return *this;
  }
  Type & set__times(
    const std::vector<int64_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<int64_t>> & _arg)
  {
    this->times = _arg;
    return *this;
  }
  Type & set__states(
    const std::vector<double, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<double>> & _arg)
  {
    this->states = _arg;
    return *this;
  }
  Type & set__inputs(
    const std::vector<double, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<double>> & _arg)
  {
    this->inputs = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    lll_msgs::msg::Trajectory_<ContainerAllocator> *;
  using ConstRawPtr =
    const lll_msgs::msg::Trajectory_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<lll_msgs::msg::Trajectory_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<lll_msgs::msg::Trajectory_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      lll_msgs::msg::Trajectory_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<lll_msgs::msg::Trajectory_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      lll_msgs::msg::Trajectory_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<lll_msgs::msg::Trajectory_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<lll_msgs::msg::Trajectory_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<lll_msgs::msg::Trajectory_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__lll_msgs__msg__Trajectory
    std::shared_ptr<lll_msgs::msg::Trajectory_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__lll_msgs__msg__Trajectory
    std::shared_ptr<lll_msgs::msg::Trajectory_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Trajectory_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->nx != other.nx) {
      return false;
    }
    if (this->nu != other.nu) {
      return false;
    }
    if (this->length != other.length) {
      return false;
    }
    if (this->times != other.times) {
      return false;
    }
    if (this->states != other.states) {
      return false;
    }
    if (this->inputs != other.inputs) {
      return false;
    }
    return true;
  }
  bool operator!=(const Trajectory_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Trajectory_

// alias to use template instance with default allocator
using Trajectory =
  lll_msgs::msg::Trajectory_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace lll_msgs

#endif  // LLL_MSGS__MSG__DETAIL__TRAJECTORY__STRUCT_HPP_
