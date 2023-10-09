// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from lll_rdm_msgs:msg/SensorObstructionMetricMsg.idl
// generated code does not contain a copyright notice

#ifndef LLL_RDM_MSGS__MSG__DETAIL__SENSOR_OBSTRUCTION_METRIC_MSG__BUILDER_HPP_
#define LLL_RDM_MSGS__MSG__DETAIL__SENSOR_OBSTRUCTION_METRIC_MSG__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "lll_rdm_msgs/msg/detail/sensor_obstruction_metric_msg__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace lll_rdm_msgs
{

namespace msg
{

namespace builder
{

class Init_SensorObstructionMetricMsg_tags
{
public:
  explicit Init_SensorObstructionMetricMsg_tags(::lll_rdm_msgs::msg::SensorObstructionMetricMsg & msg)
  : msg_(msg)
  {}
  ::lll_rdm_msgs::msg::SensorObstructionMetricMsg tags(::lll_rdm_msgs::msg::SensorObstructionMetricMsg::_tags_type arg)
  {
    msg_.tags = std::move(arg);
    return std::move(msg_);
  }

private:
  ::lll_rdm_msgs::msg::SensorObstructionMetricMsg msg_;
};

class Init_SensorObstructionMetricMsg_data
{
public:
  explicit Init_SensorObstructionMetricMsg_data(::lll_rdm_msgs::msg::SensorObstructionMetricMsg & msg)
  : msg_(msg)
  {}
  Init_SensorObstructionMetricMsg_tags data(::lll_rdm_msgs::msg::SensorObstructionMetricMsg::_data_type arg)
  {
    msg_.data = std::move(arg);
    return Init_SensorObstructionMetricMsg_tags(msg_);
  }

private:
  ::lll_rdm_msgs::msg::SensorObstructionMetricMsg msg_;
};

class Init_SensorObstructionMetricMsg_header
{
public:
  Init_SensorObstructionMetricMsg_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SensorObstructionMetricMsg_data header(::lll_rdm_msgs::msg::SensorObstructionMetricMsg::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_SensorObstructionMetricMsg_data(msg_);
  }

private:
  ::lll_rdm_msgs::msg::SensorObstructionMetricMsg msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::lll_rdm_msgs::msg::SensorObstructionMetricMsg>()
{
  return lll_rdm_msgs::msg::builder::Init_SensorObstructionMetricMsg_header();
}

}  // namespace lll_rdm_msgs

#endif  // LLL_RDM_MSGS__MSG__DETAIL__SENSOR_OBSTRUCTION_METRIC_MSG__BUILDER_HPP_
