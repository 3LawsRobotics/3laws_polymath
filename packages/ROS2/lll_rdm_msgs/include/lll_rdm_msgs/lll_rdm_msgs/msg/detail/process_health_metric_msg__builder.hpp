// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from lll_rdm_msgs:msg/ProcessHealthMetricMsg.idl
// generated code does not contain a copyright notice

#ifndef LLL_RDM_MSGS__MSG__DETAIL__PROCESS_HEALTH_METRIC_MSG__BUILDER_HPP_
#define LLL_RDM_MSGS__MSG__DETAIL__PROCESS_HEALTH_METRIC_MSG__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "lll_rdm_msgs/msg/detail/process_health_metric_msg__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace lll_rdm_msgs
{

namespace msg
{

namespace builder
{

class Init_ProcessHealthMetricMsg_tags
{
public:
  explicit Init_ProcessHealthMetricMsg_tags(::lll_rdm_msgs::msg::ProcessHealthMetricMsg & msg)
  : msg_(msg)
  {}
  ::lll_rdm_msgs::msg::ProcessHealthMetricMsg tags(::lll_rdm_msgs::msg::ProcessHealthMetricMsg::_tags_type arg)
  {
    msg_.tags = std::move(arg);
    return std::move(msg_);
  }

private:
  ::lll_rdm_msgs::msg::ProcessHealthMetricMsg msg_;
};

class Init_ProcessHealthMetricMsg_data
{
public:
  explicit Init_ProcessHealthMetricMsg_data(::lll_rdm_msgs::msg::ProcessHealthMetricMsg & msg)
  : msg_(msg)
  {}
  Init_ProcessHealthMetricMsg_tags data(::lll_rdm_msgs::msg::ProcessHealthMetricMsg::_data_type arg)
  {
    msg_.data = std::move(arg);
    return Init_ProcessHealthMetricMsg_tags(msg_);
  }

private:
  ::lll_rdm_msgs::msg::ProcessHealthMetricMsg msg_;
};

class Init_ProcessHealthMetricMsg_header
{
public:
  Init_ProcessHealthMetricMsg_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ProcessHealthMetricMsg_data header(::lll_rdm_msgs::msg::ProcessHealthMetricMsg::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_ProcessHealthMetricMsg_data(msg_);
  }

private:
  ::lll_rdm_msgs::msg::ProcessHealthMetricMsg msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::lll_rdm_msgs::msg::ProcessHealthMetricMsg>()
{
  return lll_rdm_msgs::msg::builder::Init_ProcessHealthMetricMsg_header();
}

}  // namespace lll_rdm_msgs

#endif  // LLL_RDM_MSGS__MSG__DETAIL__PROCESS_HEALTH_METRIC_MSG__BUILDER_HPP_
