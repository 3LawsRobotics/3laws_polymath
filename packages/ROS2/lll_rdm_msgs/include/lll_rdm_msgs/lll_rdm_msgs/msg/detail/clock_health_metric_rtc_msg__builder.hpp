// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from lll_rdm_msgs:msg/ClockHealthMetricRtcMsg.idl
// generated code does not contain a copyright notice

#ifndef LLL_RDM_MSGS__MSG__DETAIL__CLOCK_HEALTH_METRIC_RTC_MSG__BUILDER_HPP_
#define LLL_RDM_MSGS__MSG__DETAIL__CLOCK_HEALTH_METRIC_RTC_MSG__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "lll_rdm_msgs/msg/detail/clock_health_metric_rtc_msg__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace lll_rdm_msgs
{

namespace msg
{

namespace builder
{

class Init_ClockHealthMetricRtcMsg_tags
{
public:
  explicit Init_ClockHealthMetricRtcMsg_tags(::lll_rdm_msgs::msg::ClockHealthMetricRtcMsg & msg)
  : msg_(msg)
  {}
  ::lll_rdm_msgs::msg::ClockHealthMetricRtcMsg tags(::lll_rdm_msgs::msg::ClockHealthMetricRtcMsg::_tags_type arg)
  {
    msg_.tags = std::move(arg);
    return std::move(msg_);
  }

private:
  ::lll_rdm_msgs::msg::ClockHealthMetricRtcMsg msg_;
};

class Init_ClockHealthMetricRtcMsg_data
{
public:
  explicit Init_ClockHealthMetricRtcMsg_data(::lll_rdm_msgs::msg::ClockHealthMetricRtcMsg & msg)
  : msg_(msg)
  {}
  Init_ClockHealthMetricRtcMsg_tags data(::lll_rdm_msgs::msg::ClockHealthMetricRtcMsg::_data_type arg)
  {
    msg_.data = std::move(arg);
    return Init_ClockHealthMetricRtcMsg_tags(msg_);
  }

private:
  ::lll_rdm_msgs::msg::ClockHealthMetricRtcMsg msg_;
};

class Init_ClockHealthMetricRtcMsg_header
{
public:
  Init_ClockHealthMetricRtcMsg_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ClockHealthMetricRtcMsg_data header(::lll_rdm_msgs::msg::ClockHealthMetricRtcMsg::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_ClockHealthMetricRtcMsg_data(msg_);
  }

private:
  ::lll_rdm_msgs::msg::ClockHealthMetricRtcMsg msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::lll_rdm_msgs::msg::ClockHealthMetricRtcMsg>()
{
  return lll_rdm_msgs::msg::builder::Init_ClockHealthMetricRtcMsg_header();
}

}  // namespace lll_rdm_msgs

#endif  // LLL_RDM_MSGS__MSG__DETAIL__CLOCK_HEALTH_METRIC_RTC_MSG__BUILDER_HPP_
