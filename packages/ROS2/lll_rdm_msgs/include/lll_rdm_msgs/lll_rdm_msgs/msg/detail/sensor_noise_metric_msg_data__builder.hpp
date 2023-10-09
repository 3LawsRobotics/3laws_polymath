// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from lll_rdm_msgs:msg/SensorNoiseMetricMsgData.idl
// generated code does not contain a copyright notice

#ifndef LLL_RDM_MSGS__MSG__DETAIL__SENSOR_NOISE_METRIC_MSG_DATA__BUILDER_HPP_
#define LLL_RDM_MSGS__MSG__DETAIL__SENSOR_NOISE_METRIC_MSG_DATA__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "lll_rdm_msgs/msg/detail/sensor_noise_metric_msg_data__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace lll_rdm_msgs
{

namespace msg
{

namespace builder
{

class Init_SensorNoiseMetricMsgData_noise_data
{
public:
  explicit Init_SensorNoiseMetricMsgData_noise_data(::lll_rdm_msgs::msg::SensorNoiseMetricMsgData & msg)
  : msg_(msg)
  {}
  ::lll_rdm_msgs::msg::SensorNoiseMetricMsgData noise_data(::lll_rdm_msgs::msg::SensorNoiseMetricMsgData::_noise_data_type arg)
  {
    msg_.noise_data = std::move(arg);
    return std::move(msg_);
  }

private:
  ::lll_rdm_msgs::msg::SensorNoiseMetricMsgData msg_;
};

class Init_SensorNoiseMetricMsgData_time_since_last_msg
{
public:
  Init_SensorNoiseMetricMsgData_time_since_last_msg()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SensorNoiseMetricMsgData_noise_data time_since_last_msg(::lll_rdm_msgs::msg::SensorNoiseMetricMsgData::_time_since_last_msg_type arg)
  {
    msg_.time_since_last_msg = std::move(arg);
    return Init_SensorNoiseMetricMsgData_noise_data(msg_);
  }

private:
  ::lll_rdm_msgs::msg::SensorNoiseMetricMsgData msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::lll_rdm_msgs::msg::SensorNoiseMetricMsgData>()
{
  return lll_rdm_msgs::msg::builder::Init_SensorNoiseMetricMsgData_time_since_last_msg();
}

}  // namespace lll_rdm_msgs

#endif  // LLL_RDM_MSGS__MSG__DETAIL__SENSOR_NOISE_METRIC_MSG_DATA__BUILDER_HPP_
