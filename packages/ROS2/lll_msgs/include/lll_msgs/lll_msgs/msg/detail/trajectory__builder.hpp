// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from lll_msgs:msg/Trajectory.idl
// generated code does not contain a copyright notice

#ifndef LLL_MSGS__MSG__DETAIL__TRAJECTORY__BUILDER_HPP_
#define LLL_MSGS__MSG__DETAIL__TRAJECTORY__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "lll_msgs/msg/detail/trajectory__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace lll_msgs
{

namespace msg
{

namespace builder
{

class Init_Trajectory_inputs
{
public:
  explicit Init_Trajectory_inputs(::lll_msgs::msg::Trajectory & msg)
  : msg_(msg)
  {}
  ::lll_msgs::msg::Trajectory inputs(::lll_msgs::msg::Trajectory::_inputs_type arg)
  {
    msg_.inputs = std::move(arg);
    return std::move(msg_);
  }

private:
  ::lll_msgs::msg::Trajectory msg_;
};

class Init_Trajectory_states
{
public:
  explicit Init_Trajectory_states(::lll_msgs::msg::Trajectory & msg)
  : msg_(msg)
  {}
  Init_Trajectory_inputs states(::lll_msgs::msg::Trajectory::_states_type arg)
  {
    msg_.states = std::move(arg);
    return Init_Trajectory_inputs(msg_);
  }

private:
  ::lll_msgs::msg::Trajectory msg_;
};

class Init_Trajectory_times
{
public:
  explicit Init_Trajectory_times(::lll_msgs::msg::Trajectory & msg)
  : msg_(msg)
  {}
  Init_Trajectory_states times(::lll_msgs::msg::Trajectory::_times_type arg)
  {
    msg_.times = std::move(arg);
    return Init_Trajectory_states(msg_);
  }

private:
  ::lll_msgs::msg::Trajectory msg_;
};

class Init_Trajectory_length
{
public:
  explicit Init_Trajectory_length(::lll_msgs::msg::Trajectory & msg)
  : msg_(msg)
  {}
  Init_Trajectory_times length(::lll_msgs::msg::Trajectory::_length_type arg)
  {
    msg_.length = std::move(arg);
    return Init_Trajectory_times(msg_);
  }

private:
  ::lll_msgs::msg::Trajectory msg_;
};

class Init_Trajectory_nu
{
public:
  explicit Init_Trajectory_nu(::lll_msgs::msg::Trajectory & msg)
  : msg_(msg)
  {}
  Init_Trajectory_length nu(::lll_msgs::msg::Trajectory::_nu_type arg)
  {
    msg_.nu = std::move(arg);
    return Init_Trajectory_length(msg_);
  }

private:
  ::lll_msgs::msg::Trajectory msg_;
};

class Init_Trajectory_nx
{
public:
  explicit Init_Trajectory_nx(::lll_msgs::msg::Trajectory & msg)
  : msg_(msg)
  {}
  Init_Trajectory_nu nx(::lll_msgs::msg::Trajectory::_nx_type arg)
  {
    msg_.nx = std::move(arg);
    return Init_Trajectory_nu(msg_);
  }

private:
  ::lll_msgs::msg::Trajectory msg_;
};

class Init_Trajectory_header
{
public:
  Init_Trajectory_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Trajectory_nx header(::lll_msgs::msg::Trajectory::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_Trajectory_nx(msg_);
  }

private:
  ::lll_msgs::msg::Trajectory msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::lll_msgs::msg::Trajectory>()
{
  return lll_msgs::msg::builder::Init_Trajectory_header();
}

}  // namespace lll_msgs

#endif  // LLL_MSGS__MSG__DETAIL__TRAJECTORY__BUILDER_HPP_
