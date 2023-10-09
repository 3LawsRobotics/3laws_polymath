// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from lll_rdm_msgs:msg/PlanningConsistencyMsg.idl
// generated code does not contain a copyright notice

#ifndef LLL_RDM_MSGS__MSG__DETAIL__PLANNING_CONSISTENCY_MSG__BUILDER_HPP_
#define LLL_RDM_MSGS__MSG__DETAIL__PLANNING_CONSISTENCY_MSG__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "lll_rdm_msgs/msg/detail/planning_consistency_msg__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace lll_rdm_msgs
{

namespace msg
{

namespace builder
{

class Init_PlanningConsistencyMsg_tags
{
public:
  explicit Init_PlanningConsistencyMsg_tags(::lll_rdm_msgs::msg::PlanningConsistencyMsg & msg)
  : msg_(msg)
  {}
  ::lll_rdm_msgs::msg::PlanningConsistencyMsg tags(::lll_rdm_msgs::msg::PlanningConsistencyMsg::_tags_type arg)
  {
    msg_.tags = std::move(arg);
    return std::move(msg_);
  }

private:
  ::lll_rdm_msgs::msg::PlanningConsistencyMsg msg_;
};

class Init_PlanningConsistencyMsg_data
{
public:
  explicit Init_PlanningConsistencyMsg_data(::lll_rdm_msgs::msg::PlanningConsistencyMsg & msg)
  : msg_(msg)
  {}
  Init_PlanningConsistencyMsg_tags data(::lll_rdm_msgs::msg::PlanningConsistencyMsg::_data_type arg)
  {
    msg_.data = std::move(arg);
    return Init_PlanningConsistencyMsg_tags(msg_);
  }

private:
  ::lll_rdm_msgs::msg::PlanningConsistencyMsg msg_;
};

class Init_PlanningConsistencyMsg_header
{
public:
  Init_PlanningConsistencyMsg_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_PlanningConsistencyMsg_data header(::lll_rdm_msgs::msg::PlanningConsistencyMsg::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_PlanningConsistencyMsg_data(msg_);
  }

private:
  ::lll_rdm_msgs::msg::PlanningConsistencyMsg msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::lll_rdm_msgs::msg::PlanningConsistencyMsg>()
{
  return lll_rdm_msgs::msg::builder::Init_PlanningConsistencyMsg_header();
}

}  // namespace lll_rdm_msgs

#endif  // LLL_RDM_MSGS__MSG__DETAIL__PLANNING_CONSISTENCY_MSG__BUILDER_HPP_
