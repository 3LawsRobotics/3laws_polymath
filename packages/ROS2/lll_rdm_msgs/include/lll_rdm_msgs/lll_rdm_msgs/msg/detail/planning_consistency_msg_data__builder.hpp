// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from lll_rdm_msgs:msg/PlanningConsistencyMsgData.idl
// generated code does not contain a copyright notice

#ifndef LLL_RDM_MSGS__MSG__DETAIL__PLANNING_CONSISTENCY_MSG_DATA__BUILDER_HPP_
#define LLL_RDM_MSGS__MSG__DETAIL__PLANNING_CONSISTENCY_MSG_DATA__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "lll_rdm_msgs/msg/detail/planning_consistency_msg_data__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace lll_rdm_msgs
{

namespace msg
{

namespace builder
{

class Init_PlanningConsistencyMsgData_acceleration_inconsistency_values
{
public:
  explicit Init_PlanningConsistencyMsgData_acceleration_inconsistency_values(::lll_rdm_msgs::msg::PlanningConsistencyMsgData & msg)
  : msg_(msg)
  {}
  ::lll_rdm_msgs::msg::PlanningConsistencyMsgData acceleration_inconsistency_values(::lll_rdm_msgs::msg::PlanningConsistencyMsgData::_acceleration_inconsistency_values_type arg)
  {
    msg_.acceleration_inconsistency_values = std::move(arg);
    return std::move(msg_);
  }

private:
  ::lll_rdm_msgs::msg::PlanningConsistencyMsgData msg_;
};

class Init_PlanningConsistencyMsgData_acceleration_inconsistency
{
public:
  explicit Init_PlanningConsistencyMsgData_acceleration_inconsistency(::lll_rdm_msgs::msg::PlanningConsistencyMsgData & msg)
  : msg_(msg)
  {}
  Init_PlanningConsistencyMsgData_acceleration_inconsistency_values acceleration_inconsistency(::lll_rdm_msgs::msg::PlanningConsistencyMsgData::_acceleration_inconsistency_type arg)
  {
    msg_.acceleration_inconsistency = std::move(arg);
    return Init_PlanningConsistencyMsgData_acceleration_inconsistency_values(msg_);
  }

private:
  ::lll_rdm_msgs::msg::PlanningConsistencyMsgData msg_;
};

class Init_PlanningConsistencyMsgData_strictly_sorted_time
{
public:
  explicit Init_PlanningConsistencyMsgData_strictly_sorted_time(::lll_rdm_msgs::msg::PlanningConsistencyMsgData & msg)
  : msg_(msg)
  {}
  Init_PlanningConsistencyMsgData_acceleration_inconsistency strictly_sorted_time(::lll_rdm_msgs::msg::PlanningConsistencyMsgData::_strictly_sorted_time_type arg)
  {
    msg_.strictly_sorted_time = std::move(arg);
    return Init_PlanningConsistencyMsgData_acceleration_inconsistency(msg_);
  }

private:
  ::lll_rdm_msgs::msg::PlanningConsistencyMsgData msg_;
};

class Init_PlanningConsistencyMsgData_consistent_input_size
{
public:
  explicit Init_PlanningConsistencyMsgData_consistent_input_size(::lll_rdm_msgs::msg::PlanningConsistencyMsgData & msg)
  : msg_(msg)
  {}
  Init_PlanningConsistencyMsgData_strictly_sorted_time consistent_input_size(::lll_rdm_msgs::msg::PlanningConsistencyMsgData::_consistent_input_size_type arg)
  {
    msg_.consistent_input_size = std::move(arg);
    return Init_PlanningConsistencyMsgData_strictly_sorted_time(msg_);
  }

private:
  ::lll_rdm_msgs::msg::PlanningConsistencyMsgData msg_;
};

class Init_PlanningConsistencyMsgData_consistent_state_size
{
public:
  explicit Init_PlanningConsistencyMsgData_consistent_state_size(::lll_rdm_msgs::msg::PlanningConsistencyMsgData & msg)
  : msg_(msg)
  {}
  Init_PlanningConsistencyMsgData_consistent_input_size consistent_state_size(::lll_rdm_msgs::msg::PlanningConsistencyMsgData::_consistent_state_size_type arg)
  {
    msg_.consistent_state_size = std::move(arg);
    return Init_PlanningConsistencyMsgData_consistent_input_size(msg_);
  }

private:
  ::lll_rdm_msgs::msg::PlanningConsistencyMsgData msg_;
};

class Init_PlanningConsistencyMsgData_consistent_lengths
{
public:
  Init_PlanningConsistencyMsgData_consistent_lengths()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_PlanningConsistencyMsgData_consistent_state_size consistent_lengths(::lll_rdm_msgs::msg::PlanningConsistencyMsgData::_consistent_lengths_type arg)
  {
    msg_.consistent_lengths = std::move(arg);
    return Init_PlanningConsistencyMsgData_consistent_state_size(msg_);
  }

private:
  ::lll_rdm_msgs::msg::PlanningConsistencyMsgData msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::lll_rdm_msgs::msg::PlanningConsistencyMsgData>()
{
  return lll_rdm_msgs::msg::builder::Init_PlanningConsistencyMsgData_consistent_lengths();
}

}  // namespace lll_rdm_msgs

#endif  // LLL_RDM_MSGS__MSG__DETAIL__PLANNING_CONSISTENCY_MSG_DATA__BUILDER_HPP_
