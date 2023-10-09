// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from lll_rdm_msgs:msg/NodeHealthMetricMsg.idl
// generated code does not contain a copyright notice

#ifndef LLL_RDM_MSGS__MSG__DETAIL__NODE_HEALTH_METRIC_MSG__BUILDER_HPP_
#define LLL_RDM_MSGS__MSG__DETAIL__NODE_HEALTH_METRIC_MSG__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "lll_rdm_msgs/msg/detail/node_health_metric_msg__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace lll_rdm_msgs
{

namespace msg
{

namespace builder
{

class Init_NodeHealthMetricMsg_tags
{
public:
  explicit Init_NodeHealthMetricMsg_tags(::lll_rdm_msgs::msg::NodeHealthMetricMsg & msg)
  : msg_(msg)
  {}
  ::lll_rdm_msgs::msg::NodeHealthMetricMsg tags(::lll_rdm_msgs::msg::NodeHealthMetricMsg::_tags_type arg)
  {
    msg_.tags = std::move(arg);
    return std::move(msg_);
  }

private:
  ::lll_rdm_msgs::msg::NodeHealthMetricMsg msg_;
};

class Init_NodeHealthMetricMsg_data
{
public:
  explicit Init_NodeHealthMetricMsg_data(::lll_rdm_msgs::msg::NodeHealthMetricMsg & msg)
  : msg_(msg)
  {}
  Init_NodeHealthMetricMsg_tags data(::lll_rdm_msgs::msg::NodeHealthMetricMsg::_data_type arg)
  {
    msg_.data = std::move(arg);
    return Init_NodeHealthMetricMsg_tags(msg_);
  }

private:
  ::lll_rdm_msgs::msg::NodeHealthMetricMsg msg_;
};

class Init_NodeHealthMetricMsg_header
{
public:
  Init_NodeHealthMetricMsg_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_NodeHealthMetricMsg_data header(::lll_rdm_msgs::msg::NodeHealthMetricMsg::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_NodeHealthMetricMsg_data(msg_);
  }

private:
  ::lll_rdm_msgs::msg::NodeHealthMetricMsg msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::lll_rdm_msgs::msg::NodeHealthMetricMsg>()
{
  return lll_rdm_msgs::msg::builder::Init_NodeHealthMetricMsg_header();
}

}  // namespace lll_rdm_msgs

#endif  // LLL_RDM_MSGS__MSG__DETAIL__NODE_HEALTH_METRIC_MSG__BUILDER_HPP_
