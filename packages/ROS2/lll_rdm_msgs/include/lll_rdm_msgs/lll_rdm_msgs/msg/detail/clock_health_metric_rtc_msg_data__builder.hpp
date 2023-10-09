// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from lll_rdm_msgs:msg/ClockHealthMetricRtcMsgData.idl
// generated code does not contain a copyright notice

#ifndef LLL_RDM_MSGS__MSG__DETAIL__CLOCK_HEALTH_METRIC_RTC_MSG_DATA__BUILDER_HPP_
#define LLL_RDM_MSGS__MSG__DETAIL__CLOCK_HEALTH_METRIC_RTC_MSG_DATA__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "lll_rdm_msgs/msg/detail/clock_health_metric_rtc_msg_data__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace lll_rdm_msgs
{

namespace msg
{

namespace builder
{

class Init_ClockHealthMetricRtcMsgData_offset_from_rtc
{
public:
  explicit Init_ClockHealthMetricRtcMsgData_offset_from_rtc(::lll_rdm_msgs::msg::ClockHealthMetricRtcMsgData & msg)
  : msg_(msg)
  {}
  ::lll_rdm_msgs::msg::ClockHealthMetricRtcMsgData offset_from_rtc(::lll_rdm_msgs::msg::ClockHealthMetricRtcMsgData::_offset_from_rtc_type arg)
  {
    msg_.offset_from_rtc = std::move(arg);
    return std::move(msg_);
  }

private:
  ::lll_rdm_msgs::msg::ClockHealthMetricRtcMsgData msg_;
};

class Init_ClockHealthMetricRtcMsgData_time_since_last_msg
{
public:
  explicit Init_ClockHealthMetricRtcMsgData_time_since_last_msg(::lll_rdm_msgs::msg::ClockHealthMetricRtcMsgData & msg)
  : msg_(msg)
  {}
  Init_ClockHealthMetricRtcMsgData_offset_from_rtc time_since_last_msg(::lll_rdm_msgs::msg::ClockHealthMetricRtcMsgData::_time_since_last_msg_type arg)
  {
    msg_.time_since_last_msg = std::move(arg);
    return Init_ClockHealthMetricRtcMsgData_offset_from_rtc(msg_);
  }

private:
  ::lll_rdm_msgs::msg::ClockHealthMetricRtcMsgData msg_;
};

class Init_ClockHealthMetricRtcMsgData_timeout
{
public:
  Init_ClockHealthMetricRtcMsgData_timeout()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ClockHealthMetricRtcMsgData_time_since_last_msg timeout(::lll_rdm_msgs::msg::ClockHealthMetricRtcMsgData::_timeout_type arg)
  {
    msg_.timeout = std::move(arg);
    return Init_ClockHealthMetricRtcMsgData_time_since_last_msg(msg_);
  }

private:
  ::lll_rdm_msgs::msg::ClockHealthMetricRtcMsgData msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::lll_rdm_msgs::msg::ClockHealthMetricRtcMsgData>()
{
  return lll_rdm_msgs::msg::builder::Init_ClockHealthMetricRtcMsgData_timeout();
}

}  // namespace lll_rdm_msgs

#endif  // LLL_RDM_MSGS__MSG__DETAIL__CLOCK_HEALTH_METRIC_RTC_MSG_DATA__BUILDER_HPP_
