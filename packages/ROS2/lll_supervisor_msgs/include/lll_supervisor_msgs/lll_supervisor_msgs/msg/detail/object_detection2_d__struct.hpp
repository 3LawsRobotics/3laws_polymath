// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from lll_supervisor_msgs:msg/ObjectDetection2D.idl
// generated code does not contain a copyright notice

#ifndef LLL_SUPERVISOR_MSGS__MSG__DETAIL__OBJECT_DETECTION2_D__STRUCT_HPP_
#define LLL_SUPERVISOR_MSGS__MSG__DETAIL__OBJECT_DETECTION2_D__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__lll_supervisor_msgs__msg__ObjectDetection2D __attribute__((deprecated))
#else
# define DEPRECATED__lll_supervisor_msgs__msg__ObjectDetection2D __declspec(deprecated)
#endif

namespace lll_supervisor_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct ObjectDetection2D_
{
  using Type = ObjectDetection2D_<ContainerAllocator>;

  explicit ObjectDetection2D_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::DEFAULTS_ONLY == _init)
    {
      this->safety_index = -1.0;
    } else if (rosidl_runtime_cpp::MessageInitialization::ZERO == _init) {
      this->track_id = 0ull;
      this->class_name = "";
      this->x_center = 0.0;
      this->y_center = 0.0;
      this->x_radius = 0.0;
      this->y_radius = 0.0;
      this->safety_index = 0.0;
    }
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->track_id = 0ull;
      this->class_name = "";
      this->x_center = 0.0;
      this->y_center = 0.0;
      this->x_radius = 0.0;
      this->y_radius = 0.0;
    }
  }

  explicit ObjectDetection2D_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : class_name(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::DEFAULTS_ONLY == _init)
    {
      this->safety_index = -1.0;
    } else if (rosidl_runtime_cpp::MessageInitialization::ZERO == _init) {
      this->track_id = 0ull;
      this->class_name = "";
      this->x_center = 0.0;
      this->y_center = 0.0;
      this->x_radius = 0.0;
      this->y_radius = 0.0;
      this->safety_index = 0.0;
    }
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->track_id = 0ull;
      this->class_name = "";
      this->x_center = 0.0;
      this->y_center = 0.0;
      this->x_radius = 0.0;
      this->y_radius = 0.0;
    }
  }

  // field types and members
  using _track_id_type =
    uint64_t;
  _track_id_type track_id;
  using _class_name_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _class_name_type class_name;
  using _x_center_type =
    double;
  _x_center_type x_center;
  using _y_center_type =
    double;
  _y_center_type y_center;
  using _x_radius_type =
    double;
  _x_radius_type x_radius;
  using _y_radius_type =
    double;
  _y_radius_type y_radius;
  using _safety_index_type =
    double;
  _safety_index_type safety_index;

  // setters for named parameter idiom
  Type & set__track_id(
    const uint64_t & _arg)
  {
    this->track_id = _arg;
    return *this;
  }
  Type & set__class_name(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->class_name = _arg;
    return *this;
  }
  Type & set__x_center(
    const double & _arg)
  {
    this->x_center = _arg;
    return *this;
  }
  Type & set__y_center(
    const double & _arg)
  {
    this->y_center = _arg;
    return *this;
  }
  Type & set__x_radius(
    const double & _arg)
  {
    this->x_radius = _arg;
    return *this;
  }
  Type & set__y_radius(
    const double & _arg)
  {
    this->y_radius = _arg;
    return *this;
  }
  Type & set__safety_index(
    const double & _arg)
  {
    this->safety_index = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    lll_supervisor_msgs::msg::ObjectDetection2D_<ContainerAllocator> *;
  using ConstRawPtr =
    const lll_supervisor_msgs::msg::ObjectDetection2D_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<lll_supervisor_msgs::msg::ObjectDetection2D_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<lll_supervisor_msgs::msg::ObjectDetection2D_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      lll_supervisor_msgs::msg::ObjectDetection2D_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<lll_supervisor_msgs::msg::ObjectDetection2D_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      lll_supervisor_msgs::msg::ObjectDetection2D_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<lll_supervisor_msgs::msg::ObjectDetection2D_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<lll_supervisor_msgs::msg::ObjectDetection2D_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<lll_supervisor_msgs::msg::ObjectDetection2D_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__lll_supervisor_msgs__msg__ObjectDetection2D
    std::shared_ptr<lll_supervisor_msgs::msg::ObjectDetection2D_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__lll_supervisor_msgs__msg__ObjectDetection2D
    std::shared_ptr<lll_supervisor_msgs::msg::ObjectDetection2D_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ObjectDetection2D_ & other) const
  {
    if (this->track_id != other.track_id) {
      return false;
    }
    if (this->class_name != other.class_name) {
      return false;
    }
    if (this->x_center != other.x_center) {
      return false;
    }
    if (this->y_center != other.y_center) {
      return false;
    }
    if (this->x_radius != other.x_radius) {
      return false;
    }
    if (this->y_radius != other.y_radius) {
      return false;
    }
    if (this->safety_index != other.safety_index) {
      return false;
    }
    return true;
  }
  bool operator!=(const ObjectDetection2D_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ObjectDetection2D_

// alias to use template instance with default allocator
using ObjectDetection2D =
  lll_supervisor_msgs::msg::ObjectDetection2D_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace lll_supervisor_msgs

#endif  // LLL_SUPERVISOR_MSGS__MSG__DETAIL__OBJECT_DETECTION2_D__STRUCT_HPP_
