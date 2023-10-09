// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from lll_supervisor_msgs:msg/InputFilteringResult.idl
// generated code does not contain a copyright notice

#ifndef LLL_SUPERVISOR_MSGS__MSG__DETAIL__INPUT_FILTERING_RESULT__BUILDER_HPP_
#define LLL_SUPERVISOR_MSGS__MSG__DETAIL__INPUT_FILTERING_RESULT__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "lll_supervisor_msgs/msg/detail/input_filtering_result__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace lll_supervisor_msgs
{

namespace msg
{

namespace builder
{

class Init_InputFilteringResult_input_failsafe
{
public:
  explicit Init_InputFilteringResult_input_failsafe(::lll_supervisor_msgs::msg::InputFilteringResult & msg)
  : msg_(msg)
  {}
  ::lll_supervisor_msgs::msg::InputFilteringResult input_failsafe(::lll_supervisor_msgs::msg::InputFilteringResult::_input_failsafe_type arg)
  {
    msg_.input_failsafe = std::move(arg);
    return std::move(msg_);
  }

private:
  ::lll_supervisor_msgs::msg::InputFilteringResult msg_;
};

class Init_InputFilteringResult_input_filtered
{
public:
  explicit Init_InputFilteringResult_input_filtered(::lll_supervisor_msgs::msg::InputFilteringResult & msg)
  : msg_(msg)
  {}
  Init_InputFilteringResult_input_failsafe input_filtered(::lll_supervisor_msgs::msg::InputFilteringResult::_input_filtered_type arg)
  {
    msg_.input_filtered = std::move(arg);
    return Init_InputFilteringResult_input_failsafe(msg_);
  }

private:
  ::lll_supervisor_msgs::msg::InputFilteringResult msg_;
};

class Init_InputFilteringResult_input_desired
{
public:
  explicit Init_InputFilteringResult_input_desired(::lll_supervisor_msgs::msg::InputFilteringResult & msg)
  : msg_(msg)
  {}
  Init_InputFilteringResult_input_filtered input_desired(::lll_supervisor_msgs::msg::InputFilteringResult::_input_desired_type arg)
  {
    msg_.input_desired = std::move(arg);
    return Init_InputFilteringResult_input_filtered(msg_);
  }

private:
  ::lll_supervisor_msgs::msg::InputFilteringResult msg_;
};

class Init_InputFilteringResult_return_code
{
public:
  explicit Init_InputFilteringResult_return_code(::lll_supervisor_msgs::msg::InputFilteringResult & msg)
  : msg_(msg)
  {}
  Init_InputFilteringResult_input_desired return_code(::lll_supervisor_msgs::msg::InputFilteringResult::_return_code_type arg)
  {
    msg_.return_code = std::move(arg);
    return Init_InputFilteringResult_input_desired(msg_);
  }

private:
  ::lll_supervisor_msgs::msg::InputFilteringResult msg_;
};

class Init_InputFilteringResult_nu
{
public:
  explicit Init_InputFilteringResult_nu(::lll_supervisor_msgs::msg::InputFilteringResult & msg)
  : msg_(msg)
  {}
  Init_InputFilteringResult_return_code nu(::lll_supervisor_msgs::msg::InputFilteringResult::_nu_type arg)
  {
    msg_.nu = std::move(arg);
    return Init_InputFilteringResult_return_code(msg_);
  }

private:
  ::lll_supervisor_msgs::msg::InputFilteringResult msg_;
};

class Init_InputFilteringResult_t_regulation_data
{
public:
  explicit Init_InputFilteringResult_t_regulation_data(::lll_supervisor_msgs::msg::InputFilteringResult & msg)
  : msg_(msg)
  {}
  Init_InputFilteringResult_nu t_regulation_data(::lll_supervisor_msgs::msg::InputFilteringResult::_t_regulation_data_type arg)
  {
    msg_.t_regulation_data = std::move(arg);
    return Init_InputFilteringResult_nu(msg_);
  }

private:
  ::lll_supervisor_msgs::msg::InputFilteringResult msg_;
};

class Init_InputFilteringResult_t_input_desired
{
public:
  explicit Init_InputFilteringResult_t_input_desired(::lll_supervisor_msgs::msg::InputFilteringResult & msg)
  : msg_(msg)
  {}
  Init_InputFilteringResult_t_regulation_data t_input_desired(::lll_supervisor_msgs::msg::InputFilteringResult::_t_input_desired_type arg)
  {
    msg_.t_input_desired = std::move(arg);
    return Init_InputFilteringResult_t_regulation_data(msg_);
  }

private:
  ::lll_supervisor_msgs::msg::InputFilteringResult msg_;
};

class Init_InputFilteringResult_header
{
public:
  Init_InputFilteringResult_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_InputFilteringResult_t_input_desired header(::lll_supervisor_msgs::msg::InputFilteringResult::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_InputFilteringResult_t_input_desired(msg_);
  }

private:
  ::lll_supervisor_msgs::msg::InputFilteringResult msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::lll_supervisor_msgs::msg::InputFilteringResult>()
{
  return lll_supervisor_msgs::msg::builder::Init_InputFilteringResult_header();
}

}  // namespace lll_supervisor_msgs

#endif  // LLL_SUPERVISOR_MSGS__MSG__DETAIL__INPUT_FILTERING_RESULT__BUILDER_HPP_
