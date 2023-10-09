// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from lll_rdm_msgs:msg/ClockHealthMetricUtcMsgData.idl
// generated code does not contain a copyright notice

#ifndef LLL_RDM_MSGS__MSG__DETAIL__CLOCK_HEALTH_METRIC_UTC_MSG_DATA__BUILDER_HPP_
#define LLL_RDM_MSGS__MSG__DETAIL__CLOCK_HEALTH_METRIC_UTC_MSG_DATA__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "lll_rdm_msgs/msg/detail/clock_health_metric_utc_msg_data__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace lll_rdm_msgs
{

namespace msg
{

namespace builder
{

class Init_ClockHealthMetricUtcMsgData_offset_from_utc
{
public:
  explicit Init_ClockHealthMetricUtcMsgData_offset_from_utc(::lll_rdm_msgs::msg::ClockHealthMetricUtcMsgData & msg)
  : msg_(msg)
  {}
  ::lll_rdm_msgs::msg::ClockHealthMetricUtcMsgData offset_from_utc(::lll_rdm_msgs::msg::ClockHealthMetricUtcMsgData::_offset_from_utc_type arg)
  {
    msg_.offset_from_utc = std::move(arg);
    return std::move(msg_);
  }

private:
  ::lll_rdm_msgs::msg::ClockHealthMetricUtcMsgData msg_;
};

class Init_ClockHealthMetricUtcMsgData_rtc_time
{
public:
  explicit Init_ClockHealthMetricUtcMsgData_rtc_time(::lll_rdm_msgs::msg::ClockHealthMetricUtcMsgData & msg)
  : msg_(msg)
  {}
  Init_ClockHealthMetricUtcMsgData_offset_from_utc rtc_time(::lll_rdm_msgs::msg::ClockHealthMetricUtcMsgData::_rtc_time_type arg)
  {
    msg_.rtc_time = std::move(arg);
    return Init_ClockHealthMetricUtcMsgData_offset_from_utc(msg_);
  }

private:
  ::lll_rdm_msgs::msg::ClockHealthMetricUtcMsgData msg_;
};

class Init_ClockHealthMetricUtcMsgData_utc_time
{
public:
  explicit Init_ClockHealthMetricUtcMsgData_utc_time(::lll_rdm_msgs::msg::ClockHealthMetricUtcMsgData & msg)
  : msg_(msg)
  {}
  Init_ClockHealthMetricUtcMsgData_rtc_time utc_time(::lll_rdm_msgs::msg::ClockHealthMetricUtcMsgData::_utc_time_type arg)
  {
    msg_.utc_time = std::move(arg);
    return Init_ClockHealthMetricUtcMsgData_rtc_time(msg_);
  }

private:
  ::lll_rdm_msgs::msg::ClockHealthMetricUtcMsgData msg_;
};

class Init_ClockHealthMetricUtcMsgData_has_utc
{
public:
  Init_ClockHealthMetricUtcMsgData_has_utc()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ClockHealthMetricUtcMsgData_utc_time has_utc(::lll_rdm_msgs::msg::ClockHealthMetricUtcMsgData::_has_utc_type arg)
  {
    msg_.has_utc = std::move(arg);
    return Init_ClockHealthMetricUtcMsgData_utc_time(msg_);
  }

private:
  ::lll_rdm_msgs::msg::ClockHealthMetricUtcMsgData msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::lll_rdm_msgs::msg::ClockHealthMetricUtcMsgData>()
{
  return lll_rdm_msgs::msg::builder::Init_ClockHealthMetricUtcMsgData_has_utc();
}

}  // namespace lll_rdm_msgs

#endif  // LLL_RDM_MSGS__MSG__DETAIL__CLOCK_HEALTH_METRIC_UTC_MSG_DATA__BUILDER_HPP_
