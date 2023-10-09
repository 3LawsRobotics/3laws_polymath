// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from lll_msgs:msg/Float64VectorStamped.idl
// generated code does not contain a copyright notice

#ifndef LLL_MSGS__MSG__DETAIL__FLOAT64_VECTOR_STAMPED__BUILDER_HPP_
#define LLL_MSGS__MSG__DETAIL__FLOAT64_VECTOR_STAMPED__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "lll_msgs/msg/detail/float64_vector_stamped__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace lll_msgs
{

namespace msg
{

namespace builder
{

class Init_Float64VectorStamped_data
{
public:
  explicit Init_Float64VectorStamped_data(::lll_msgs::msg::Float64VectorStamped & msg)
  : msg_(msg)
  {}
  ::lll_msgs::msg::Float64VectorStamped data(::lll_msgs::msg::Float64VectorStamped::_data_type arg)
  {
    msg_.data = std::move(arg);
    return std::move(msg_);
  }

private:
  ::lll_msgs::msg::Float64VectorStamped msg_;
};

class Init_Float64VectorStamped_header
{
public:
  Init_Float64VectorStamped_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Float64VectorStamped_data header(::lll_msgs::msg::Float64VectorStamped::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_Float64VectorStamped_data(msg_);
  }

private:
  ::lll_msgs::msg::Float64VectorStamped msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::lll_msgs::msg::Float64VectorStamped>()
{
  return lll_msgs::msg::builder::Init_Float64VectorStamped_header();
}

}  // namespace lll_msgs

#endif  // LLL_MSGS__MSG__DETAIL__FLOAT64_VECTOR_STAMPED__BUILDER_HPP_
