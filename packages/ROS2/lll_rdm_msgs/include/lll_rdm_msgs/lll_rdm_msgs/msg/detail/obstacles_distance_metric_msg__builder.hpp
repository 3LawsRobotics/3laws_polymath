// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from lll_rdm_msgs:msg/ObstaclesDistanceMetricMsg.idl
// generated code does not contain a copyright notice

#ifndef LLL_RDM_MSGS__MSG__DETAIL__OBSTACLES_DISTANCE_METRIC_MSG__BUILDER_HPP_
#define LLL_RDM_MSGS__MSG__DETAIL__OBSTACLES_DISTANCE_METRIC_MSG__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "lll_rdm_msgs/msg/detail/obstacles_distance_metric_msg__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace lll_rdm_msgs
{

namespace msg
{

namespace builder
{

class Init_ObstaclesDistanceMetricMsg_tags
{
public:
  explicit Init_ObstaclesDistanceMetricMsg_tags(::lll_rdm_msgs::msg::ObstaclesDistanceMetricMsg & msg)
  : msg_(msg)
  {}
  ::lll_rdm_msgs::msg::ObstaclesDistanceMetricMsg tags(::lll_rdm_msgs::msg::ObstaclesDistanceMetricMsg::_tags_type arg)
  {
    msg_.tags = std::move(arg);
    return std::move(msg_);
  }

private:
  ::lll_rdm_msgs::msg::ObstaclesDistanceMetricMsg msg_;
};

class Init_ObstaclesDistanceMetricMsg_data
{
public:
  explicit Init_ObstaclesDistanceMetricMsg_data(::lll_rdm_msgs::msg::ObstaclesDistanceMetricMsg & msg)
  : msg_(msg)
  {}
  Init_ObstaclesDistanceMetricMsg_tags data(::lll_rdm_msgs::msg::ObstaclesDistanceMetricMsg::_data_type arg)
  {
    msg_.data = std::move(arg);
    return Init_ObstaclesDistanceMetricMsg_tags(msg_);
  }

private:
  ::lll_rdm_msgs::msg::ObstaclesDistanceMetricMsg msg_;
};

class Init_ObstaclesDistanceMetricMsg_header
{
public:
  Init_ObstaclesDistanceMetricMsg_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ObstaclesDistanceMetricMsg_data header(::lll_rdm_msgs::msg::ObstaclesDistanceMetricMsg::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_ObstaclesDistanceMetricMsg_data(msg_);
  }

private:
  ::lll_rdm_msgs::msg::ObstaclesDistanceMetricMsg msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::lll_rdm_msgs::msg::ObstaclesDistanceMetricMsg>()
{
  return lll_rdm_msgs::msg::builder::Init_ObstaclesDistanceMetricMsg_header();
}

}  // namespace lll_rdm_msgs

#endif  // LLL_RDM_MSGS__MSG__DETAIL__OBSTACLES_DISTANCE_METRIC_MSG__BUILDER_HPP_
