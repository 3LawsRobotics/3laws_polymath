// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from lll_rdm_msgs:msg/NodeHealthMetricMsgData.idl
// generated code does not contain a copyright notice

#ifndef LLL_RDM_MSGS__MSG__DETAIL__NODE_HEALTH_METRIC_MSG_DATA__BUILDER_HPP_
#define LLL_RDM_MSGS__MSG__DETAIL__NODE_HEALTH_METRIC_MSG_DATA__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "lll_rdm_msgs/msg/detail/node_health_metric_msg_data__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace lll_rdm_msgs
{

namespace msg
{

namespace builder
{

class Init_NodeHealthMetricMsgData_topics
{
public:
  explicit Init_NodeHealthMetricMsgData_topics(::lll_rdm_msgs::msg::NodeHealthMetricMsgData & msg)
  : msg_(msg)
  {}
  ::lll_rdm_msgs::msg::NodeHealthMetricMsgData topics(::lll_rdm_msgs::msg::NodeHealthMetricMsgData::_topics_type arg)
  {
    msg_.topics = std::move(arg);
    return std::move(msg_);
  }

private:
  ::lll_rdm_msgs::msg::NodeHealthMetricMsgData msg_;
};

class Init_NodeHealthMetricMsgData_ok
{
public:
  explicit Init_NodeHealthMetricMsgData_ok(::lll_rdm_msgs::msg::NodeHealthMetricMsgData & msg)
  : msg_(msg)
  {}
  Init_NodeHealthMetricMsgData_topics ok(::lll_rdm_msgs::msg::NodeHealthMetricMsgData::_ok_type arg)
  {
    msg_.ok = std::move(arg);
    return Init_NodeHealthMetricMsgData_topics(msg_);
  }

private:
  ::lll_rdm_msgs::msg::NodeHealthMetricMsgData msg_;
};

class Init_NodeHealthMetricMsgData_time_since_last_msg
{
public:
  explicit Init_NodeHealthMetricMsgData_time_since_last_msg(::lll_rdm_msgs::msg::NodeHealthMetricMsgData & msg)
  : msg_(msg)
  {}
  Init_NodeHealthMetricMsgData_ok time_since_last_msg(::lll_rdm_msgs::msg::NodeHealthMetricMsgData::_time_since_last_msg_type arg)
  {
    msg_.time_since_last_msg = std::move(arg);
    return Init_NodeHealthMetricMsgData_ok(msg_);
  }

private:
  ::lll_rdm_msgs::msg::NodeHealthMetricMsgData msg_;
};

class Init_NodeHealthMetricMsgData_timeout
{
public:
  Init_NodeHealthMetricMsgData_timeout()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_NodeHealthMetricMsgData_time_since_last_msg timeout(::lll_rdm_msgs::msg::NodeHealthMetricMsgData::_timeout_type arg)
  {
    msg_.timeout = std::move(arg);
    return Init_NodeHealthMetricMsgData_time_since_last_msg(msg_);
  }

private:
  ::lll_rdm_msgs::msg::NodeHealthMetricMsgData msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::lll_rdm_msgs::msg::NodeHealthMetricMsgData>()
{
  return lll_rdm_msgs::msg::builder::Init_NodeHealthMetricMsgData_timeout();
}

}  // namespace lll_rdm_msgs

#endif  // LLL_RDM_MSGS__MSG__DETAIL__NODE_HEALTH_METRIC_MSG_DATA__BUILDER_HPP_
