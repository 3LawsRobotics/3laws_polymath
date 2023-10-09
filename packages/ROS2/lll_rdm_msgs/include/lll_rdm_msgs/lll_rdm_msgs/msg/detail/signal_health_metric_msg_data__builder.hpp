// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from lll_rdm_msgs:msg/SignalHealthMetricMsgData.idl
// generated code does not contain a copyright notice

#ifndef LLL_RDM_MSGS__MSG__DETAIL__SIGNAL_HEALTH_METRIC_MSG_DATA__BUILDER_HPP_
#define LLL_RDM_MSGS__MSG__DETAIL__SIGNAL_HEALTH_METRIC_MSG_DATA__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "lll_rdm_msgs/msg/detail/signal_health_metric_msg_data__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace lll_rdm_msgs
{

namespace msg
{

namespace builder
{

class Init_SignalHealthMetricMsgData_rates
{
public:
  explicit Init_SignalHealthMetricMsgData_rates(::lll_rdm_msgs::msg::SignalHealthMetricMsgData & msg)
  : msg_(msg)
  {}
  ::lll_rdm_msgs::msg::SignalHealthMetricMsgData rates(::lll_rdm_msgs::msg::SignalHealthMetricMsgData::_rates_type arg)
  {
    msg_.rates = std::move(arg);
    return std::move(msg_);
  }

private:
  ::lll_rdm_msgs::msg::SignalHealthMetricMsgData msg_;
};

class Init_SignalHealthMetricMsgData_values
{
public:
  explicit Init_SignalHealthMetricMsgData_values(::lll_rdm_msgs::msg::SignalHealthMetricMsgData & msg)
  : msg_(msg)
  {}
  Init_SignalHealthMetricMsgData_rates values(::lll_rdm_msgs::msg::SignalHealthMetricMsgData::_values_type arg)
  {
    msg_.values = std::move(arg);
    return Init_SignalHealthMetricMsgData_rates(msg_);
  }

private:
  ::lll_rdm_msgs::msg::SignalHealthMetricMsgData msg_;
};

class Init_SignalHealthMetricMsgData_norm
{
public:
  explicit Init_SignalHealthMetricMsgData_norm(::lll_rdm_msgs::msg::SignalHealthMetricMsgData & msg)
  : msg_(msg)
  {}
  Init_SignalHealthMetricMsgData_values norm(::lll_rdm_msgs::msg::SignalHealthMetricMsgData::_norm_type arg)
  {
    msg_.norm = std::move(arg);
    return Init_SignalHealthMetricMsgData_values(msg_);
  }

private:
  ::lll_rdm_msgs::msg::SignalHealthMetricMsgData msg_;
};

class Init_SignalHealthMetricMsgData_norm_type
{
public:
  explicit Init_SignalHealthMetricMsgData_norm_type(::lll_rdm_msgs::msg::SignalHealthMetricMsgData & msg)
  : msg_(msg)
  {}
  Init_SignalHealthMetricMsgData_norm norm_type(::lll_rdm_msgs::msg::SignalHealthMetricMsgData::_norm_type_type arg)
  {
    msg_.norm_type = std::move(arg);
    return Init_SignalHealthMetricMsgData_norm(msg_);
  }

private:
  ::lll_rdm_msgs::msg::SignalHealthMetricMsgData msg_;
};

class Init_SignalHealthMetricMsgData_has_subnormal
{
public:
  explicit Init_SignalHealthMetricMsgData_has_subnormal(::lll_rdm_msgs::msg::SignalHealthMetricMsgData & msg)
  : msg_(msg)
  {}
  Init_SignalHealthMetricMsgData_norm_type has_subnormal(::lll_rdm_msgs::msg::SignalHealthMetricMsgData::_has_subnormal_type arg)
  {
    msg_.has_subnormal = std::move(arg);
    return Init_SignalHealthMetricMsgData_norm_type(msg_);
  }

private:
  ::lll_rdm_msgs::msg::SignalHealthMetricMsgData msg_;
};

class Init_SignalHealthMetricMsgData_has_zero
{
public:
  explicit Init_SignalHealthMetricMsgData_has_zero(::lll_rdm_msgs::msg::SignalHealthMetricMsgData & msg)
  : msg_(msg)
  {}
  Init_SignalHealthMetricMsgData_has_subnormal has_zero(::lll_rdm_msgs::msg::SignalHealthMetricMsgData::_has_zero_type arg)
  {
    msg_.has_zero = std::move(arg);
    return Init_SignalHealthMetricMsgData_has_subnormal(msg_);
  }

private:
  ::lll_rdm_msgs::msg::SignalHealthMetricMsgData msg_;
};

class Init_SignalHealthMetricMsgData_has_infinity
{
public:
  explicit Init_SignalHealthMetricMsgData_has_infinity(::lll_rdm_msgs::msg::SignalHealthMetricMsgData & msg)
  : msg_(msg)
  {}
  Init_SignalHealthMetricMsgData_has_zero has_infinity(::lll_rdm_msgs::msg::SignalHealthMetricMsgData::_has_infinity_type arg)
  {
    msg_.has_infinity = std::move(arg);
    return Init_SignalHealthMetricMsgData_has_zero(msg_);
  }

private:
  ::lll_rdm_msgs::msg::SignalHealthMetricMsgData msg_;
};

class Init_SignalHealthMetricMsgData_has_nan
{
public:
  explicit Init_SignalHealthMetricMsgData_has_nan(::lll_rdm_msgs::msg::SignalHealthMetricMsgData & msg)
  : msg_(msg)
  {}
  Init_SignalHealthMetricMsgData_has_infinity has_nan(::lll_rdm_msgs::msg::SignalHealthMetricMsgData::_has_nan_type arg)
  {
    msg_.has_nan = std::move(arg);
    return Init_SignalHealthMetricMsgData_has_infinity(msg_);
  }

private:
  ::lll_rdm_msgs::msg::SignalHealthMetricMsgData msg_;
};

class Init_SignalHealthMetricMsgData_bad_timestamp
{
public:
  explicit Init_SignalHealthMetricMsgData_bad_timestamp(::lll_rdm_msgs::msg::SignalHealthMetricMsgData & msg)
  : msg_(msg)
  {}
  Init_SignalHealthMetricMsgData_has_nan bad_timestamp(::lll_rdm_msgs::msg::SignalHealthMetricMsgData::_bad_timestamp_type arg)
  {
    msg_.bad_timestamp = std::move(arg);
    return Init_SignalHealthMetricMsgData_has_nan(msg_);
  }

private:
  ::lll_rdm_msgs::msg::SignalHealthMetricMsgData msg_;
};

class Init_SignalHealthMetricMsgData_wrong_size
{
public:
  explicit Init_SignalHealthMetricMsgData_wrong_size(::lll_rdm_msgs::msg::SignalHealthMetricMsgData & msg)
  : msg_(msg)
  {}
  Init_SignalHealthMetricMsgData_bad_timestamp wrong_size(::lll_rdm_msgs::msg::SignalHealthMetricMsgData::_wrong_size_type arg)
  {
    msg_.wrong_size = std::move(arg);
    return Init_SignalHealthMetricMsgData_bad_timestamp(msg_);
  }

private:
  ::lll_rdm_msgs::msg::SignalHealthMetricMsgData msg_;
};

class Init_SignalHealthMetricMsgData_time_since_last_msg
{
public:
  explicit Init_SignalHealthMetricMsgData_time_since_last_msg(::lll_rdm_msgs::msg::SignalHealthMetricMsgData & msg)
  : msg_(msg)
  {}
  Init_SignalHealthMetricMsgData_wrong_size time_since_last_msg(::lll_rdm_msgs::msg::SignalHealthMetricMsgData::_time_since_last_msg_type arg)
  {
    msg_.time_since_last_msg = std::move(arg);
    return Init_SignalHealthMetricMsgData_wrong_size(msg_);
  }

private:
  ::lll_rdm_msgs::msg::SignalHealthMetricMsgData msg_;
};

class Init_SignalHealthMetricMsgData_timeout
{
public:
  Init_SignalHealthMetricMsgData_timeout()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SignalHealthMetricMsgData_time_since_last_msg timeout(::lll_rdm_msgs::msg::SignalHealthMetricMsgData::_timeout_type arg)
  {
    msg_.timeout = std::move(arg);
    return Init_SignalHealthMetricMsgData_time_since_last_msg(msg_);
  }

private:
  ::lll_rdm_msgs::msg::SignalHealthMetricMsgData msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::lll_rdm_msgs::msg::SignalHealthMetricMsgData>()
{
  return lll_rdm_msgs::msg::builder::Init_SignalHealthMetricMsgData_timeout();
}

}  // namespace lll_rdm_msgs

#endif  // LLL_RDM_MSGS__MSG__DETAIL__SIGNAL_HEALTH_METRIC_MSG_DATA__BUILDER_HPP_
