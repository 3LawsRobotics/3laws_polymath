// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from lll_rdm_msgs:msg/IncidentLogMetricMsg.idl
// generated code does not contain a copyright notice

#ifndef LLL_RDM_MSGS__MSG__DETAIL__INCIDENT_LOG_METRIC_MSG__BUILDER_HPP_
#define LLL_RDM_MSGS__MSG__DETAIL__INCIDENT_LOG_METRIC_MSG__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "lll_rdm_msgs/msg/detail/incident_log_metric_msg__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace lll_rdm_msgs
{

namespace msg
{

namespace builder
{

class Init_IncidentLogMetricMsg_tags
{
public:
  explicit Init_IncidentLogMetricMsg_tags(::lll_rdm_msgs::msg::IncidentLogMetricMsg & msg)
  : msg_(msg)
  {}
  ::lll_rdm_msgs::msg::IncidentLogMetricMsg tags(::lll_rdm_msgs::msg::IncidentLogMetricMsg::_tags_type arg)
  {
    msg_.tags = std::move(arg);
    return std::move(msg_);
  }

private:
  ::lll_rdm_msgs::msg::IncidentLogMetricMsg msg_;
};

class Init_IncidentLogMetricMsg_data
{
public:
  explicit Init_IncidentLogMetricMsg_data(::lll_rdm_msgs::msg::IncidentLogMetricMsg & msg)
  : msg_(msg)
  {}
  Init_IncidentLogMetricMsg_tags data(::lll_rdm_msgs::msg::IncidentLogMetricMsg::_data_type arg)
  {
    msg_.data = std::move(arg);
    return Init_IncidentLogMetricMsg_tags(msg_);
  }

private:
  ::lll_rdm_msgs::msg::IncidentLogMetricMsg msg_;
};

class Init_IncidentLogMetricMsg_header
{
public:
  Init_IncidentLogMetricMsg_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_IncidentLogMetricMsg_data header(::lll_rdm_msgs::msg::IncidentLogMetricMsg::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_IncidentLogMetricMsg_data(msg_);
  }

private:
  ::lll_rdm_msgs::msg::IncidentLogMetricMsg msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::lll_rdm_msgs::msg::IncidentLogMetricMsg>()
{
  return lll_rdm_msgs::msg::builder::Init_IncidentLogMetricMsg_header();
}

}  // namespace lll_rdm_msgs

#endif  // LLL_RDM_MSGS__MSG__DETAIL__INCIDENT_LOG_METRIC_MSG__BUILDER_HPP_
