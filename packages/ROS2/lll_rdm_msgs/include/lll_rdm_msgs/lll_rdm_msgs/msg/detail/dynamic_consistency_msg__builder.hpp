// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from lll_rdm_msgs:msg/DynamicConsistencyMsg.idl
// generated code does not contain a copyright notice

#ifndef LLL_RDM_MSGS__MSG__DETAIL__DYNAMIC_CONSISTENCY_MSG__BUILDER_HPP_
#define LLL_RDM_MSGS__MSG__DETAIL__DYNAMIC_CONSISTENCY_MSG__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "lll_rdm_msgs/msg/detail/dynamic_consistency_msg__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace lll_rdm_msgs
{

namespace msg
{

namespace builder
{

class Init_DynamicConsistencyMsg_tags
{
public:
  explicit Init_DynamicConsistencyMsg_tags(::lll_rdm_msgs::msg::DynamicConsistencyMsg & msg)
  : msg_(msg)
  {}
  ::lll_rdm_msgs::msg::DynamicConsistencyMsg tags(::lll_rdm_msgs::msg::DynamicConsistencyMsg::_tags_type arg)
  {
    msg_.tags = std::move(arg);
    return std::move(msg_);
  }

private:
  ::lll_rdm_msgs::msg::DynamicConsistencyMsg msg_;
};

class Init_DynamicConsistencyMsg_data
{
public:
  explicit Init_DynamicConsistencyMsg_data(::lll_rdm_msgs::msg::DynamicConsistencyMsg & msg)
  : msg_(msg)
  {}
  Init_DynamicConsistencyMsg_tags data(::lll_rdm_msgs::msg::DynamicConsistencyMsg::_data_type arg)
  {
    msg_.data = std::move(arg);
    return Init_DynamicConsistencyMsg_tags(msg_);
  }

private:
  ::lll_rdm_msgs::msg::DynamicConsistencyMsg msg_;
};

class Init_DynamicConsistencyMsg_header
{
public:
  Init_DynamicConsistencyMsg_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_DynamicConsistencyMsg_data header(::lll_rdm_msgs::msg::DynamicConsistencyMsg::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_DynamicConsistencyMsg_data(msg_);
  }

private:
  ::lll_rdm_msgs::msg::DynamicConsistencyMsg msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::lll_rdm_msgs::msg::DynamicConsistencyMsg>()
{
  return lll_rdm_msgs::msg::builder::Init_DynamicConsistencyMsg_header();
}

}  // namespace lll_rdm_msgs

#endif  // LLL_RDM_MSGS__MSG__DETAIL__DYNAMIC_CONSISTENCY_MSG__BUILDER_HPP_
