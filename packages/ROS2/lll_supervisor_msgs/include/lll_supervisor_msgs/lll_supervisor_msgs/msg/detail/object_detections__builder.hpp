// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from lll_supervisor_msgs:msg/ObjectDetections.idl
// generated code does not contain a copyright notice

#ifndef LLL_SUPERVISOR_MSGS__MSG__DETAIL__OBJECT_DETECTIONS__BUILDER_HPP_
#define LLL_SUPERVISOR_MSGS__MSG__DETAIL__OBJECT_DETECTIONS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "lll_supervisor_msgs/msg/detail/object_detections__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace lll_supervisor_msgs
{

namespace msg
{

namespace builder
{

class Init_ObjectDetections_detections
{
public:
  explicit Init_ObjectDetections_detections(::lll_supervisor_msgs::msg::ObjectDetections & msg)
  : msg_(msg)
  {}
  ::lll_supervisor_msgs::msg::ObjectDetections detections(::lll_supervisor_msgs::msg::ObjectDetections::_detections_type arg)
  {
    msg_.detections = std::move(arg);
    return std::move(msg_);
  }

private:
  ::lll_supervisor_msgs::msg::ObjectDetections msg_;
};

class Init_ObjectDetections_header
{
public:
  Init_ObjectDetections_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ObjectDetections_detections header(::lll_supervisor_msgs::msg::ObjectDetections::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_ObjectDetections_detections(msg_);
  }

private:
  ::lll_supervisor_msgs::msg::ObjectDetections msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::lll_supervisor_msgs::msg::ObjectDetections>()
{
  return lll_supervisor_msgs::msg::builder::Init_ObjectDetections_header();
}

}  // namespace lll_supervisor_msgs

#endif  // LLL_SUPERVISOR_MSGS__MSG__DETAIL__OBJECT_DETECTIONS__BUILDER_HPP_
