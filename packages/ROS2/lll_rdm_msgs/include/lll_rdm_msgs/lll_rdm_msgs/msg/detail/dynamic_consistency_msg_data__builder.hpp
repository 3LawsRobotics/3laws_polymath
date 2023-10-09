// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from lll_rdm_msgs:msg/DynamicConsistencyMsgData.idl
// generated code does not contain a copyright notice

#ifndef LLL_RDM_MSGS__MSG__DETAIL__DYNAMIC_CONSISTENCY_MSG_DATA__BUILDER_HPP_
#define LLL_RDM_MSGS__MSG__DETAIL__DYNAMIC_CONSISTENCY_MSG_DATA__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "lll_rdm_msgs/msg/detail/dynamic_consistency_msg_data__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace lll_rdm_msgs
{

namespace msg
{

namespace builder
{

class Init_DynamicConsistencyMsgData_system_degradation_probability
{
public:
  explicit Init_DynamicConsistencyMsgData_system_degradation_probability(::lll_rdm_msgs::msg::DynamicConsistencyMsgData & msg)
  : msg_(msg)
  {}
  ::lll_rdm_msgs::msg::DynamicConsistencyMsgData system_degradation_probability(::lll_rdm_msgs::msg::DynamicConsistencyMsgData::_system_degradation_probability_type arg)
  {
    msg_.system_degradation_probability = std::move(arg);
    return std::move(msg_);
  }

private:
  ::lll_rdm_msgs::msg::DynamicConsistencyMsgData msg_;
};

class Init_DynamicConsistencyMsgData_xdot_difference_norm_3sigma
{
public:
  explicit Init_DynamicConsistencyMsgData_xdot_difference_norm_3sigma(::lll_rdm_msgs::msg::DynamicConsistencyMsgData & msg)
  : msg_(msg)
  {}
  Init_DynamicConsistencyMsgData_system_degradation_probability xdot_difference_norm_3sigma(::lll_rdm_msgs::msg::DynamicConsistencyMsgData::_xdot_difference_norm_3sigma_type arg)
  {
    msg_.xdot_difference_norm_3sigma = std::move(arg);
    return Init_DynamicConsistencyMsgData_system_degradation_probability(msg_);
  }

private:
  ::lll_rdm_msgs::msg::DynamicConsistencyMsgData msg_;
};

class Init_DynamicConsistencyMsgData_xdot_difference_norm_2sigma
{
public:
  explicit Init_DynamicConsistencyMsgData_xdot_difference_norm_2sigma(::lll_rdm_msgs::msg::DynamicConsistencyMsgData & msg)
  : msg_(msg)
  {}
  Init_DynamicConsistencyMsgData_xdot_difference_norm_3sigma xdot_difference_norm_2sigma(::lll_rdm_msgs::msg::DynamicConsistencyMsgData::_xdot_difference_norm_2sigma_type arg)
  {
    msg_.xdot_difference_norm_2sigma = std::move(arg);
    return Init_DynamicConsistencyMsgData_xdot_difference_norm_3sigma(msg_);
  }

private:
  ::lll_rdm_msgs::msg::DynamicConsistencyMsgData msg_;
};

class Init_DynamicConsistencyMsgData_xdot_difference_norm_1sigma
{
public:
  explicit Init_DynamicConsistencyMsgData_xdot_difference_norm_1sigma(::lll_rdm_msgs::msg::DynamicConsistencyMsgData & msg)
  : msg_(msg)
  {}
  Init_DynamicConsistencyMsgData_xdot_difference_norm_2sigma xdot_difference_norm_1sigma(::lll_rdm_msgs::msg::DynamicConsistencyMsgData::_xdot_difference_norm_1sigma_type arg)
  {
    msg_.xdot_difference_norm_1sigma = std::move(arg);
    return Init_DynamicConsistencyMsgData_xdot_difference_norm_2sigma(msg_);
  }

private:
  ::lll_rdm_msgs::msg::DynamicConsistencyMsgData msg_;
};

class Init_DynamicConsistencyMsgData_xdot_difference_pdf_value_normalized
{
public:
  explicit Init_DynamicConsistencyMsgData_xdot_difference_pdf_value_normalized(::lll_rdm_msgs::msg::DynamicConsistencyMsgData & msg)
  : msg_(msg)
  {}
  Init_DynamicConsistencyMsgData_xdot_difference_norm_1sigma xdot_difference_pdf_value_normalized(::lll_rdm_msgs::msg::DynamicConsistencyMsgData::_xdot_difference_pdf_value_normalized_type arg)
  {
    msg_.xdot_difference_pdf_value_normalized = std::move(arg);
    return Init_DynamicConsistencyMsgData_xdot_difference_norm_1sigma(msg_);
  }

private:
  ::lll_rdm_msgs::msg::DynamicConsistencyMsgData msg_;
};

class Init_DynamicConsistencyMsgData_xdot_difference_pdf_value
{
public:
  explicit Init_DynamicConsistencyMsgData_xdot_difference_pdf_value(::lll_rdm_msgs::msg::DynamicConsistencyMsgData & msg)
  : msg_(msg)
  {}
  Init_DynamicConsistencyMsgData_xdot_difference_pdf_value_normalized xdot_difference_pdf_value(::lll_rdm_msgs::msg::DynamicConsistencyMsgData::_xdot_difference_pdf_value_type arg)
  {
    msg_.xdot_difference_pdf_value = std::move(arg);
    return Init_DynamicConsistencyMsgData_xdot_difference_pdf_value_normalized(msg_);
  }

private:
  ::lll_rdm_msgs::msg::DynamicConsistencyMsgData msg_;
};

class Init_DynamicConsistencyMsgData_xdot_difference
{
public:
  explicit Init_DynamicConsistencyMsgData_xdot_difference(::lll_rdm_msgs::msg::DynamicConsistencyMsgData & msg)
  : msg_(msg)
  {}
  Init_DynamicConsistencyMsgData_xdot_difference_pdf_value xdot_difference(::lll_rdm_msgs::msg::DynamicConsistencyMsgData::_xdot_difference_type arg)
  {
    msg_.xdot_difference = std::move(arg);
    return Init_DynamicConsistencyMsgData_xdot_difference_pdf_value(msg_);
  }

private:
  ::lll_rdm_msgs::msg::DynamicConsistencyMsgData msg_;
};

class Init_DynamicConsistencyMsgData_state_domain_value
{
public:
  explicit Init_DynamicConsistencyMsgData_state_domain_value(::lll_rdm_msgs::msg::DynamicConsistencyMsgData & msg)
  : msg_(msg)
  {}
  Init_DynamicConsistencyMsgData_xdot_difference state_domain_value(::lll_rdm_msgs::msg::DynamicConsistencyMsgData::_state_domain_value_type arg)
  {
    msg_.state_domain_value = std::move(arg);
    return Init_DynamicConsistencyMsgData_xdot_difference(msg_);
  }

private:
  ::lll_rdm_msgs::msg::DynamicConsistencyMsgData msg_;
};

class Init_DynamicConsistencyMsgData_input_domain_value
{
public:
  explicit Init_DynamicConsistencyMsgData_input_domain_value(::lll_rdm_msgs::msg::DynamicConsistencyMsgData & msg)
  : msg_(msg)
  {}
  Init_DynamicConsistencyMsgData_state_domain_value input_domain_value(::lll_rdm_msgs::msg::DynamicConsistencyMsgData::_input_domain_value_type arg)
  {
    msg_.input_domain_value = std::move(arg);
    return Init_DynamicConsistencyMsgData_state_domain_value(msg_);
  }

private:
  ::lll_rdm_msgs::msg::DynamicConsistencyMsgData msg_;
};

class Init_DynamicConsistencyMsgData_time_since_last_input_msg
{
public:
  explicit Init_DynamicConsistencyMsgData_time_since_last_input_msg(::lll_rdm_msgs::msg::DynamicConsistencyMsgData & msg)
  : msg_(msg)
  {}
  Init_DynamicConsistencyMsgData_input_domain_value time_since_last_input_msg(::lll_rdm_msgs::msg::DynamicConsistencyMsgData::_time_since_last_input_msg_type arg)
  {
    msg_.time_since_last_input_msg = std::move(arg);
    return Init_DynamicConsistencyMsgData_input_domain_value(msg_);
  }

private:
  ::lll_rdm_msgs::msg::DynamicConsistencyMsgData msg_;
};

class Init_DynamicConsistencyMsgData_input_timeout
{
public:
  explicit Init_DynamicConsistencyMsgData_input_timeout(::lll_rdm_msgs::msg::DynamicConsistencyMsgData & msg)
  : msg_(msg)
  {}
  Init_DynamicConsistencyMsgData_time_since_last_input_msg input_timeout(::lll_rdm_msgs::msg::DynamicConsistencyMsgData::_input_timeout_type arg)
  {
    msg_.input_timeout = std::move(arg);
    return Init_DynamicConsistencyMsgData_time_since_last_input_msg(msg_);
  }

private:
  ::lll_rdm_msgs::msg::DynamicConsistencyMsgData msg_;
};

class Init_DynamicConsistencyMsgData_time_since_last_state_msg
{
public:
  explicit Init_DynamicConsistencyMsgData_time_since_last_state_msg(::lll_rdm_msgs::msg::DynamicConsistencyMsgData & msg)
  : msg_(msg)
  {}
  Init_DynamicConsistencyMsgData_input_timeout time_since_last_state_msg(::lll_rdm_msgs::msg::DynamicConsistencyMsgData::_time_since_last_state_msg_type arg)
  {
    msg_.time_since_last_state_msg = std::move(arg);
    return Init_DynamicConsistencyMsgData_input_timeout(msg_);
  }

private:
  ::lll_rdm_msgs::msg::DynamicConsistencyMsgData msg_;
};

class Init_DynamicConsistencyMsgData_state_timeout
{
public:
  Init_DynamicConsistencyMsgData_state_timeout()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_DynamicConsistencyMsgData_time_since_last_state_msg state_timeout(::lll_rdm_msgs::msg::DynamicConsistencyMsgData::_state_timeout_type arg)
  {
    msg_.state_timeout = std::move(arg);
    return Init_DynamicConsistencyMsgData_time_since_last_state_msg(msg_);
  }

private:
  ::lll_rdm_msgs::msg::DynamicConsistencyMsgData msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::lll_rdm_msgs::msg::DynamicConsistencyMsgData>()
{
  return lll_rdm_msgs::msg::builder::Init_DynamicConsistencyMsgData_state_timeout();
}

}  // namespace lll_rdm_msgs

#endif  // LLL_RDM_MSGS__MSG__DETAIL__DYNAMIC_CONSISTENCY_MSG_DATA__BUILDER_HPP_
