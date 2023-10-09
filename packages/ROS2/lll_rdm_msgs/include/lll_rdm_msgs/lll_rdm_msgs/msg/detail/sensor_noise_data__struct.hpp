// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from lll_rdm_msgs:msg/SensorNoiseData.idl
// generated code does not contain a copyright notice

#ifndef LLL_RDM_MSGS__MSG__DETAIL__SENSOR_NOISE_DATA__STRUCT_HPP_
#define LLL_RDM_MSGS__MSG__DETAIL__SENSOR_NOISE_DATA__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__lll_rdm_msgs__msg__SensorNoiseData __attribute__((deprecated))
#else
# define DEPRECATED__lll_rdm_msgs__msg__SensorNoiseData __declspec(deprecated)
#endif

namespace lll_rdm_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct SensorNoiseData_
{
  using Type = SensorNoiseData_<ContainerAllocator>;

  explicit SensorNoiseData_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->average_std_error = 0.0;
      this->max_std_error = 0.0;
      this->angle_max_error = 0.0;
      this->percent_of_sigma = 0.0;
      this->p_value = 0.0;
      this->reject_model = false;
    }
  }

  explicit SensorNoiseData_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->average_std_error = 0.0;
      this->max_std_error = 0.0;
      this->angle_max_error = 0.0;
      this->percent_of_sigma = 0.0;
      this->p_value = 0.0;
      this->reject_model = false;
    }
  }

  // field types and members
  using _average_std_error_type =
    double;
  _average_std_error_type average_std_error;
  using _max_std_error_type =
    double;
  _max_std_error_type max_std_error;
  using _angle_max_error_type =
    double;
  _angle_max_error_type angle_max_error;
  using _percent_of_sigma_type =
    double;
  _percent_of_sigma_type percent_of_sigma;
  using _p_value_type =
    double;
  _p_value_type p_value;
  using _reject_model_type =
    bool;
  _reject_model_type reject_model;

  // setters for named parameter idiom
  Type & set__average_std_error(
    const double & _arg)
  {
    this->average_std_error = _arg;
    return *this;
  }
  Type & set__max_std_error(
    const double & _arg)
  {
    this->max_std_error = _arg;
    return *this;
  }
  Type & set__angle_max_error(
    const double & _arg)
  {
    this->angle_max_error = _arg;
    return *this;
  }
  Type & set__percent_of_sigma(
    const double & _arg)
  {
    this->percent_of_sigma = _arg;
    return *this;
  }
  Type & set__p_value(
    const double & _arg)
  {
    this->p_value = _arg;
    return *this;
  }
  Type & set__reject_model(
    const bool & _arg)
  {
    this->reject_model = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    lll_rdm_msgs::msg::SensorNoiseData_<ContainerAllocator> *;
  using ConstRawPtr =
    const lll_rdm_msgs::msg::SensorNoiseData_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<lll_rdm_msgs::msg::SensorNoiseData_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<lll_rdm_msgs::msg::SensorNoiseData_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      lll_rdm_msgs::msg::SensorNoiseData_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<lll_rdm_msgs::msg::SensorNoiseData_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      lll_rdm_msgs::msg::SensorNoiseData_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<lll_rdm_msgs::msg::SensorNoiseData_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<lll_rdm_msgs::msg::SensorNoiseData_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<lll_rdm_msgs::msg::SensorNoiseData_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__lll_rdm_msgs__msg__SensorNoiseData
    std::shared_ptr<lll_rdm_msgs::msg::SensorNoiseData_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__lll_rdm_msgs__msg__SensorNoiseData
    std::shared_ptr<lll_rdm_msgs::msg::SensorNoiseData_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SensorNoiseData_ & other) const
  {
    if (this->average_std_error != other.average_std_error) {
      return false;
    }
    if (this->max_std_error != other.max_std_error) {
      return false;
    }
    if (this->angle_max_error != other.angle_max_error) {
      return false;
    }
    if (this->percent_of_sigma != other.percent_of_sigma) {
      return false;
    }
    if (this->p_value != other.p_value) {
      return false;
    }
    if (this->reject_model != other.reject_model) {
      return false;
    }
    return true;
  }
  bool operator!=(const SensorNoiseData_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SensorNoiseData_

// alias to use template instance with default allocator
using SensorNoiseData =
  lll_rdm_msgs::msg::SensorNoiseData_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace lll_rdm_msgs

#endif  // LLL_RDM_MSGS__MSG__DETAIL__SENSOR_NOISE_DATA__STRUCT_HPP_
