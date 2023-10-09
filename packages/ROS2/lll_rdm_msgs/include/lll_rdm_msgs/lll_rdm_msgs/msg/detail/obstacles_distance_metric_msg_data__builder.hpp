// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from lll_rdm_msgs:msg/ObstaclesDistanceMetricMsgData.idl
// generated code does not contain a copyright notice

#ifndef LLL_RDM_MSGS__MSG__DETAIL__OBSTACLES_DISTANCE_METRIC_MSG_DATA__BUILDER_HPP_
#define LLL_RDM_MSGS__MSG__DETAIL__OBSTACLES_DISTANCE_METRIC_MSG_DATA__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "lll_rdm_msgs/msg/detail/obstacles_distance_metric_msg_data__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace lll_rdm_msgs
{

namespace msg
{

namespace builder
{

class Init_ObstaclesDistanceMetricMsgData_min_dist_sensor_id
{
public:
  explicit Init_ObstaclesDistanceMetricMsgData_min_dist_sensor_id(::lll_rdm_msgs::msg::ObstaclesDistanceMetricMsgData & msg)
  : msg_(msg)
  {}
  ::lll_rdm_msgs::msg::ObstaclesDistanceMetricMsgData min_dist_sensor_id(::lll_rdm_msgs::msg::ObstaclesDistanceMetricMsgData::_min_dist_sensor_id_type arg)
  {
    msg_.min_dist_sensor_id = std::move(arg);
    return std::move(msg_);
  }

private:
  ::lll_rdm_msgs::msg::ObstaclesDistanceMetricMsgData msg_;
};

class Init_ObstaclesDistanceMetricMsgData_min_dist
{
public:
  explicit Init_ObstaclesDistanceMetricMsgData_min_dist(::lll_rdm_msgs::msg::ObstaclesDistanceMetricMsgData & msg)
  : msg_(msg)
  {}
  Init_ObstaclesDistanceMetricMsgData_min_dist_sensor_id min_dist(::lll_rdm_msgs::msg::ObstaclesDistanceMetricMsgData::_min_dist_type arg)
  {
    msg_.min_dist = std::move(arg);
    return Init_ObstaclesDistanceMetricMsgData_min_dist_sensor_id(msg_);
  }

private:
  ::lll_rdm_msgs::msg::ObstaclesDistanceMetricMsgData msg_;
};

class Init_ObstaclesDistanceMetricMsgData_time_since_last_msg
{
public:
  explicit Init_ObstaclesDistanceMetricMsgData_time_since_last_msg(::lll_rdm_msgs::msg::ObstaclesDistanceMetricMsgData & msg)
  : msg_(msg)
  {}
  Init_ObstaclesDistanceMetricMsgData_min_dist time_since_last_msg(::lll_rdm_msgs::msg::ObstaclesDistanceMetricMsgData::_time_since_last_msg_type arg)
  {
    msg_.time_since_last_msg = std::move(arg);
    return Init_ObstaclesDistanceMetricMsgData_min_dist(msg_);
  }

private:
  ::lll_rdm_msgs::msg::ObstaclesDistanceMetricMsgData msg_;
};

class Init_ObstaclesDistanceMetricMsgData_timeout
{
public:
  Init_ObstaclesDistanceMetricMsgData_timeout()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ObstaclesDistanceMetricMsgData_time_since_last_msg timeout(::lll_rdm_msgs::msg::ObstaclesDistanceMetricMsgData::_timeout_type arg)
  {
    msg_.timeout = std::move(arg);
    return Init_ObstaclesDistanceMetricMsgData_time_since_last_msg(msg_);
  }

private:
  ::lll_rdm_msgs::msg::ObstaclesDistanceMetricMsgData msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::lll_rdm_msgs::msg::ObstaclesDistanceMetricMsgData>()
{
  return lll_rdm_msgs::msg::builder::Init_ObstaclesDistanceMetricMsgData_timeout();
}

}  // namespace lll_rdm_msgs

#endif  // LLL_RDM_MSGS__MSG__DETAIL__OBSTACLES_DISTANCE_METRIC_MSG_DATA__BUILDER_HPP_
