// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from lll_rdm_msgs:msg/SensorObstructionMetricMsgData.idl
// generated code does not contain a copyright notice

#ifndef LLL_RDM_MSGS__MSG__DETAIL__SENSOR_OBSTRUCTION_METRIC_MSG_DATA__BUILDER_HPP_
#define LLL_RDM_MSGS__MSG__DETAIL__SENSOR_OBSTRUCTION_METRIC_MSG_DATA__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "lll_rdm_msgs/msg/detail/sensor_obstruction_metric_msg_data__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace lll_rdm_msgs
{

namespace msg
{

namespace builder
{

class Init_SensorObstructionMetricMsgData_obstructions
{
public:
  explicit Init_SensorObstructionMetricMsgData_obstructions(::lll_rdm_msgs::msg::SensorObstructionMetricMsgData & msg)
  : msg_(msg)
  {}
  ::lll_rdm_msgs::msg::SensorObstructionMetricMsgData obstructions(::lll_rdm_msgs::msg::SensorObstructionMetricMsgData::_obstructions_type arg)
  {
    msg_.obstructions = std::move(arg);
    return std::move(msg_);
  }

private:
  ::lll_rdm_msgs::msg::SensorObstructionMetricMsgData msg_;
};

class Init_SensorObstructionMetricMsgData_obstructions_by_sectors
{
public:
  explicit Init_SensorObstructionMetricMsgData_obstructions_by_sectors(::lll_rdm_msgs::msg::SensorObstructionMetricMsgData & msg)
  : msg_(msg)
  {}
  Init_SensorObstructionMetricMsgData_obstructions obstructions_by_sectors(::lll_rdm_msgs::msg::SensorObstructionMetricMsgData::_obstructions_by_sectors_type arg)
  {
    msg_.obstructions_by_sectors = std::move(arg);
    return Init_SensorObstructionMetricMsgData_obstructions(msg_);
  }

private:
  ::lll_rdm_msgs::msg::SensorObstructionMetricMsgData msg_;
};

class Init_SensorObstructionMetricMsgData_time_since_last_msg
{
public:
  Init_SensorObstructionMetricMsgData_time_since_last_msg()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SensorObstructionMetricMsgData_obstructions_by_sectors time_since_last_msg(::lll_rdm_msgs::msg::SensorObstructionMetricMsgData::_time_since_last_msg_type arg)
  {
    msg_.time_since_last_msg = std::move(arg);
    return Init_SensorObstructionMetricMsgData_obstructions_by_sectors(msg_);
  }

private:
  ::lll_rdm_msgs::msg::SensorObstructionMetricMsgData msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::lll_rdm_msgs::msg::SensorObstructionMetricMsgData>()
{
  return lll_rdm_msgs::msg::builder::Init_SensorObstructionMetricMsgData_time_since_last_msg();
}

}  // namespace lll_rdm_msgs

#endif  // LLL_RDM_MSGS__MSG__DETAIL__SENSOR_OBSTRUCTION_METRIC_MSG_DATA__BUILDER_HPP_
