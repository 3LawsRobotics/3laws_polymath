// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from lll_supervisor_msgs:msg/InputConstraints.idl
// generated code does not contain a copyright notice

#ifndef LLL_SUPERVISOR_MSGS__MSG__DETAIL__INPUT_CONSTRAINTS__BUILDER_HPP_
#define LLL_SUPERVISOR_MSGS__MSG__DETAIL__INPUT_CONSTRAINTS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "lll_supervisor_msgs/msg/detail/input_constraints__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace lll_supervisor_msgs
{

namespace msg
{

namespace builder
{

class Init_InputConstraints_ub
{
public:
  explicit Init_InputConstraints_ub(::lll_supervisor_msgs::msg::InputConstraints & msg)
  : msg_(msg)
  {}
  ::lll_supervisor_msgs::msg::InputConstraints ub(::lll_supervisor_msgs::msg::InputConstraints::_ub_type arg)
  {
    msg_.ub = std::move(arg);
    return std::move(msg_);
  }

private:
  ::lll_supervisor_msgs::msg::InputConstraints msg_;
};

class Init_InputConstraints_m
{
public:
  explicit Init_InputConstraints_m(::lll_supervisor_msgs::msg::InputConstraints & msg)
  : msg_(msg)
  {}
  Init_InputConstraints_ub m(::lll_supervisor_msgs::msg::InputConstraints::_m_type arg)
  {
    msg_.m = std::move(arg);
    return Init_InputConstraints_ub(msg_);
  }

private:
  ::lll_supervisor_msgs::msg::InputConstraints msg_;
};

class Init_InputConstraints_lb
{
public:
  explicit Init_InputConstraints_lb(::lll_supervisor_msgs::msg::InputConstraints & msg)
  : msg_(msg)
  {}
  Init_InputConstraints_m lb(::lll_supervisor_msgs::msg::InputConstraints::_lb_type arg)
  {
    msg_.lb = std::move(arg);
    return Init_InputConstraints_m(msg_);
  }

private:
  ::lll_supervisor_msgs::msg::InputConstraints msg_;
};

class Init_InputConstraints_n_cstr
{
public:
  explicit Init_InputConstraints_n_cstr(::lll_supervisor_msgs::msg::InputConstraints & msg)
  : msg_(msg)
  {}
  Init_InputConstraints_lb n_cstr(::lll_supervisor_msgs::msg::InputConstraints::_n_cstr_type arg)
  {
    msg_.n_cstr = std::move(arg);
    return Init_InputConstraints_lb(msg_);
  }

private:
  ::lll_supervisor_msgs::msg::InputConstraints msg_;
};

class Init_InputConstraints_nu
{
public:
  Init_InputConstraints_nu()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_InputConstraints_n_cstr nu(::lll_supervisor_msgs::msg::InputConstraints::_nu_type arg)
  {
    msg_.nu = std::move(arg);
    return Init_InputConstraints_n_cstr(msg_);
  }

private:
  ::lll_supervisor_msgs::msg::InputConstraints msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::lll_supervisor_msgs::msg::InputConstraints>()
{
  return lll_supervisor_msgs::msg::builder::Init_InputConstraints_nu();
}

}  // namespace lll_supervisor_msgs

#endif  // LLL_SUPERVISOR_MSGS__MSG__DETAIL__INPUT_CONSTRAINTS__BUILDER_HPP_
