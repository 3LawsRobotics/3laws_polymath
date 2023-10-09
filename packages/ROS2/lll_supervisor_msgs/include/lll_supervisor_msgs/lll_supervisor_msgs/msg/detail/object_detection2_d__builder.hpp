// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from lll_supervisor_msgs:msg/ObjectDetection2D.idl
// generated code does not contain a copyright notice

#ifndef LLL_SUPERVISOR_MSGS__MSG__DETAIL__OBJECT_DETECTION2_D__BUILDER_HPP_
#define LLL_SUPERVISOR_MSGS__MSG__DETAIL__OBJECT_DETECTION2_D__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "lll_supervisor_msgs/msg/detail/object_detection2_d__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace lll_supervisor_msgs
{

namespace msg
{

namespace builder
{

class Init_ObjectDetection2D_safety_index
{
public:
  explicit Init_ObjectDetection2D_safety_index(::lll_supervisor_msgs::msg::ObjectDetection2D & msg)
  : msg_(msg)
  {}
  ::lll_supervisor_msgs::msg::ObjectDetection2D safety_index(::lll_supervisor_msgs::msg::ObjectDetection2D::_safety_index_type arg)
  {
    msg_.safety_index = std::move(arg);
    return std::move(msg_);
  }

private:
  ::lll_supervisor_msgs::msg::ObjectDetection2D msg_;
};

class Init_ObjectDetection2D_y_radius
{
public:
  explicit Init_ObjectDetection2D_y_radius(::lll_supervisor_msgs::msg::ObjectDetection2D & msg)
  : msg_(msg)
  {}
  Init_ObjectDetection2D_safety_index y_radius(::lll_supervisor_msgs::msg::ObjectDetection2D::_y_radius_type arg)
  {
    msg_.y_radius = std::move(arg);
    return Init_ObjectDetection2D_safety_index(msg_);
  }

private:
  ::lll_supervisor_msgs::msg::ObjectDetection2D msg_;
};

class Init_ObjectDetection2D_x_radius
{
public:
  explicit Init_ObjectDetection2D_x_radius(::lll_supervisor_msgs::msg::ObjectDetection2D & msg)
  : msg_(msg)
  {}
  Init_ObjectDetection2D_y_radius x_radius(::lll_supervisor_msgs::msg::ObjectDetection2D::_x_radius_type arg)
  {
    msg_.x_radius = std::move(arg);
    return Init_ObjectDetection2D_y_radius(msg_);
  }

private:
  ::lll_supervisor_msgs::msg::ObjectDetection2D msg_;
};

class Init_ObjectDetection2D_y_center
{
public:
  explicit Init_ObjectDetection2D_y_center(::lll_supervisor_msgs::msg::ObjectDetection2D & msg)
  : msg_(msg)
  {}
  Init_ObjectDetection2D_x_radius y_center(::lll_supervisor_msgs::msg::ObjectDetection2D::_y_center_type arg)
  {
    msg_.y_center = std::move(arg);
    return Init_ObjectDetection2D_x_radius(msg_);
  }

private:
  ::lll_supervisor_msgs::msg::ObjectDetection2D msg_;
};

class Init_ObjectDetection2D_x_center
{
public:
  explicit Init_ObjectDetection2D_x_center(::lll_supervisor_msgs::msg::ObjectDetection2D & msg)
  : msg_(msg)
  {}
  Init_ObjectDetection2D_y_center x_center(::lll_supervisor_msgs::msg::ObjectDetection2D::_x_center_type arg)
  {
    msg_.x_center = std::move(arg);
    return Init_ObjectDetection2D_y_center(msg_);
  }

private:
  ::lll_supervisor_msgs::msg::ObjectDetection2D msg_;
};

class Init_ObjectDetection2D_class_name
{
public:
  explicit Init_ObjectDetection2D_class_name(::lll_supervisor_msgs::msg::ObjectDetection2D & msg)
  : msg_(msg)
  {}
  Init_ObjectDetection2D_x_center class_name(::lll_supervisor_msgs::msg::ObjectDetection2D::_class_name_type arg)
  {
    msg_.class_name = std::move(arg);
    return Init_ObjectDetection2D_x_center(msg_);
  }

private:
  ::lll_supervisor_msgs::msg::ObjectDetection2D msg_;
};

class Init_ObjectDetection2D_track_id
{
public:
  Init_ObjectDetection2D_track_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ObjectDetection2D_class_name track_id(::lll_supervisor_msgs::msg::ObjectDetection2D::_track_id_type arg)
  {
    msg_.track_id = std::move(arg);
    return Init_ObjectDetection2D_class_name(msg_);
  }

private:
  ::lll_supervisor_msgs::msg::ObjectDetection2D msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::lll_supervisor_msgs::msg::ObjectDetection2D>()
{
  return lll_supervisor_msgs::msg::builder::Init_ObjectDetection2D_track_id();
}

}  // namespace lll_supervisor_msgs

#endif  // LLL_SUPERVISOR_MSGS__MSG__DETAIL__OBJECT_DETECTION2_D__BUILDER_HPP_
