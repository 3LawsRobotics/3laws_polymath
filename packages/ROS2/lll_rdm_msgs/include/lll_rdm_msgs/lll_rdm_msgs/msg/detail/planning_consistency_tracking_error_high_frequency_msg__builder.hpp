// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from lll_rdm_msgs:msg/PlanningConsistencyTrackingErrorHighFrequencyMsg.idl
// generated code does not contain a copyright notice

#ifndef LLL_RDM_MSGS__MSG__DETAIL__PLANNING_CONSISTENCY_TRACKING_ERROR_HIGH_FREQUENCY_MSG__BUILDER_HPP_
#define LLL_RDM_MSGS__MSG__DETAIL__PLANNING_CONSISTENCY_TRACKING_ERROR_HIGH_FREQUENCY_MSG__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "lll_rdm_msgs/msg/detail/planning_consistency_tracking_error_high_frequency_msg__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace lll_rdm_msgs
{

namespace msg
{

namespace builder
{

class Init_PlanningConsistencyTrackingErrorHighFrequencyMsg_tags
{
public:
  explicit Init_PlanningConsistencyTrackingErrorHighFrequencyMsg_tags(::lll_rdm_msgs::msg::PlanningConsistencyTrackingErrorHighFrequencyMsg & msg)
  : msg_(msg)
  {}
  ::lll_rdm_msgs::msg::PlanningConsistencyTrackingErrorHighFrequencyMsg tags(::lll_rdm_msgs::msg::PlanningConsistencyTrackingErrorHighFrequencyMsg::_tags_type arg)
  {
    msg_.tags = std::move(arg);
    return std::move(msg_);
  }

private:
  ::lll_rdm_msgs::msg::PlanningConsistencyTrackingErrorHighFrequencyMsg msg_;
};

class Init_PlanningConsistencyTrackingErrorHighFrequencyMsg_data
{
public:
  explicit Init_PlanningConsistencyTrackingErrorHighFrequencyMsg_data(::lll_rdm_msgs::msg::PlanningConsistencyTrackingErrorHighFrequencyMsg & msg)
  : msg_(msg)
  {}
  Init_PlanningConsistencyTrackingErrorHighFrequencyMsg_tags data(::lll_rdm_msgs::msg::PlanningConsistencyTrackingErrorHighFrequencyMsg::_data_type arg)
  {
    msg_.data = std::move(arg);
    return Init_PlanningConsistencyTrackingErrorHighFrequencyMsg_tags(msg_);
  }

private:
  ::lll_rdm_msgs::msg::PlanningConsistencyTrackingErrorHighFrequencyMsg msg_;
};

class Init_PlanningConsistencyTrackingErrorHighFrequencyMsg_header
{
public:
  Init_PlanningConsistencyTrackingErrorHighFrequencyMsg_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_PlanningConsistencyTrackingErrorHighFrequencyMsg_data header(::lll_rdm_msgs::msg::PlanningConsistencyTrackingErrorHighFrequencyMsg::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_PlanningConsistencyTrackingErrorHighFrequencyMsg_data(msg_);
  }

private:
  ::lll_rdm_msgs::msg::PlanningConsistencyTrackingErrorHighFrequencyMsg msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::lll_rdm_msgs::msg::PlanningConsistencyTrackingErrorHighFrequencyMsg>()
{
  return lll_rdm_msgs::msg::builder::Init_PlanningConsistencyTrackingErrorHighFrequencyMsg_header();
}

}  // namespace lll_rdm_msgs

#endif  // LLL_RDM_MSGS__MSG__DETAIL__PLANNING_CONSISTENCY_TRACKING_ERROR_HIGH_FREQUENCY_MSG__BUILDER_HPP_
