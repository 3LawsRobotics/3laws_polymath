// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from lll_supervisor_msgs:msg/SupervisorMetadata.idl
// generated code does not contain a copyright notice

#ifndef LLL_SUPERVISOR_MSGS__MSG__DETAIL__SUPERVISOR_METADATA__BUILDER_HPP_
#define LLL_SUPERVISOR_MSGS__MSG__DETAIL__SUPERVISOR_METADATA__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "lll_supervisor_msgs/msg/detail/supervisor_metadata__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace lll_supervisor_msgs
{

namespace msg
{

namespace builder
{

class Init_SupervisorMetadata_filtering_extras
{
public:
  explicit Init_SupervisorMetadata_filtering_extras(::lll_supervisor_msgs::msg::SupervisorMetadata & msg)
  : msg_(msg)
  {}
  ::lll_supervisor_msgs::msg::SupervisorMetadata filtering_extras(::lll_supervisor_msgs::msg::SupervisorMetadata::_filtering_extras_type arg)
  {
    msg_.filtering_extras = std::move(arg);
    return std::move(msg_);
  }

private:
  ::lll_supervisor_msgs::msg::SupervisorMetadata msg_;
};

class Init_SupervisorMetadata_generation_extras
{
public:
  explicit Init_SupervisorMetadata_generation_extras(::lll_supervisor_msgs::msg::SupervisorMetadata & msg)
  : msg_(msg)
  {}
  Init_SupervisorMetadata_filtering_extras generation_extras(::lll_supervisor_msgs::msg::SupervisorMetadata::_generation_extras_type arg)
  {
    msg_.generation_extras = std::move(arg);
    return Init_SupervisorMetadata_filtering_extras(msg_);
  }

private:
  ::lll_supervisor_msgs::msg::SupervisorMetadata msg_;
};

class Init_SupervisorMetadata_regulation_map_size
{
public:
  explicit Init_SupervisorMetadata_regulation_map_size(::lll_supervisor_msgs::msg::SupervisorMetadata & msg)
  : msg_(msg)
  {}
  Init_SupervisorMetadata_generation_extras regulation_map_size(::lll_supervisor_msgs::msg::SupervisorMetadata::_regulation_map_size_type arg)
  {
    msg_.regulation_map_size = std::move(arg);
    return Init_SupervisorMetadata_generation_extras(msg_);
  }

private:
  ::lll_supervisor_msgs::msg::SupervisorMetadata msg_;
};

class Init_SupervisorMetadata_input_modification
{
public:
  explicit Init_SupervisorMetadata_input_modification(::lll_supervisor_msgs::msg::SupervisorMetadata & msg)
  : msg_(msg)
  {}
  Init_SupervisorMetadata_regulation_map_size input_modification(::lll_supervisor_msgs::msg::SupervisorMetadata::_input_modification_type arg)
  {
    msg_.input_modification = std::move(arg);
    return Init_SupervisorMetadata_regulation_map_size(msg_);
  }

private:
  ::lll_supervisor_msgs::msg::SupervisorMetadata msg_;
};

class Init_SupervisorMetadata_h_predicted
{
public:
  explicit Init_SupervisorMetadata_h_predicted(::lll_supervisor_msgs::msg::SupervisorMetadata & msg)
  : msg_(msg)
  {}
  Init_SupervisorMetadata_input_modification h_predicted(::lll_supervisor_msgs::msg::SupervisorMetadata::_h_predicted_type arg)
  {
    msg_.h_predicted = std::move(arg);
    return Init_SupervisorMetadata_input_modification(msg_);
  }

private:
  ::lll_supervisor_msgs::msg::SupervisorMetadata msg_;
};

class Init_SupervisorMetadata_h_current
{
public:
  explicit Init_SupervisorMetadata_h_current(::lll_supervisor_msgs::msg::SupervisorMetadata & msg)
  : msg_(msg)
  {}
  Init_SupervisorMetadata_h_predicted h_current(::lll_supervisor_msgs::msg::SupervisorMetadata::_h_current_type arg)
  {
    msg_.h_current = std::move(arg);
    return Init_SupervisorMetadata_h_predicted(msg_);
  }

private:
  ::lll_supervisor_msgs::msg::SupervisorMetadata msg_;
};

class Init_SupervisorMetadata_h_distance_current
{
public:
  explicit Init_SupervisorMetadata_h_distance_current(::lll_supervisor_msgs::msg::SupervisorMetadata & msg)
  : msg_(msg)
  {}
  Init_SupervisorMetadata_h_current h_distance_current(::lll_supervisor_msgs::msg::SupervisorMetadata::_h_distance_current_type arg)
  {
    msg_.h_distance_current = std::move(arg);
    return Init_SupervisorMetadata_h_current(msg_);
  }

private:
  ::lll_supervisor_msgs::msg::SupervisorMetadata msg_;
};

class Init_SupervisorMetadata_input_failsafe
{
public:
  explicit Init_SupervisorMetadata_input_failsafe(::lll_supervisor_msgs::msg::SupervisorMetadata & msg)
  : msg_(msg)
  {}
  Init_SupervisorMetadata_h_distance_current input_failsafe(::lll_supervisor_msgs::msg::SupervisorMetadata::_input_failsafe_type arg)
  {
    msg_.input_failsafe = std::move(arg);
    return Init_SupervisorMetadata_h_distance_current(msg_);
  }

private:
  ::lll_supervisor_msgs::msg::SupervisorMetadata msg_;
};

class Init_SupervisorMetadata_input_actual
{
public:
  explicit Init_SupervisorMetadata_input_actual(::lll_supervisor_msgs::msg::SupervisorMetadata & msg)
  : msg_(msg)
  {}
  Init_SupervisorMetadata_input_failsafe input_actual(::lll_supervisor_msgs::msg::SupervisorMetadata::_input_actual_type arg)
  {
    msg_.input_actual = std::move(arg);
    return Init_SupervisorMetadata_input_failsafe(msg_);
  }

private:
  ::lll_supervisor_msgs::msg::SupervisorMetadata msg_;
};

class Init_SupervisorMetadata_input_desired
{
public:
  explicit Init_SupervisorMetadata_input_desired(::lll_supervisor_msgs::msg::SupervisorMetadata & msg)
  : msg_(msg)
  {}
  Init_SupervisorMetadata_input_actual input_desired(::lll_supervisor_msgs::msg::SupervisorMetadata::_input_desired_type arg)
  {
    msg_.input_desired = std::move(arg);
    return Init_SupervisorMetadata_input_actual(msg_);
  }

private:
  ::lll_supervisor_msgs::msg::SupervisorMetadata msg_;
};

class Init_SupervisorMetadata_t_input
{
public:
  explicit Init_SupervisorMetadata_t_input(::lll_supervisor_msgs::msg::SupervisorMetadata & msg)
  : msg_(msg)
  {}
  Init_SupervisorMetadata_input_desired t_input(::lll_supervisor_msgs::msg::SupervisorMetadata::_t_input_type arg)
  {
    msg_.t_input = std::move(arg);
    return Init_SupervisorMetadata_input_desired(msg_);
  }

private:
  ::lll_supervisor_msgs::msg::SupervisorMetadata msg_;
};

class Init_SupervisorMetadata_t_state
{
public:
  explicit Init_SupervisorMetadata_t_state(::lll_supervisor_msgs::msg::SupervisorMetadata & msg)
  : msg_(msg)
  {}
  Init_SupervisorMetadata_t_input t_state(::lll_supervisor_msgs::msg::SupervisorMetadata::_t_state_type arg)
  {
    msg_.t_state = std::move(arg);
    return Init_SupervisorMetadata_t_input(msg_);
  }

private:
  ::lll_supervisor_msgs::msg::SupervisorMetadata msg_;
};

class Init_SupervisorMetadata_header
{
public:
  Init_SupervisorMetadata_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SupervisorMetadata_t_state header(::lll_supervisor_msgs::msg::SupervisorMetadata::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_SupervisorMetadata_t_state(msg_);
  }

private:
  ::lll_supervisor_msgs::msg::SupervisorMetadata msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::lll_supervisor_msgs::msg::SupervisorMetadata>()
{
  return lll_supervisor_msgs::msg::builder::Init_SupervisorMetadata_header();
}

}  // namespace lll_supervisor_msgs

#endif  // LLL_SUPERVISOR_MSGS__MSG__DETAIL__SUPERVISOR_METADATA__BUILDER_HPP_
