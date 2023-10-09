// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from lll_supervisor_msgs:msg/InputConstraints.idl
// generated code does not contain a copyright notice

#ifndef LLL_SUPERVISOR_MSGS__MSG__DETAIL__INPUT_CONSTRAINTS__STRUCT_HPP_
#define LLL_SUPERVISOR_MSGS__MSG__DETAIL__INPUT_CONSTRAINTS__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__lll_supervisor_msgs__msg__InputConstraints __attribute__((deprecated))
#else
# define DEPRECATED__lll_supervisor_msgs__msg__InputConstraints __declspec(deprecated)
#endif

namespace lll_supervisor_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct InputConstraints_
{
  using Type = InputConstraints_<ContainerAllocator>;

  explicit InputConstraints_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->nu = 0ull;
      this->n_cstr = 0ull;
    }
  }

  explicit InputConstraints_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->nu = 0ull;
      this->n_cstr = 0ull;
    }
  }

  // field types and members
  using _nu_type =
    uint64_t;
  _nu_type nu;
  using _n_cstr_type =
    uint64_t;
  _n_cstr_type n_cstr;
  using _lb_type =
    std::vector<double, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<double>>;
  _lb_type lb;
  using _m_type =
    std::vector<double, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<double>>;
  _m_type m;
  using _ub_type =
    std::vector<double, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<double>>;
  _ub_type ub;

  // setters for named parameter idiom
  Type & set__nu(
    const uint64_t & _arg)
  {
    this->nu = _arg;
    return *this;
  }
  Type & set__n_cstr(
    const uint64_t & _arg)
  {
    this->n_cstr = _arg;
    return *this;
  }
  Type & set__lb(
    const std::vector<double, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<double>> & _arg)
  {
    this->lb = _arg;
    return *this;
  }
  Type & set__m(
    const std::vector<double, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<double>> & _arg)
  {
    this->m = _arg;
    return *this;
  }
  Type & set__ub(
    const std::vector<double, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<double>> & _arg)
  {
    this->ub = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    lll_supervisor_msgs::msg::InputConstraints_<ContainerAllocator> *;
  using ConstRawPtr =
    const lll_supervisor_msgs::msg::InputConstraints_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<lll_supervisor_msgs::msg::InputConstraints_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<lll_supervisor_msgs::msg::InputConstraints_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      lll_supervisor_msgs::msg::InputConstraints_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<lll_supervisor_msgs::msg::InputConstraints_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      lll_supervisor_msgs::msg::InputConstraints_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<lll_supervisor_msgs::msg::InputConstraints_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<lll_supervisor_msgs::msg::InputConstraints_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<lll_supervisor_msgs::msg::InputConstraints_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__lll_supervisor_msgs__msg__InputConstraints
    std::shared_ptr<lll_supervisor_msgs::msg::InputConstraints_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__lll_supervisor_msgs__msg__InputConstraints
    std::shared_ptr<lll_supervisor_msgs::msg::InputConstraints_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const InputConstraints_ & other) const
  {
    if (this->nu != other.nu) {
      return false;
    }
    if (this->n_cstr != other.n_cstr) {
      return false;
    }
    if (this->lb != other.lb) {
      return false;
    }
    if (this->m != other.m) {
      return false;
    }
    if (this->ub != other.ub) {
      return false;
    }
    return true;
  }
  bool operator!=(const InputConstraints_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct InputConstraints_

// alias to use template instance with default allocator
using InputConstraints =
  lll_supervisor_msgs::msg::InputConstraints_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace lll_supervisor_msgs

#endif  // LLL_SUPERVISOR_MSGS__MSG__DETAIL__INPUT_CONSTRAINTS__STRUCT_HPP_
