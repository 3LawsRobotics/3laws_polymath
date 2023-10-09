// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from lll_supervisor_msgs:msg/RegulationData.idl
// generated code does not contain a copyright notice

#ifndef LLL_SUPERVISOR_MSGS__MSG__DETAIL__REGULATION_DATA__STRUCT_HPP_
#define LLL_SUPERVISOR_MSGS__MSG__DETAIL__REGULATION_DATA__STRUCT_HPP_

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
// Member 'input_cstr'
#include "lll_supervisor_msgs/msg/detail/input_constraints__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__lll_supervisor_msgs__msg__RegulationData __attribute__((deprecated))
#else
# define DEPRECATED__lll_supervisor_msgs__msg__RegulationData __declspec(deprecated)
#endif

namespace lll_supervisor_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct RegulationData_
{
  using Type = RegulationData_<ContainerAllocator>;

  explicit RegulationData_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init),
    input_cstr(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->t = 0ll;
      this->nu = 0ull;
      this->n_safety_cstr = 0ull;
      this->n_failsafes = 0ull;
    }
  }

  explicit RegulationData_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init),
    input_cstr(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->t = 0ll;
      this->nu = 0ull;
      this->n_safety_cstr = 0ull;
      this->n_failsafes = 0ull;
    }
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _t_type =
    int64_t;
  _t_type t;
  using _nu_type =
    uint64_t;
  _nu_type nu;
  using _n_safety_cstr_type =
    uint64_t;
  _n_safety_cstr_type n_safety_cstr;
  using _n_failsafes_type =
    uint64_t;
  _n_failsafes_type n_failsafes;
  using _input_cstr_type =
    lll_supervisor_msgs::msg::InputConstraints_<ContainerAllocator>;
  _input_cstr_type input_cstr;
  using _lfh_type =
    std::vector<double, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<double>>;
  _lfh_type lfh;
  using _lgh_type =
    std::vector<double, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<double>>;
  _lgh_type lgh;
  using _dh_dt_type =
    std::vector<double, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<double>>;
  _dh_dt_type dh_dt;
  using _safety_val_type =
    std::vector<double, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<double>>;
  _safety_val_type safety_val;
  using _failsafe_input_type =
    std::vector<double, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<double>>;
  _failsafe_input_type failsafe_input;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__t(
    const int64_t & _arg)
  {
    this->t = _arg;
    return *this;
  }
  Type & set__nu(
    const uint64_t & _arg)
  {
    this->nu = _arg;
    return *this;
  }
  Type & set__n_safety_cstr(
    const uint64_t & _arg)
  {
    this->n_safety_cstr = _arg;
    return *this;
  }
  Type & set__n_failsafes(
    const uint64_t & _arg)
  {
    this->n_failsafes = _arg;
    return *this;
  }
  Type & set__input_cstr(
    const lll_supervisor_msgs::msg::InputConstraints_<ContainerAllocator> & _arg)
  {
    this->input_cstr = _arg;
    return *this;
  }
  Type & set__lfh(
    const std::vector<double, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<double>> & _arg)
  {
    this->lfh = _arg;
    return *this;
  }
  Type & set__lgh(
    const std::vector<double, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<double>> & _arg)
  {
    this->lgh = _arg;
    return *this;
  }
  Type & set__dh_dt(
    const std::vector<double, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<double>> & _arg)
  {
    this->dh_dt = _arg;
    return *this;
  }
  Type & set__safety_val(
    const std::vector<double, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<double>> & _arg)
  {
    this->safety_val = _arg;
    return *this;
  }
  Type & set__failsafe_input(
    const std::vector<double, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<double>> & _arg)
  {
    this->failsafe_input = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    lll_supervisor_msgs::msg::RegulationData_<ContainerAllocator> *;
  using ConstRawPtr =
    const lll_supervisor_msgs::msg::RegulationData_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<lll_supervisor_msgs::msg::RegulationData_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<lll_supervisor_msgs::msg::RegulationData_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      lll_supervisor_msgs::msg::RegulationData_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<lll_supervisor_msgs::msg::RegulationData_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      lll_supervisor_msgs::msg::RegulationData_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<lll_supervisor_msgs::msg::RegulationData_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<lll_supervisor_msgs::msg::RegulationData_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<lll_supervisor_msgs::msg::RegulationData_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__lll_supervisor_msgs__msg__RegulationData
    std::shared_ptr<lll_supervisor_msgs::msg::RegulationData_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__lll_supervisor_msgs__msg__RegulationData
    std::shared_ptr<lll_supervisor_msgs::msg::RegulationData_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const RegulationData_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->t != other.t) {
      return false;
    }
    if (this->nu != other.nu) {
      return false;
    }
    if (this->n_safety_cstr != other.n_safety_cstr) {
      return false;
    }
    if (this->n_failsafes != other.n_failsafes) {
      return false;
    }
    if (this->input_cstr != other.input_cstr) {
      return false;
    }
    if (this->lfh != other.lfh) {
      return false;
    }
    if (this->lgh != other.lgh) {
      return false;
    }
    if (this->dh_dt != other.dh_dt) {
      return false;
    }
    if (this->safety_val != other.safety_val) {
      return false;
    }
    if (this->failsafe_input != other.failsafe_input) {
      return false;
    }
    return true;
  }
  bool operator!=(const RegulationData_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct RegulationData_

// alias to use template instance with default allocator
using RegulationData =
  lll_supervisor_msgs::msg::RegulationData_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace lll_supervisor_msgs

#endif  // LLL_SUPERVISOR_MSGS__MSG__DETAIL__REGULATION_DATA__STRUCT_HPP_
