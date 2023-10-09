// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from lll_supervisor_msgs:msg/InputFilteringResult.idl
// generated code does not contain a copyright notice

#ifndef LLL_SUPERVISOR_MSGS__MSG__DETAIL__INPUT_FILTERING_RESULT__STRUCT_HPP_
#define LLL_SUPERVISOR_MSGS__MSG__DETAIL__INPUT_FILTERING_RESULT__STRUCT_HPP_

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
# define DEPRECATED__lll_supervisor_msgs__msg__InputFilteringResult __attribute__((deprecated))
#else
# define DEPRECATED__lll_supervisor_msgs__msg__InputFilteringResult __declspec(deprecated)
#endif

namespace lll_supervisor_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct InputFilteringResult_
{
  using Type = InputFilteringResult_<ContainerAllocator>;

  explicit InputFilteringResult_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->t_input_desired = 0ll;
      this->t_regulation_data = 0ll;
      this->nu = 0ull;
      this->return_code = 0l;
    }
  }

  explicit InputFilteringResult_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->t_input_desired = 0ll;
      this->t_regulation_data = 0ll;
      this->nu = 0ull;
      this->return_code = 0l;
    }
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _t_input_desired_type =
    int64_t;
  _t_input_desired_type t_input_desired;
  using _t_regulation_data_type =
    int64_t;
  _t_regulation_data_type t_regulation_data;
  using _nu_type =
    uint64_t;
  _nu_type nu;
  using _return_code_type =
    int32_t;
  _return_code_type return_code;
  using _input_desired_type =
    std::vector<double, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<double>>;
  _input_desired_type input_desired;
  using _input_filtered_type =
    std::vector<double, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<double>>;
  _input_filtered_type input_filtered;
  using _input_failsafe_type =
    std::vector<double, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<double>>;
  _input_failsafe_type input_failsafe;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__t_input_desired(
    const int64_t & _arg)
  {
    this->t_input_desired = _arg;
    return *this;
  }
  Type & set__t_regulation_data(
    const int64_t & _arg)
  {
    this->t_regulation_data = _arg;
    return *this;
  }
  Type & set__nu(
    const uint64_t & _arg)
  {
    this->nu = _arg;
    return *this;
  }
  Type & set__return_code(
    const int32_t & _arg)
  {
    this->return_code = _arg;
    return *this;
  }
  Type & set__input_desired(
    const std::vector<double, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<double>> & _arg)
  {
    this->input_desired = _arg;
    return *this;
  }
  Type & set__input_filtered(
    const std::vector<double, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<double>> & _arg)
  {
    this->input_filtered = _arg;
    return *this;
  }
  Type & set__input_failsafe(
    const std::vector<double, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<double>> & _arg)
  {
    this->input_failsafe = _arg;
    return *this;
  }

  // constant declarations
  static constexpr int32_t RC_OK =
    1;
  static constexpr int32_t RC_ERROR =
    -1;

  // pointer types
  using RawPtr =
    lll_supervisor_msgs::msg::InputFilteringResult_<ContainerAllocator> *;
  using ConstRawPtr =
    const lll_supervisor_msgs::msg::InputFilteringResult_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<lll_supervisor_msgs::msg::InputFilteringResult_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<lll_supervisor_msgs::msg::InputFilteringResult_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      lll_supervisor_msgs::msg::InputFilteringResult_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<lll_supervisor_msgs::msg::InputFilteringResult_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      lll_supervisor_msgs::msg::InputFilteringResult_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<lll_supervisor_msgs::msg::InputFilteringResult_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<lll_supervisor_msgs::msg::InputFilteringResult_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<lll_supervisor_msgs::msg::InputFilteringResult_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__lll_supervisor_msgs__msg__InputFilteringResult
    std::shared_ptr<lll_supervisor_msgs::msg::InputFilteringResult_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__lll_supervisor_msgs__msg__InputFilteringResult
    std::shared_ptr<lll_supervisor_msgs::msg::InputFilteringResult_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const InputFilteringResult_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->t_input_desired != other.t_input_desired) {
      return false;
    }
    if (this->t_regulation_data != other.t_regulation_data) {
      return false;
    }
    if (this->nu != other.nu) {
      return false;
    }
    if (this->return_code != other.return_code) {
      return false;
    }
    if (this->input_desired != other.input_desired) {
      return false;
    }
    if (this->input_filtered != other.input_filtered) {
      return false;
    }
    if (this->input_failsafe != other.input_failsafe) {
      return false;
    }
    return true;
  }
  bool operator!=(const InputFilteringResult_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct InputFilteringResult_

// alias to use template instance with default allocator
using InputFilteringResult =
  lll_supervisor_msgs::msg::InputFilteringResult_<std::allocator<void>>;

// constant definitions
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int32_t InputFilteringResult_<ContainerAllocator>::RC_OK;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int32_t InputFilteringResult_<ContainerAllocator>::RC_ERROR;
#endif  // __cplusplus < 201703L

}  // namespace msg

}  // namespace lll_supervisor_msgs

#endif  // LLL_SUPERVISOR_MSGS__MSG__DETAIL__INPUT_FILTERING_RESULT__STRUCT_HPP_
