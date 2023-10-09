// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from lll_rdm_msgs:msg/DynamicConsistencyMsgData.idl
// generated code does not contain a copyright notice

#ifndef LLL_RDM_MSGS__MSG__DETAIL__DYNAMIC_CONSISTENCY_MSG_DATA__STRUCT_HPP_
#define LLL_RDM_MSGS__MSG__DETAIL__DYNAMIC_CONSISTENCY_MSG_DATA__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__lll_rdm_msgs__msg__DynamicConsistencyMsgData __attribute__((deprecated))
#else
# define DEPRECATED__lll_rdm_msgs__msg__DynamicConsistencyMsgData __declspec(deprecated)
#endif

namespace lll_rdm_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct DynamicConsistencyMsgData_
{
  using Type = DynamicConsistencyMsgData_<ContainerAllocator>;

  explicit DynamicConsistencyMsgData_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->state_timeout = false;
      this->time_since_last_state_msg = 0ll;
      this->input_timeout = false;
      this->time_since_last_input_msg = 0ll;
      this->input_domain_value = 0.0;
      this->state_domain_value = 0.0;
      this->xdot_difference_pdf_value = 0.0;
      this->xdot_difference_pdf_value_normalized = 0.0;
      this->xdot_difference_norm_1sigma = 0.0;
      this->xdot_difference_norm_2sigma = 0.0;
      this->xdot_difference_norm_3sigma = 0.0;
      this->system_degradation_probability = 0.0;
    }
  }

  explicit DynamicConsistencyMsgData_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->state_timeout = false;
      this->time_since_last_state_msg = 0ll;
      this->input_timeout = false;
      this->time_since_last_input_msg = 0ll;
      this->input_domain_value = 0.0;
      this->state_domain_value = 0.0;
      this->xdot_difference_pdf_value = 0.0;
      this->xdot_difference_pdf_value_normalized = 0.0;
      this->xdot_difference_norm_1sigma = 0.0;
      this->xdot_difference_norm_2sigma = 0.0;
      this->xdot_difference_norm_3sigma = 0.0;
      this->system_degradation_probability = 0.0;
    }
  }

  // field types and members
  using _state_timeout_type =
    bool;
  _state_timeout_type state_timeout;
  using _time_since_last_state_msg_type =
    int64_t;
  _time_since_last_state_msg_type time_since_last_state_msg;
  using _input_timeout_type =
    bool;
  _input_timeout_type input_timeout;
  using _time_since_last_input_msg_type =
    int64_t;
  _time_since_last_input_msg_type time_since_last_input_msg;
  using _input_domain_value_type =
    double;
  _input_domain_value_type input_domain_value;
  using _state_domain_value_type =
    double;
  _state_domain_value_type state_domain_value;
  using _xdot_difference_type =
    std::vector<double, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<double>>;
  _xdot_difference_type xdot_difference;
  using _xdot_difference_pdf_value_type =
    double;
  _xdot_difference_pdf_value_type xdot_difference_pdf_value;
  using _xdot_difference_pdf_value_normalized_type =
    double;
  _xdot_difference_pdf_value_normalized_type xdot_difference_pdf_value_normalized;
  using _xdot_difference_norm_1sigma_type =
    double;
  _xdot_difference_norm_1sigma_type xdot_difference_norm_1sigma;
  using _xdot_difference_norm_2sigma_type =
    double;
  _xdot_difference_norm_2sigma_type xdot_difference_norm_2sigma;
  using _xdot_difference_norm_3sigma_type =
    double;
  _xdot_difference_norm_3sigma_type xdot_difference_norm_3sigma;
  using _system_degradation_probability_type =
    double;
  _system_degradation_probability_type system_degradation_probability;

  // setters for named parameter idiom
  Type & set__state_timeout(
    const bool & _arg)
  {
    this->state_timeout = _arg;
    return *this;
  }
  Type & set__time_since_last_state_msg(
    const int64_t & _arg)
  {
    this->time_since_last_state_msg = _arg;
    return *this;
  }
  Type & set__input_timeout(
    const bool & _arg)
  {
    this->input_timeout = _arg;
    return *this;
  }
  Type & set__time_since_last_input_msg(
    const int64_t & _arg)
  {
    this->time_since_last_input_msg = _arg;
    return *this;
  }
  Type & set__input_domain_value(
    const double & _arg)
  {
    this->input_domain_value = _arg;
    return *this;
  }
  Type & set__state_domain_value(
    const double & _arg)
  {
    this->state_domain_value = _arg;
    return *this;
  }
  Type & set__xdot_difference(
    const std::vector<double, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<double>> & _arg)
  {
    this->xdot_difference = _arg;
    return *this;
  }
  Type & set__xdot_difference_pdf_value(
    const double & _arg)
  {
    this->xdot_difference_pdf_value = _arg;
    return *this;
  }
  Type & set__xdot_difference_pdf_value_normalized(
    const double & _arg)
  {
    this->xdot_difference_pdf_value_normalized = _arg;
    return *this;
  }
  Type & set__xdot_difference_norm_1sigma(
    const double & _arg)
  {
    this->xdot_difference_norm_1sigma = _arg;
    return *this;
  }
  Type & set__xdot_difference_norm_2sigma(
    const double & _arg)
  {
    this->xdot_difference_norm_2sigma = _arg;
    return *this;
  }
  Type & set__xdot_difference_norm_3sigma(
    const double & _arg)
  {
    this->xdot_difference_norm_3sigma = _arg;
    return *this;
  }
  Type & set__system_degradation_probability(
    const double & _arg)
  {
    this->system_degradation_probability = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    lll_rdm_msgs::msg::DynamicConsistencyMsgData_<ContainerAllocator> *;
  using ConstRawPtr =
    const lll_rdm_msgs::msg::DynamicConsistencyMsgData_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<lll_rdm_msgs::msg::DynamicConsistencyMsgData_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<lll_rdm_msgs::msg::DynamicConsistencyMsgData_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      lll_rdm_msgs::msg::DynamicConsistencyMsgData_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<lll_rdm_msgs::msg::DynamicConsistencyMsgData_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      lll_rdm_msgs::msg::DynamicConsistencyMsgData_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<lll_rdm_msgs::msg::DynamicConsistencyMsgData_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<lll_rdm_msgs::msg::DynamicConsistencyMsgData_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<lll_rdm_msgs::msg::DynamicConsistencyMsgData_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__lll_rdm_msgs__msg__DynamicConsistencyMsgData
    std::shared_ptr<lll_rdm_msgs::msg::DynamicConsistencyMsgData_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__lll_rdm_msgs__msg__DynamicConsistencyMsgData
    std::shared_ptr<lll_rdm_msgs::msg::DynamicConsistencyMsgData_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const DynamicConsistencyMsgData_ & other) const
  {
    if (this->state_timeout != other.state_timeout) {
      return false;
    }
    if (this->time_since_last_state_msg != other.time_since_last_state_msg) {
      return false;
    }
    if (this->input_timeout != other.input_timeout) {
      return false;
    }
    if (this->time_since_last_input_msg != other.time_since_last_input_msg) {
      return false;
    }
    if (this->input_domain_value != other.input_domain_value) {
      return false;
    }
    if (this->state_domain_value != other.state_domain_value) {
      return false;
    }
    if (this->xdot_difference != other.xdot_difference) {
      return false;
    }
    if (this->xdot_difference_pdf_value != other.xdot_difference_pdf_value) {
      return false;
    }
    if (this->xdot_difference_pdf_value_normalized != other.xdot_difference_pdf_value_normalized) {
      return false;
    }
    if (this->xdot_difference_norm_1sigma != other.xdot_difference_norm_1sigma) {
      return false;
    }
    if (this->xdot_difference_norm_2sigma != other.xdot_difference_norm_2sigma) {
      return false;
    }
    if (this->xdot_difference_norm_3sigma != other.xdot_difference_norm_3sigma) {
      return false;
    }
    if (this->system_degradation_probability != other.system_degradation_probability) {
      return false;
    }
    return true;
  }
  bool operator!=(const DynamicConsistencyMsgData_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct DynamicConsistencyMsgData_

// alias to use template instance with default allocator
using DynamicConsistencyMsgData =
  lll_rdm_msgs::msg::DynamicConsistencyMsgData_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace lll_rdm_msgs

#endif  // LLL_RDM_MSGS__MSG__DETAIL__DYNAMIC_CONSISTENCY_MSG_DATA__STRUCT_HPP_
