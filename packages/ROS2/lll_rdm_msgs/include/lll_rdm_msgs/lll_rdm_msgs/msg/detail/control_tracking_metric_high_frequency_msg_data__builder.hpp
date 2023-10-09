// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from lll_rdm_msgs:msg/ControlTrackingMetricHighFrequencyMsgData.idl
// generated code does not contain a copyright notice

#ifndef LLL_RDM_MSGS__MSG__DETAIL__CONTROL_TRACKING_METRIC_HIGH_FREQUENCY_MSG_DATA__BUILDER_HPP_
#define LLL_RDM_MSGS__MSG__DETAIL__CONTROL_TRACKING_METRIC_HIGH_FREQUENCY_MSG_DATA__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "lll_rdm_msgs/msg/detail/control_tracking_metric_high_frequency_msg_data__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace lll_rdm_msgs
{

namespace msg
{

namespace builder
{

class Init_ControlTrackingMetricHighFrequencyMsgData_tracking_error
{
public:
  Init_ControlTrackingMetricHighFrequencyMsgData_tracking_error()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::lll_rdm_msgs::msg::ControlTrackingMetricHighFrequencyMsgData tracking_error(::lll_rdm_msgs::msg::ControlTrackingMetricHighFrequencyMsgData::_tracking_error_type arg)
  {
    msg_.tracking_error = std::move(arg);
    return std::move(msg_);
  }

private:
  ::lll_rdm_msgs::msg::ControlTrackingMetricHighFrequencyMsgData msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::lll_rdm_msgs::msg::ControlTrackingMetricHighFrequencyMsgData>()
{
  return lll_rdm_msgs::msg::builder::Init_ControlTrackingMetricHighFrequencyMsgData_tracking_error();
}

}  // namespace lll_rdm_msgs

#endif  // LLL_RDM_MSGS__MSG__DETAIL__CONTROL_TRACKING_METRIC_HIGH_FREQUENCY_MSG_DATA__BUILDER_HPP_
