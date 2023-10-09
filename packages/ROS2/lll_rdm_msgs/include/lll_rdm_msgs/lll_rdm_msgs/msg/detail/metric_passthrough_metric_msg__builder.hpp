// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from lll_rdm_msgs:msg/MetricPassthroughMetricMsg.idl
// generated code does not contain a copyright notice

#ifndef LLL_RDM_MSGS__MSG__DETAIL__METRIC_PASSTHROUGH_METRIC_MSG__BUILDER_HPP_
#define LLL_RDM_MSGS__MSG__DETAIL__METRIC_PASSTHROUGH_METRIC_MSG__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "lll_rdm_msgs/msg/detail/metric_passthrough_metric_msg__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace lll_rdm_msgs
{

namespace msg
{

namespace builder
{

class Init_MetricPassthroughMetricMsg_tags
{
public:
  explicit Init_MetricPassthroughMetricMsg_tags(::lll_rdm_msgs::msg::MetricPassthroughMetricMsg & msg)
  : msg_(msg)
  {}
  ::lll_rdm_msgs::msg::MetricPassthroughMetricMsg tags(::lll_rdm_msgs::msg::MetricPassthroughMetricMsg::_tags_type arg)
  {
    msg_.tags = std::move(arg);
    return std::move(msg_);
  }

private:
  ::lll_rdm_msgs::msg::MetricPassthroughMetricMsg msg_;
};

class Init_MetricPassthroughMetricMsg_data
{
public:
  explicit Init_MetricPassthroughMetricMsg_data(::lll_rdm_msgs::msg::MetricPassthroughMetricMsg & msg)
  : msg_(msg)
  {}
  Init_MetricPassthroughMetricMsg_tags data(::lll_rdm_msgs::msg::MetricPassthroughMetricMsg::_data_type arg)
  {
    msg_.data = std::move(arg);
    return Init_MetricPassthroughMetricMsg_tags(msg_);
  }

private:
  ::lll_rdm_msgs::msg::MetricPassthroughMetricMsg msg_;
};

class Init_MetricPassthroughMetricMsg_header
{
public:
  Init_MetricPassthroughMetricMsg_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_MetricPassthroughMetricMsg_data header(::lll_rdm_msgs::msg::MetricPassthroughMetricMsg::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_MetricPassthroughMetricMsg_data(msg_);
  }

private:
  ::lll_rdm_msgs::msg::MetricPassthroughMetricMsg msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::lll_rdm_msgs::msg::MetricPassthroughMetricMsg>()
{
  return lll_rdm_msgs::msg::builder::Init_MetricPassthroughMetricMsg_header();
}

}  // namespace lll_rdm_msgs

#endif  // LLL_RDM_MSGS__MSG__DETAIL__METRIC_PASSTHROUGH_METRIC_MSG__BUILDER_HPP_
