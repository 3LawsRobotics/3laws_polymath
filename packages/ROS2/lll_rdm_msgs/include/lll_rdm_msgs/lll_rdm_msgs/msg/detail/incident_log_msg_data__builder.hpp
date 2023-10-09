// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from lll_rdm_msgs:msg/IncidentLogMsgData.idl
// generated code does not contain a copyright notice

#ifndef LLL_RDM_MSGS__MSG__DETAIL__INCIDENT_LOG_MSG_DATA__BUILDER_HPP_
#define LLL_RDM_MSGS__MSG__DETAIL__INCIDENT_LOG_MSG_DATA__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "lll_rdm_msgs/msg/detail/incident_log_msg_data__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace lll_rdm_msgs
{

namespace msg
{

namespace builder
{

class Init_IncidentLogMsgData_domain
{
public:
  explicit Init_IncidentLogMsgData_domain(::lll_rdm_msgs::msg::IncidentLogMsgData & msg)
  : msg_(msg)
  {}
  ::lll_rdm_msgs::msg::IncidentLogMsgData domain(::lll_rdm_msgs::msg::IncidentLogMsgData::_domain_type arg)
  {
    msg_.domain = std::move(arg);
    return std::move(msg_);
  }

private:
  ::lll_rdm_msgs::msg::IncidentLogMsgData msg_;
};

class Init_IncidentLogMsgData_detail
{
public:
  explicit Init_IncidentLogMsgData_detail(::lll_rdm_msgs::msg::IncidentLogMsgData & msg)
  : msg_(msg)
  {}
  Init_IncidentLogMsgData_domain detail(::lll_rdm_msgs::msg::IncidentLogMsgData::_detail_type arg)
  {
    msg_.detail = std::move(arg);
    return Init_IncidentLogMsgData_domain(msg_);
  }

private:
  ::lll_rdm_msgs::msg::IncidentLogMsgData msg_;
};

class Init_IncidentLogMsgData_name
{
public:
  explicit Init_IncidentLogMsgData_name(::lll_rdm_msgs::msg::IncidentLogMsgData & msg)
  : msg_(msg)
  {}
  Init_IncidentLogMsgData_detail name(::lll_rdm_msgs::msg::IncidentLogMsgData::_name_type arg)
  {
    msg_.name = std::move(arg);
    return Init_IncidentLogMsgData_detail(msg_);
  }

private:
  ::lll_rdm_msgs::msg::IncidentLogMsgData msg_;
};

class Init_IncidentLogMsgData_in_progress
{
public:
  Init_IncidentLogMsgData_in_progress()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_IncidentLogMsgData_name in_progress(::lll_rdm_msgs::msg::IncidentLogMsgData::_in_progress_type arg)
  {
    msg_.in_progress = std::move(arg);
    return Init_IncidentLogMsgData_name(msg_);
  }

private:
  ::lll_rdm_msgs::msg::IncidentLogMsgData msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::lll_rdm_msgs::msg::IncidentLogMsgData>()
{
  return lll_rdm_msgs::msg::builder::Init_IncidentLogMsgData_in_progress();
}

}  // namespace lll_rdm_msgs

#endif  // LLL_RDM_MSGS__MSG__DETAIL__INCIDENT_LOG_MSG_DATA__BUILDER_HPP_
