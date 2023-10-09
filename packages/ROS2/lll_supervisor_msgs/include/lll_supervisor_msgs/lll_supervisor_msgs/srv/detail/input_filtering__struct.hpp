// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from lll_supervisor_msgs:srv/InputFiltering.idl
// generated code does not contain a copyright notice

#ifndef LLL_SUPERVISOR_MSGS__SRV__DETAIL__INPUT_FILTERING__STRUCT_HPP_
#define LLL_SUPERVISOR_MSGS__SRV__DETAIL__INPUT_FILTERING__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'input_desired'
#include "lll_msgs/msg/detail/float64_vector_stamped__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__lll_supervisor_msgs__srv__InputFiltering_Request __attribute__((deprecated))
#else
# define DEPRECATED__lll_supervisor_msgs__srv__InputFiltering_Request __declspec(deprecated)
#endif

namespace lll_supervisor_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct InputFiltering_Request_
{
  using Type = InputFiltering_Request_<ContainerAllocator>;

  explicit InputFiltering_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : input_desired(_init)
  {
    (void)_init;
  }

  explicit InputFiltering_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : input_desired(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _input_desired_type =
    lll_msgs::msg::Float64VectorStamped_<ContainerAllocator>;
  _input_desired_type input_desired;

  // setters for named parameter idiom
  Type & set__input_desired(
    const lll_msgs::msg::Float64VectorStamped_<ContainerAllocator> & _arg)
  {
    this->input_desired = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    lll_supervisor_msgs::srv::InputFiltering_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const lll_supervisor_msgs::srv::InputFiltering_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<lll_supervisor_msgs::srv::InputFiltering_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<lll_supervisor_msgs::srv::InputFiltering_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      lll_supervisor_msgs::srv::InputFiltering_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<lll_supervisor_msgs::srv::InputFiltering_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      lll_supervisor_msgs::srv::InputFiltering_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<lll_supervisor_msgs::srv::InputFiltering_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<lll_supervisor_msgs::srv::InputFiltering_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<lll_supervisor_msgs::srv::InputFiltering_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__lll_supervisor_msgs__srv__InputFiltering_Request
    std::shared_ptr<lll_supervisor_msgs::srv::InputFiltering_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__lll_supervisor_msgs__srv__InputFiltering_Request
    std::shared_ptr<lll_supervisor_msgs::srv::InputFiltering_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const InputFiltering_Request_ & other) const
  {
    if (this->input_desired != other.input_desired) {
      return false;
    }
    return true;
  }
  bool operator!=(const InputFiltering_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct InputFiltering_Request_

// alias to use template instance with default allocator
using InputFiltering_Request =
  lll_supervisor_msgs::srv::InputFiltering_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace lll_supervisor_msgs


// Include directives for member types
// Member 'res'
#include "lll_supervisor_msgs/msg/detail/input_filtering_result__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__lll_supervisor_msgs__srv__InputFiltering_Response __attribute__((deprecated))
#else
# define DEPRECATED__lll_supervisor_msgs__srv__InputFiltering_Response __declspec(deprecated)
#endif

namespace lll_supervisor_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct InputFiltering_Response_
{
  using Type = InputFiltering_Response_<ContainerAllocator>;

  explicit InputFiltering_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : res(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->ready = false;
    }
  }

  explicit InputFiltering_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : res(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->ready = false;
    }
  }

  // field types and members
  using _ready_type =
    bool;
  _ready_type ready;
  using _res_type =
    lll_supervisor_msgs::msg::InputFilteringResult_<ContainerAllocator>;
  _res_type res;

  // setters for named parameter idiom
  Type & set__ready(
    const bool & _arg)
  {
    this->ready = _arg;
    return *this;
  }
  Type & set__res(
    const lll_supervisor_msgs::msg::InputFilteringResult_<ContainerAllocator> & _arg)
  {
    this->res = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    lll_supervisor_msgs::srv::InputFiltering_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const lll_supervisor_msgs::srv::InputFiltering_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<lll_supervisor_msgs::srv::InputFiltering_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<lll_supervisor_msgs::srv::InputFiltering_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      lll_supervisor_msgs::srv::InputFiltering_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<lll_supervisor_msgs::srv::InputFiltering_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      lll_supervisor_msgs::srv::InputFiltering_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<lll_supervisor_msgs::srv::InputFiltering_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<lll_supervisor_msgs::srv::InputFiltering_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<lll_supervisor_msgs::srv::InputFiltering_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__lll_supervisor_msgs__srv__InputFiltering_Response
    std::shared_ptr<lll_supervisor_msgs::srv::InputFiltering_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__lll_supervisor_msgs__srv__InputFiltering_Response
    std::shared_ptr<lll_supervisor_msgs::srv::InputFiltering_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const InputFiltering_Response_ & other) const
  {
    if (this->ready != other.ready) {
      return false;
    }
    if (this->res != other.res) {
      return false;
    }
    return true;
  }
  bool operator!=(const InputFiltering_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct InputFiltering_Response_

// alias to use template instance with default allocator
using InputFiltering_Response =
  lll_supervisor_msgs::srv::InputFiltering_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace lll_supervisor_msgs

namespace lll_supervisor_msgs
{

namespace srv
{

struct InputFiltering
{
  using Request = lll_supervisor_msgs::srv::InputFiltering_Request;
  using Response = lll_supervisor_msgs::srv::InputFiltering_Response;
};

}  // namespace srv

}  // namespace lll_supervisor_msgs

#endif  // LLL_SUPERVISOR_MSGS__SRV__DETAIL__INPUT_FILTERING__STRUCT_HPP_
