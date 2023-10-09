// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from lll_rdm_msgs:msg/NodeHealthMetricMsgTopicData.idl
// generated code does not contain a copyright notice

#ifndef LLL_RDM_MSGS__MSG__DETAIL__NODE_HEALTH_METRIC_MSG_TOPIC_DATA__BUILDER_HPP_
#define LLL_RDM_MSGS__MSG__DETAIL__NODE_HEALTH_METRIC_MSG_TOPIC_DATA__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "lll_rdm_msgs/msg/detail/node_health_metric_msg_topic_data__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace lll_rdm_msgs
{

namespace msg
{

namespace builder
{

class Init_NodeHealthMetricMsgTopicData_delay
{
public:
  explicit Init_NodeHealthMetricMsgTopicData_delay(::lll_rdm_msgs::msg::NodeHealthMetricMsgTopicData & msg)
  : msg_(msg)
  {}
  ::lll_rdm_msgs::msg::NodeHealthMetricMsgTopicData delay(::lll_rdm_msgs::msg::NodeHealthMetricMsgTopicData::_delay_type arg)
  {
    msg_.delay = std::move(arg);
    return std::move(msg_);
  }

private:
  ::lll_rdm_msgs::msg::NodeHealthMetricMsgTopicData msg_;
};

class Init_NodeHealthMetricMsgTopicData_receiver_rate
{
public:
  explicit Init_NodeHealthMetricMsgTopicData_receiver_rate(::lll_rdm_msgs::msg::NodeHealthMetricMsgTopicData & msg)
  : msg_(msg)
  {}
  Init_NodeHealthMetricMsgTopicData_delay receiver_rate(::lll_rdm_msgs::msg::NodeHealthMetricMsgTopicData::_receiver_rate_type arg)
  {
    msg_.receiver_rate = std::move(arg);
    return Init_NodeHealthMetricMsgTopicData_delay(msg_);
  }

private:
  ::lll_rdm_msgs::msg::NodeHealthMetricMsgTopicData msg_;
};

class Init_NodeHealthMetricMsgTopicData_sender_rate
{
public:
  explicit Init_NodeHealthMetricMsgTopicData_sender_rate(::lll_rdm_msgs::msg::NodeHealthMetricMsgTopicData & msg)
  : msg_(msg)
  {}
  Init_NodeHealthMetricMsgTopicData_receiver_rate sender_rate(::lll_rdm_msgs::msg::NodeHealthMetricMsgTopicData::_sender_rate_type arg)
  {
    msg_.sender_rate = std::move(arg);
    return Init_NodeHealthMetricMsgTopicData_receiver_rate(msg_);
  }

private:
  ::lll_rdm_msgs::msg::NodeHealthMetricMsgTopicData msg_;
};

class Init_NodeHealthMetricMsgTopicData_time_since_last_msg
{
public:
  explicit Init_NodeHealthMetricMsgTopicData_time_since_last_msg(::lll_rdm_msgs::msg::NodeHealthMetricMsgTopicData & msg)
  : msg_(msg)
  {}
  Init_NodeHealthMetricMsgTopicData_sender_rate time_since_last_msg(::lll_rdm_msgs::msg::NodeHealthMetricMsgTopicData::_time_since_last_msg_type arg)
  {
    msg_.time_since_last_msg = std::move(arg);
    return Init_NodeHealthMetricMsgTopicData_sender_rate(msg_);
  }

private:
  ::lll_rdm_msgs::msg::NodeHealthMetricMsgTopicData msg_;
};

class Init_NodeHealthMetricMsgTopicData_timeout
{
public:
  explicit Init_NodeHealthMetricMsgTopicData_timeout(::lll_rdm_msgs::msg::NodeHealthMetricMsgTopicData & msg)
  : msg_(msg)
  {}
  Init_NodeHealthMetricMsgTopicData_time_since_last_msg timeout(::lll_rdm_msgs::msg::NodeHealthMetricMsgTopicData::_timeout_type arg)
  {
    msg_.timeout = std::move(arg);
    return Init_NodeHealthMetricMsgTopicData_time_since_last_msg(msg_);
  }

private:
  ::lll_rdm_msgs::msg::NodeHealthMetricMsgTopicData msg_;
};

class Init_NodeHealthMetricMsgTopicData_topic_id
{
public:
  Init_NodeHealthMetricMsgTopicData_topic_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_NodeHealthMetricMsgTopicData_timeout topic_id(::lll_rdm_msgs::msg::NodeHealthMetricMsgTopicData::_topic_id_type arg)
  {
    msg_.topic_id = std::move(arg);
    return Init_NodeHealthMetricMsgTopicData_timeout(msg_);
  }

private:
  ::lll_rdm_msgs::msg::NodeHealthMetricMsgTopicData msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::lll_rdm_msgs::msg::NodeHealthMetricMsgTopicData>()
{
  return lll_rdm_msgs::msg::builder::Init_NodeHealthMetricMsgTopicData_topic_id();
}

}  // namespace lll_rdm_msgs

#endif  // LLL_RDM_MSGS__MSG__DETAIL__NODE_HEALTH_METRIC_MSG_TOPIC_DATA__BUILDER_HPP_
