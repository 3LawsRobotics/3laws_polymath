// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from lll_supervisor_msgs:msg/SupervisorMetadata.idl
// generated code does not contain a copyright notice

#ifndef LLL_SUPERVISOR_MSGS__MSG__DETAIL__SUPERVISOR_METADATA__STRUCT_HPP_
#define LLL_SUPERVISOR_MSGS__MSG__DETAIL__SUPERVISOR_METADATA__STRUCT_HPP_

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
# define DEPRECATED__lll_supervisor_msgs__msg__SupervisorMetadata __attribute__((deprecated))
#else
# define DEPRECATED__lll_supervisor_msgs__msg__SupervisorMetadata __declspec(deprecated)
#endif

namespace lll_supervisor_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct SupervisorMetadata_
{
  using Type = SupervisorMetadata_<ContainerAllocator>;

  explicit SupervisorMetadata_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->t_state = 0ll;
      this->t_input = 0ll;
      this->h_distance_current = 0.0;
      this->h_current = 0.0;
      this->h_predicted = 0.0;
      this->input_modification = 0.0;
      this->regulation_map_size = 0.0;
    }
  }

  explicit SupervisorMetadata_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->t_state = 0ll;
      this->t_input = 0ll;
      this->h_distance_current = 0.0;
      this->h_current = 0.0;
      this->h_predicted = 0.0;
      this->input_modification = 0.0;
      this->regulation_map_size = 0.0;
    }
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _t_state_type =
    int64_t;
  _t_state_type t_state;
  using _t_input_type =
    int64_t;
  _t_input_type t_input;
  using _input_desired_type =
    std::vector<double, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<double>>;
  _input_desired_type input_desired;
  using _input_actual_type =
    std::vector<double, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<double>>;
  _input_actual_type input_actual;
  using _input_failsafe_type =
    std::vector<double, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<double>>;
  _input_failsafe_type input_failsafe;
  using _h_distance_current_type =
    double;
  _h_distance_current_type h_distance_current;
  using _h_current_type =
    double;
  _h_current_type h_current;
  using _h_predicted_type =
    double;
  _h_predicted_type h_predicted;
  using _input_modification_type =
    double;
  _input_modification_type input_modification;
  using _regulation_map_size_type =
    double;
  _regulation_map_size_type regulation_map_size;
  using _generation_extras_type =
    std::vector<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>>;
  _generation_extras_type generation_extras;
  using _filtering_extras_type =
    std::vector<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>>;
  _filtering_extras_type filtering_extras;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__t_state(
    const int64_t & _arg)
  {
    this->t_state = _arg;
    return *this;
  }
  Type & set__t_input(
    const int64_t & _arg)
  {
    this->t_input = _arg;
    return *this;
  }
  Type & set__input_desired(
    const std::vector<double, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<double>> & _arg)
  {
    this->input_desired = _arg;
    return *this;
  }
  Type & set__input_actual(
    const std::vector<double, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<double>> & _arg)
  {
    this->input_actual = _arg;
    return *this;
  }
  Type & set__input_failsafe(
    const std::vector<double, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<double>> & _arg)
  {
    this->input_failsafe = _arg;
    return *this;
  }
  Type & set__h_distance_current(
    const double & _arg)
  {
    this->h_distance_current = _arg;
    return *this;
  }
  Type & set__h_current(
    const double & _arg)
  {
    this->h_current = _arg;
    return *this;
  }
  Type & set__h_predicted(
    const double & _arg)
  {
    this->h_predicted = _arg;
    return *this;
  }
  Type & set__input_modification(
    const double & _arg)
  {
    this->input_modification = _arg;
    return *this;
  }
  Type & set__regulation_map_size(
    const double & _arg)
  {
    this->regulation_map_size = _arg;
    return *this;
  }
  Type & set__generation_extras(
    const std::vector<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>> & _arg)
  {
    this->generation_extras = _arg;
    return *this;
  }
  Type & set__filtering_extras(
    const std::vector<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>> & _arg)
  {
    this->filtering_extras = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    lll_supervisor_msgs::msg::SupervisorMetadata_<ContainerAllocator> *;
  using ConstRawPtr =
    const lll_supervisor_msgs::msg::SupervisorMetadata_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<lll_supervisor_msgs::msg::SupervisorMetadata_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<lll_supervisor_msgs::msg::SupervisorMetadata_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      lll_supervisor_msgs::msg::SupervisorMetadata_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<lll_supervisor_msgs::msg::SupervisorMetadata_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      lll_supervisor_msgs::msg::SupervisorMetadata_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<lll_supervisor_msgs::msg::SupervisorMetadata_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<lll_supervisor_msgs::msg::SupervisorMetadata_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<lll_supervisor_msgs::msg::SupervisorMetadata_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__lll_supervisor_msgs__msg__SupervisorMetadata
    std::shared_ptr<lll_supervisor_msgs::msg::SupervisorMetadata_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__lll_supervisor_msgs__msg__SupervisorMetadata
    std::shared_ptr<lll_supervisor_msgs::msg::SupervisorMetadata_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SupervisorMetadata_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->t_state != other.t_state) {
      return false;
    }
    if (this->t_input != other.t_input) {
      return false;
    }
    if (this->input_desired != other.input_desired) {
      return false;
    }
    if (this->input_actual != other.input_actual) {
      return false;
    }
    if (this->input_failsafe != other.input_failsafe) {
      return false;
    }
    if (this->h_distance_current != other.h_distance_current) {
      return false;
    }
    if (this->h_current != other.h_current) {
      return false;
    }
    if (this->h_predicted != other.h_predicted) {
      return false;
    }
    if (this->input_modification != other.input_modification) {
      return false;
    }
    if (this->regulation_map_size != other.regulation_map_size) {
      return false;
    }
    if (this->generation_extras != other.generation_extras) {
      return false;
    }
    if (this->filtering_extras != other.filtering_extras) {
      return false;
    }
    return true;
  }
  bool operator!=(const SupervisorMetadata_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SupervisorMetadata_

// alias to use template instance with default allocator
using SupervisorMetadata =
  lll_supervisor_msgs::msg::SupervisorMetadata_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace lll_supervisor_msgs

#endif  // LLL_SUPERVISOR_MSGS__MSG__DETAIL__SUPERVISOR_METADATA__STRUCT_HPP_
