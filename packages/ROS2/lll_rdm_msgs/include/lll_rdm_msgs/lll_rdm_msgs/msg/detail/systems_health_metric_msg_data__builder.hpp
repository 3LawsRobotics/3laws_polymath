// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from lll_rdm_msgs:msg/SystemsHealthMetricMsgData.idl
// generated code does not contain a copyright notice

#ifndef LLL_RDM_MSGS__MSG__DETAIL__SYSTEMS_HEALTH_METRIC_MSG_DATA__BUILDER_HPP_
#define LLL_RDM_MSGS__MSG__DETAIL__SYSTEMS_HEALTH_METRIC_MSG_DATA__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "lll_rdm_msgs/msg/detail/systems_health_metric_msg_data__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace lll_rdm_msgs
{

namespace msg
{

namespace builder
{

class Init_SystemsHealthMetricMsgData_values
{
public:
  explicit Init_SystemsHealthMetricMsgData_values(::lll_rdm_msgs::msg::SystemsHealthMetricMsgData & msg)
  : msg_(msg)
  {}
  ::lll_rdm_msgs::msg::SystemsHealthMetricMsgData values(::lll_rdm_msgs::msg::SystemsHealthMetricMsgData::_values_type arg)
  {
    msg_.values = std::move(arg);
    return std::move(msg_);
  }

private:
  ::lll_rdm_msgs::msg::SystemsHealthMetricMsgData msg_;
};

class Init_SystemsHealthMetricMsgData_time_since_last_msg
{
public:
  explicit Init_SystemsHealthMetricMsgData_time_since_last_msg(::lll_rdm_msgs::msg::SystemsHealthMetricMsgData & msg)
  : msg_(msg)
  {}
  Init_SystemsHealthMetricMsgData_values time_since_last_msg(::lll_rdm_msgs::msg::SystemsHealthMetricMsgData::_time_since_last_msg_type arg)
  {
    msg_.time_since_last_msg = std::move(arg);
    return Init_SystemsHealthMetricMsgData_values(msg_);
  }

private:
  ::lll_rdm_msgs::msg::SystemsHealthMetricMsgData msg_;
};

class Init_SystemsHealthMetricMsgData_timeout
{
public:
  Init_SystemsHealthMetricMsgData_timeout()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SystemsHealthMetricMsgData_time_since_last_msg timeout(::lll_rdm_msgs::msg::SystemsHealthMetricMsgData::_timeout_type arg)
  {
    msg_.timeout = std::move(arg);
    return Init_SystemsHealthMetricMsgData_time_since_last_msg(msg_);
  }

private:
  ::lll_rdm_msgs::msg::SystemsHealthMetricMsgData msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::lll_rdm_msgs::msg::SystemsHealthMetricMsgData>()
{
  return lll_rdm_msgs::msg::builder::Init_SystemsHealthMetricMsgData_timeout();
}

}  // namespace lll_rdm_msgs

#endif  // LLL_RDM_MSGS__MSG__DETAIL__SYSTEMS_HEALTH_METRIC_MSG_DATA__BUILDER_HPP_
