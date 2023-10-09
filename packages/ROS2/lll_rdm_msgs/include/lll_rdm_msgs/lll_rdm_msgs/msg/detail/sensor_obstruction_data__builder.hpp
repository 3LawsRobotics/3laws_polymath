// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from lll_rdm_msgs:msg/SensorObstructionData.idl
// generated code does not contain a copyright notice

#ifndef LLL_RDM_MSGS__MSG__DETAIL__SENSOR_OBSTRUCTION_DATA__BUILDER_HPP_
#define LLL_RDM_MSGS__MSG__DETAIL__SENSOR_OBSTRUCTION_DATA__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "lll_rdm_msgs/msg/detail/sensor_obstruction_data__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace lll_rdm_msgs
{

namespace msg
{

namespace builder
{

class Init_SensorObstructionData_type
{
public:
  explicit Init_SensorObstructionData_type(::lll_rdm_msgs::msg::SensorObstructionData & msg)
  : msg_(msg)
  {}
  ::lll_rdm_msgs::msg::SensorObstructionData type(::lll_rdm_msgs::msg::SensorObstructionData::_type_type arg)
  {
    msg_.type = std::move(arg);
    return std::move(msg_);
  }

private:
  ::lll_rdm_msgs::msg::SensorObstructionData msg_;
};

class Init_SensorObstructionData_max_dist
{
public:
  explicit Init_SensorObstructionData_max_dist(::lll_rdm_msgs::msg::SensorObstructionData & msg)
  : msg_(msg)
  {}
  Init_SensorObstructionData_type max_dist(::lll_rdm_msgs::msg::SensorObstructionData::_max_dist_type arg)
  {
    msg_.max_dist = std::move(arg);
    return Init_SensorObstructionData_type(msg_);
  }

private:
  ::lll_rdm_msgs::msg::SensorObstructionData msg_;
};

class Init_SensorObstructionData_min_dist
{
public:
  explicit Init_SensorObstructionData_min_dist(::lll_rdm_msgs::msg::SensorObstructionData & msg)
  : msg_(msg)
  {}
  Init_SensorObstructionData_max_dist min_dist(::lll_rdm_msgs::msg::SensorObstructionData::_min_dist_type arg)
  {
    msg_.min_dist = std::move(arg);
    return Init_SensorObstructionData_max_dist(msg_);
  }

private:
  ::lll_rdm_msgs::msg::SensorObstructionData msg_;
};

class Init_SensorObstructionData_end_angle
{
public:
  explicit Init_SensorObstructionData_end_angle(::lll_rdm_msgs::msg::SensorObstructionData & msg)
  : msg_(msg)
  {}
  Init_SensorObstructionData_min_dist end_angle(::lll_rdm_msgs::msg::SensorObstructionData::_end_angle_type arg)
  {
    msg_.end_angle = std::move(arg);
    return Init_SensorObstructionData_min_dist(msg_);
  }

private:
  ::lll_rdm_msgs::msg::SensorObstructionData msg_;
};

class Init_SensorObstructionData_start_angle
{
public:
  Init_SensorObstructionData_start_angle()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SensorObstructionData_end_angle start_angle(::lll_rdm_msgs::msg::SensorObstructionData::_start_angle_type arg)
  {
    msg_.start_angle = std::move(arg);
    return Init_SensorObstructionData_end_angle(msg_);
  }

private:
  ::lll_rdm_msgs::msg::SensorObstructionData msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::lll_rdm_msgs::msg::SensorObstructionData>()
{
  return lll_rdm_msgs::msg::builder::Init_SensorObstructionData_start_angle();
}

}  // namespace lll_rdm_msgs

#endif  // LLL_RDM_MSGS__MSG__DETAIL__SENSOR_OBSTRUCTION_DATA__BUILDER_HPP_
