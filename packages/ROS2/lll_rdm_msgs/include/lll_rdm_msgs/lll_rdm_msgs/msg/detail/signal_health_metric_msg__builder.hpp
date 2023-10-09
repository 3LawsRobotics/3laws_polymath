// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from lll_rdm_msgs:msg/SignalHealthMetricMsg.idl
// generated code does not contain a copyright notice

#ifndef LLL_RDM_MSGS__MSG__DETAIL__SIGNAL_HEALTH_METRIC_MSG__BUILDER_HPP_
#define LLL_RDM_MSGS__MSG__DETAIL__SIGNAL_HEALTH_METRIC_MSG__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "lll_rdm_msgs/msg/detail/signal_health_metric_msg__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace lll_rdm_msgs
{

namespace msg
{

namespace builder
{

class Init_SignalHealthMetricMsg_tags
{
public:
  explicit Init_SignalHealthMetricMsg_tags(::lll_rdm_msgs::msg::SignalHealthMetricMsg & msg)
  : msg_(msg)
  {}
  ::lll_rdm_msgs::msg::SignalHealthMetricMsg tags(::lll_rdm_msgs::msg::SignalHealthMetricMsg::_tags_type arg)
  {
    msg_.tags = std::move(arg);
    return std::move(msg_);
  }

private:
  ::lll_rdm_msgs::msg::SignalHealthMetricMsg msg_;
};

class Init_SignalHealthMetricMsg_data
{
public:
  explicit Init_SignalHealthMetricMsg_data(::lll_rdm_msgs::msg::SignalHealthMetricMsg & msg)
  : msg_(msg)
  {}
  Init_SignalHealthMetricMsg_tags data(::lll_rdm_msgs::msg::SignalHealthMetricMsg::_data_type arg)
  {
    msg_.data = std::move(arg);
    return Init_SignalHealthMetricMsg_tags(msg_);
  }

private:
  ::lll_rdm_msgs::msg::SignalHealthMetricMsg msg_;
};

class Init_SignalHealthMetricMsg_header
{
public:
  Init_SignalHealthMetricMsg_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SignalHealthMetricMsg_data header(::lll_rdm_msgs::msg::SignalHealthMetricMsg::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_SignalHealthMetricMsg_data(msg_);
  }

private:
  ::lll_rdm_msgs::msg::SignalHealthMetricMsg msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::lll_rdm_msgs::msg::SignalHealthMetricMsg>()
{
  return lll_rdm_msgs::msg::builder::Init_SignalHealthMetricMsg_header();
}

}  // namespace lll_rdm_msgs

#endif  // LLL_RDM_MSGS__MSG__DETAIL__SIGNAL_HEALTH_METRIC_MSG__BUILDER_HPP_
