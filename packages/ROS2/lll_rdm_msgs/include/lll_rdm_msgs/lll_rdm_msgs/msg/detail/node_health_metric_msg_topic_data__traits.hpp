// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from lll_rdm_msgs:msg/NodeHealthMetricMsgTopicData.idl
// generated code does not contain a copyright notice

#ifndef LLL_RDM_MSGS__MSG__DETAIL__NODE_HEALTH_METRIC_MSG_TOPIC_DATA__TRAITS_HPP_
#define LLL_RDM_MSGS__MSG__DETAIL__NODE_HEALTH_METRIC_MSG_TOPIC_DATA__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "lll_rdm_msgs/msg/detail/node_health_metric_msg_topic_data__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'sender_rate'
// Member 'receiver_rate'
// Member 'delay'
#include "lll_rdm_msgs/msg/detail/signal_average_msg_data__traits.hpp"

namespace lll_rdm_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const NodeHealthMetricMsgTopicData & msg,
  std::ostream & out)
{
  out << "{";
  // member: topic_id
  {
    out << "topic_id: ";
    rosidl_generator_traits::value_to_yaml(msg.topic_id, out);
    out << ", ";
  }

  // member: timeout
  {
    out << "timeout: ";
    rosidl_generator_traits::value_to_yaml(msg.timeout, out);
    out << ", ";
  }

  // member: time_since_last_msg
  {
    out << "time_since_last_msg: ";
    rosidl_generator_traits::value_to_yaml(msg.time_since_last_msg, out);
    out << ", ";
  }

  // member: sender_rate
  {
    out << "sender_rate: ";
    to_flow_style_yaml(msg.sender_rate, out);
    out << ", ";
  }

  // member: receiver_rate
  {
    out << "receiver_rate: ";
    to_flow_style_yaml(msg.receiver_rate, out);
    out << ", ";
  }

  // member: delay
  {
    out << "delay: ";
    to_flow_style_yaml(msg.delay, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const NodeHealthMetricMsgTopicData & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: topic_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "topic_id: ";
    rosidl_generator_traits::value_to_yaml(msg.topic_id, out);
    out << "\n";
  }

  // member: timeout
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "timeout: ";
    rosidl_generator_traits::value_to_yaml(msg.timeout, out);
    out << "\n";
  }

  // member: time_since_last_msg
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "time_since_last_msg: ";
    rosidl_generator_traits::value_to_yaml(msg.time_since_last_msg, out);
    out << "\n";
  }

  // member: sender_rate
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "sender_rate:\n";
    to_block_style_yaml(msg.sender_rate, out, indentation + 2);
  }

  // member: receiver_rate
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "receiver_rate:\n";
    to_block_style_yaml(msg.receiver_rate, out, indentation + 2);
  }

  // member: delay
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "delay:\n";
    to_block_style_yaml(msg.delay, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const NodeHealthMetricMsgTopicData & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace msg

}  // namespace lll_rdm_msgs

namespace rosidl_generator_traits
{

[[deprecated("use lll_rdm_msgs::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const lll_rdm_msgs::msg::NodeHealthMetricMsgTopicData & msg,
  std::ostream & out, size_t indentation = 0)
{
  lll_rdm_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use lll_rdm_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const lll_rdm_msgs::msg::NodeHealthMetricMsgTopicData & msg)
{
  return lll_rdm_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<lll_rdm_msgs::msg::NodeHealthMetricMsgTopicData>()
{
  return "lll_rdm_msgs::msg::NodeHealthMetricMsgTopicData";
}

template<>
inline const char * name<lll_rdm_msgs::msg::NodeHealthMetricMsgTopicData>()
{
  return "lll_rdm_msgs/msg/NodeHealthMetricMsgTopicData";
}

template<>
struct has_fixed_size<lll_rdm_msgs::msg::NodeHealthMetricMsgTopicData>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<lll_rdm_msgs::msg::NodeHealthMetricMsgTopicData>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<lll_rdm_msgs::msg::NodeHealthMetricMsgTopicData>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // LLL_RDM_MSGS__MSG__DETAIL__NODE_HEALTH_METRIC_MSG_TOPIC_DATA__TRAITS_HPP_
