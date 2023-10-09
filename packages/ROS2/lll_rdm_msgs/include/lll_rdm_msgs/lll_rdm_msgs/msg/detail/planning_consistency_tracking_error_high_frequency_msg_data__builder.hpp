// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from lll_rdm_msgs:msg/PlanningConsistencyTrackingErrorHighFrequencyMsgData.idl
// generated code does not contain a copyright notice

#ifndef LLL_RDM_MSGS__MSG__DETAIL__PLANNING_CONSISTENCY_TRACKING_ERROR_HIGH_FREQUENCY_MSG_DATA__BUILDER_HPP_
#define LLL_RDM_MSGS__MSG__DETAIL__PLANNING_CONSISTENCY_TRACKING_ERROR_HIGH_FREQUENCY_MSG_DATA__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "lll_rdm_msgs/msg/detail/planning_consistency_tracking_error_high_frequency_msg_data__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace lll_rdm_msgs
{

namespace msg
{

namespace builder
{

class Init_PlanningConsistencyTrackingErrorHighFrequencyMsgData_actual
{
public:
  explicit Init_PlanningConsistencyTrackingErrorHighFrequencyMsgData_actual(::lll_rdm_msgs::msg::PlanningConsistencyTrackingErrorHighFrequencyMsgData & msg)
  : msg_(msg)
  {}
  ::lll_rdm_msgs::msg::PlanningConsistencyTrackingErrorHighFrequencyMsgData actual(::lll_rdm_msgs::msg::PlanningConsistencyTrackingErrorHighFrequencyMsgData::_actual_type arg)
  {
    msg_.actual = std::move(arg);
    return std::move(msg_);
  }

private:
  ::lll_rdm_msgs::msg::PlanningConsistencyTrackingErrorHighFrequencyMsgData msg_;
};

class Init_PlanningConsistencyTrackingErrorHighFrequencyMsgData_desired
{
public:
  explicit Init_PlanningConsistencyTrackingErrorHighFrequencyMsgData_desired(::lll_rdm_msgs::msg::PlanningConsistencyTrackingErrorHighFrequencyMsgData & msg)
  : msg_(msg)
  {}
  Init_PlanningConsistencyTrackingErrorHighFrequencyMsgData_actual desired(::lll_rdm_msgs::msg::PlanningConsistencyTrackingErrorHighFrequencyMsgData::_desired_type arg)
  {
    msg_.desired = std::move(arg);
    return Init_PlanningConsistencyTrackingErrorHighFrequencyMsgData_actual(msg_);
  }

private:
  ::lll_rdm_msgs::msg::PlanningConsistencyTrackingErrorHighFrequencyMsgData msg_;
};

class Init_PlanningConsistencyTrackingErrorHighFrequencyMsgData_tracking_error
{
public:
  Init_PlanningConsistencyTrackingErrorHighFrequencyMsgData_tracking_error()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_PlanningConsistencyTrackingErrorHighFrequencyMsgData_desired tracking_error(::lll_rdm_msgs::msg::PlanningConsistencyTrackingErrorHighFrequencyMsgData::_tracking_error_type arg)
  {
    msg_.tracking_error = std::move(arg);
    return Init_PlanningConsistencyTrackingErrorHighFrequencyMsgData_desired(msg_);
  }

private:
  ::lll_rdm_msgs::msg::PlanningConsistencyTrackingErrorHighFrequencyMsgData msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::lll_rdm_msgs::msg::PlanningConsistencyTrackingErrorHighFrequencyMsgData>()
{
  return lll_rdm_msgs::msg::builder::Init_PlanningConsistencyTrackingErrorHighFrequencyMsgData_tracking_error();
}

}  // namespace lll_rdm_msgs

#endif  // LLL_RDM_MSGS__MSG__DETAIL__PLANNING_CONSISTENCY_TRACKING_ERROR_HIGH_FREQUENCY_MSG_DATA__BUILDER_HPP_
