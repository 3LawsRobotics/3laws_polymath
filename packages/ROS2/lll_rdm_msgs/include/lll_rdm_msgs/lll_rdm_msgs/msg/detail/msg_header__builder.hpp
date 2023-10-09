// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from lll_rdm_msgs:msg/MsgHeader.idl
// generated code does not contain a copyright notice

#ifndef LLL_RDM_MSGS__MSG__DETAIL__MSG_HEADER__BUILDER_HPP_
#define LLL_RDM_MSGS__MSG__DETAIL__MSG_HEADER__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "lll_rdm_msgs/msg/detail/msg_header__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace lll_rdm_msgs
{

namespace msg
{

namespace builder
{

class Init_MsgHeader_sender_id
{
public:
  explicit Init_MsgHeader_sender_id(::lll_rdm_msgs::msg::MsgHeader & msg)
  : msg_(msg)
  {}
  ::lll_rdm_msgs::msg::MsgHeader sender_id(::lll_rdm_msgs::msg::MsgHeader::_sender_id_type arg)
  {
    msg_.sender_id = std::move(arg);
    return std::move(msg_);
  }

private:
  ::lll_rdm_msgs::msg::MsgHeader msg_;
};

class Init_MsgHeader_stamp
{
public:
  Init_MsgHeader_stamp()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_MsgHeader_sender_id stamp(::lll_rdm_msgs::msg::MsgHeader::_stamp_type arg)
  {
    msg_.stamp = std::move(arg);
    return Init_MsgHeader_sender_id(msg_);
  }

private:
  ::lll_rdm_msgs::msg::MsgHeader msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::lll_rdm_msgs::msg::MsgHeader>()
{
  return lll_rdm_msgs::msg::builder::Init_MsgHeader_stamp();
}

}  // namespace lll_rdm_msgs

#endif  // LLL_RDM_MSGS__MSG__DETAIL__MSG_HEADER__BUILDER_HPP_
