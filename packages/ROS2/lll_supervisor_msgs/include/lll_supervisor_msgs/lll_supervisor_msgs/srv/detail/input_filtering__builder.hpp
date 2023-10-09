// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from lll_supervisor_msgs:srv/InputFiltering.idl
// generated code does not contain a copyright notice

#ifndef LLL_SUPERVISOR_MSGS__SRV__DETAIL__INPUT_FILTERING__BUILDER_HPP_
#define LLL_SUPERVISOR_MSGS__SRV__DETAIL__INPUT_FILTERING__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "lll_supervisor_msgs/srv/detail/input_filtering__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace lll_supervisor_msgs
{

namespace srv
{

namespace builder
{

class Init_InputFiltering_Request_input_desired
{
public:
  Init_InputFiltering_Request_input_desired()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::lll_supervisor_msgs::srv::InputFiltering_Request input_desired(::lll_supervisor_msgs::srv::InputFiltering_Request::_input_desired_type arg)
  {
    msg_.input_desired = std::move(arg);
    return std::move(msg_);
  }

private:
  ::lll_supervisor_msgs::srv::InputFiltering_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::lll_supervisor_msgs::srv::InputFiltering_Request>()
{
  return lll_supervisor_msgs::srv::builder::Init_InputFiltering_Request_input_desired();
}

}  // namespace lll_supervisor_msgs


namespace lll_supervisor_msgs
{

namespace srv
{

namespace builder
{

class Init_InputFiltering_Response_res
{
public:
  explicit Init_InputFiltering_Response_res(::lll_supervisor_msgs::srv::InputFiltering_Response & msg)
  : msg_(msg)
  {}
  ::lll_supervisor_msgs::srv::InputFiltering_Response res(::lll_supervisor_msgs::srv::InputFiltering_Response::_res_type arg)
  {
    msg_.res = std::move(arg);
    return std::move(msg_);
  }

private:
  ::lll_supervisor_msgs::srv::InputFiltering_Response msg_;
};

class Init_InputFiltering_Response_ready
{
public:
  Init_InputFiltering_Response_ready()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_InputFiltering_Response_res ready(::lll_supervisor_msgs::srv::InputFiltering_Response::_ready_type arg)
  {
    msg_.ready = std::move(arg);
    return Init_InputFiltering_Response_res(msg_);
  }

private:
  ::lll_supervisor_msgs::srv::InputFiltering_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::lll_supervisor_msgs::srv::InputFiltering_Response>()
{
  return lll_supervisor_msgs::srv::builder::Init_InputFiltering_Response_ready();
}

}  // namespace lll_supervisor_msgs

#endif  // LLL_SUPERVISOR_MSGS__SRV__DETAIL__INPUT_FILTERING__BUILDER_HPP_
