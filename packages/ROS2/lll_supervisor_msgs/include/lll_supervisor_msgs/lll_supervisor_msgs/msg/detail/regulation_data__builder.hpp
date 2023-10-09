// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from lll_supervisor_msgs:msg/RegulationData.idl
// generated code does not contain a copyright notice

#ifndef LLL_SUPERVISOR_MSGS__MSG__DETAIL__REGULATION_DATA__BUILDER_HPP_
#define LLL_SUPERVISOR_MSGS__MSG__DETAIL__REGULATION_DATA__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "lll_supervisor_msgs/msg/detail/regulation_data__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace lll_supervisor_msgs
{

namespace msg
{

namespace builder
{

class Init_RegulationData_failsafe_input
{
public:
  explicit Init_RegulationData_failsafe_input(::lll_supervisor_msgs::msg::RegulationData & msg)
  : msg_(msg)
  {}
  ::lll_supervisor_msgs::msg::RegulationData failsafe_input(::lll_supervisor_msgs::msg::RegulationData::_failsafe_input_type arg)
  {
    msg_.failsafe_input = std::move(arg);
    return std::move(msg_);
  }

private:
  ::lll_supervisor_msgs::msg::RegulationData msg_;
};

class Init_RegulationData_safety_val
{
public:
  explicit Init_RegulationData_safety_val(::lll_supervisor_msgs::msg::RegulationData & msg)
  : msg_(msg)
  {}
  Init_RegulationData_failsafe_input safety_val(::lll_supervisor_msgs::msg::RegulationData::_safety_val_type arg)
  {
    msg_.safety_val = std::move(arg);
    return Init_RegulationData_failsafe_input(msg_);
  }

private:
  ::lll_supervisor_msgs::msg::RegulationData msg_;
};

class Init_RegulationData_dh_dt
{
public:
  explicit Init_RegulationData_dh_dt(::lll_supervisor_msgs::msg::RegulationData & msg)
  : msg_(msg)
  {}
  Init_RegulationData_safety_val dh_dt(::lll_supervisor_msgs::msg::RegulationData::_dh_dt_type arg)
  {
    msg_.dh_dt = std::move(arg);
    return Init_RegulationData_safety_val(msg_);
  }

private:
  ::lll_supervisor_msgs::msg::RegulationData msg_;
};

class Init_RegulationData_lgh
{
public:
  explicit Init_RegulationData_lgh(::lll_supervisor_msgs::msg::RegulationData & msg)
  : msg_(msg)
  {}
  Init_RegulationData_dh_dt lgh(::lll_supervisor_msgs::msg::RegulationData::_lgh_type arg)
  {
    msg_.lgh = std::move(arg);
    return Init_RegulationData_dh_dt(msg_);
  }

private:
  ::lll_supervisor_msgs::msg::RegulationData msg_;
};

class Init_RegulationData_lfh
{
public:
  explicit Init_RegulationData_lfh(::lll_supervisor_msgs::msg::RegulationData & msg)
  : msg_(msg)
  {}
  Init_RegulationData_lgh lfh(::lll_supervisor_msgs::msg::RegulationData::_lfh_type arg)
  {
    msg_.lfh = std::move(arg);
    return Init_RegulationData_lgh(msg_);
  }

private:
  ::lll_supervisor_msgs::msg::RegulationData msg_;
};

class Init_RegulationData_input_cstr
{
public:
  explicit Init_RegulationData_input_cstr(::lll_supervisor_msgs::msg::RegulationData & msg)
  : msg_(msg)
  {}
  Init_RegulationData_lfh input_cstr(::lll_supervisor_msgs::msg::RegulationData::_input_cstr_type arg)
  {
    msg_.input_cstr = std::move(arg);
    return Init_RegulationData_lfh(msg_);
  }

private:
  ::lll_supervisor_msgs::msg::RegulationData msg_;
};

class Init_RegulationData_n_failsafes
{
public:
  explicit Init_RegulationData_n_failsafes(::lll_supervisor_msgs::msg::RegulationData & msg)
  : msg_(msg)
  {}
  Init_RegulationData_input_cstr n_failsafes(::lll_supervisor_msgs::msg::RegulationData::_n_failsafes_type arg)
  {
    msg_.n_failsafes = std::move(arg);
    return Init_RegulationData_input_cstr(msg_);
  }

private:
  ::lll_supervisor_msgs::msg::RegulationData msg_;
};

class Init_RegulationData_n_safety_cstr
{
public:
  explicit Init_RegulationData_n_safety_cstr(::lll_supervisor_msgs::msg::RegulationData & msg)
  : msg_(msg)
  {}
  Init_RegulationData_n_failsafes n_safety_cstr(::lll_supervisor_msgs::msg::RegulationData::_n_safety_cstr_type arg)
  {
    msg_.n_safety_cstr = std::move(arg);
    return Init_RegulationData_n_failsafes(msg_);
  }

private:
  ::lll_supervisor_msgs::msg::RegulationData msg_;
};

class Init_RegulationData_nu
{
public:
  explicit Init_RegulationData_nu(::lll_supervisor_msgs::msg::RegulationData & msg)
  : msg_(msg)
  {}
  Init_RegulationData_n_safety_cstr nu(::lll_supervisor_msgs::msg::RegulationData::_nu_type arg)
  {
    msg_.nu = std::move(arg);
    return Init_RegulationData_n_safety_cstr(msg_);
  }

private:
  ::lll_supervisor_msgs::msg::RegulationData msg_;
};

class Init_RegulationData_t
{
public:
  explicit Init_RegulationData_t(::lll_supervisor_msgs::msg::RegulationData & msg)
  : msg_(msg)
  {}
  Init_RegulationData_nu t(::lll_supervisor_msgs::msg::RegulationData::_t_type arg)
  {
    msg_.t = std::move(arg);
    return Init_RegulationData_nu(msg_);
  }

private:
  ::lll_supervisor_msgs::msg::RegulationData msg_;
};

class Init_RegulationData_header
{
public:
  Init_RegulationData_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_RegulationData_t header(::lll_supervisor_msgs::msg::RegulationData::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_RegulationData_t(msg_);
  }

private:
  ::lll_supervisor_msgs::msg::RegulationData msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::lll_supervisor_msgs::msg::RegulationData>()
{
  return lll_supervisor_msgs::msg::builder::Init_RegulationData_header();
}

}  // namespace lll_supervisor_msgs

#endif  // LLL_SUPERVISOR_MSGS__MSG__DETAIL__REGULATION_DATA__BUILDER_HPP_
