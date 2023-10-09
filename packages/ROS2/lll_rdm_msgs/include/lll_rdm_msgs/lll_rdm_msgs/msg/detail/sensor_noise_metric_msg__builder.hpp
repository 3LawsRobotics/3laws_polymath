// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from lll_rdm_msgs:msg/SensorNoiseMetricMsg.idl
// generated code does not contain a copyright notice

#ifndef LLL_RDM_MSGS__MSG__DETAIL__SENSOR_NOISE_METRIC_MSG__BUILDER_HPP_
#define LLL_RDM_MSGS__MSG__DETAIL__SENSOR_NOISE_METRIC_MSG__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "lll_rdm_msgs/msg/detail/sensor_noise_metric_msg__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace lll_rdm_msgs
{

namespace msg
{

namespace builder
{

class Init_SensorNoiseMetricMsg_tags
{
public:
  explicit Init_SensorNoiseMetricMsg_tags(::lll_rdm_msgs::msg::SensorNoiseMetricMsg & msg)
  : msg_(msg)
  {}
  ::lll_rdm_msgs::msg::SensorNoiseMetricMsg tags(::lll_rdm_msgs::msg::SensorNoiseMetricMsg::_tags_type arg)
  {
    msg_.tags = std::move(arg);
    return std::move(msg_);
  }

private:
  ::lll_rdm_msgs::msg::SensorNoiseMetricMsg msg_;
};

class Init_SensorNoiseMetricMsg_data
{
public:
  explicit Init_SensorNoiseMetricMsg_data(::lll_rdm_msgs::msg::SensorNoiseMetricMsg & msg)
  : msg_(msg)
  {}
  Init_SensorNoiseMetricMsg_tags data(::lll_rdm_msgs::msg::SensorNoiseMetricMsg::_data_type arg)
  {
    msg_.data = std::move(arg);
    return Init_SensorNoiseMetricMsg_tags(msg_);
  }

private:
  ::lll_rdm_msgs::msg::SensorNoiseMetricMsg msg_;
};

class Init_SensorNoiseMetricMsg_header
{
public:
  Init_SensorNoiseMetricMsg_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SensorNoiseMetricMsg_data header(::lll_rdm_msgs::msg::SensorNoiseMetricMsg::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_SensorNoiseMetricMsg_data(msg_);
  }

private:
  ::lll_rdm_msgs::msg::SensorNoiseMetricMsg msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::lll_rdm_msgs::msg::SensorNoiseMetricMsg>()
{
  return lll_rdm_msgs::msg::builder::Init_SensorNoiseMetricMsg_header();
}

}  // namespace lll_rdm_msgs

#endif  // LLL_RDM_MSGS__MSG__DETAIL__SENSOR_NOISE_METRIC_MSG__BUILDER_HPP_
