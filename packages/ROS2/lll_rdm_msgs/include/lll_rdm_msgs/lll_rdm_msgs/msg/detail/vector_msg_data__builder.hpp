// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from lll_rdm_msgs:msg/VectorMsgData.idl
// generated code does not contain a copyright notice

#ifndef LLL_RDM_MSGS__MSG__DETAIL__VECTOR_MSG_DATA__BUILDER_HPP_
#define LLL_RDM_MSGS__MSG__DETAIL__VECTOR_MSG_DATA__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "lll_rdm_msgs/msg/detail/vector_msg_data__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace lll_rdm_msgs
{

namespace msg
{

namespace builder
{

class Init_VectorMsgData_values
{
public:
  explicit Init_VectorMsgData_values(::lll_rdm_msgs::msg::VectorMsgData & msg)
  : msg_(msg)
  {}
  ::lll_rdm_msgs::msg::VectorMsgData values(::lll_rdm_msgs::msg::VectorMsgData::_values_type arg)
  {
    msg_.values = std::move(arg);
    return std::move(msg_);
  }

private:
  ::lll_rdm_msgs::msg::VectorMsgData msg_;
};

class Init_VectorMsgData_id
{
public:
  Init_VectorMsgData_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_VectorMsgData_values id(::lll_rdm_msgs::msg::VectorMsgData::_id_type arg)
  {
    msg_.id = std::move(arg);
    return Init_VectorMsgData_values(msg_);
  }

private:
  ::lll_rdm_msgs::msg::VectorMsgData msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::lll_rdm_msgs::msg::VectorMsgData>()
{
  return lll_rdm_msgs::msg::builder::Init_VectorMsgData_id();
}

}  // namespace lll_rdm_msgs

#endif  // LLL_RDM_MSGS__MSG__DETAIL__VECTOR_MSG_DATA__BUILDER_HPP_
