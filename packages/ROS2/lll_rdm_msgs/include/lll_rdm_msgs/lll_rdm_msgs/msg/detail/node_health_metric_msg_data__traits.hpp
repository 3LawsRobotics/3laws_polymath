// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from lll_rdm_msgs:msg/NodeHealthMetricMsgData.idl
// generated code does not contain a copyright notice

#ifndef LLL_RDM_MSGS__MSG__DETAIL__NODE_HEALTH_METRIC_MSG_DATA__TRAITS_HPP_
#define LLL_RDM_MSGS__MSG__DETAIL__NODE_HEALTH_METRIC_MSG_DATA__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "lll_rdm_msgs/msg/detail/node_health_metric_msg_data__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'topics'
#include "lll_rdm_msgs/msg/detail/node_health_metric_msg_topic_data__traits.hpp"

namespace lll_rdm_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const NodeHealthMetricMsgData & msg,
  std::ostream & out)
{
  out << "{";
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

  // member: ok
  {
    out << "ok: ";
    rosidl_generator_traits::value_to_yaml(msg.ok, out);
    out << ", ";
  }

  // member: topics
  {
    if (msg.topics.size() == 0) {
      out << "topics: []";
    } else {
      out << "topics: [";
      size_t pending_items = msg.topics.size();
      for (auto item : msg.topics) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const NodeHealthMetricMsgData & msg,
  std::ostream & out, size_t indentation = 0)
{
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

  // member: ok
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "ok: ";
    rosidl_generator_traits::value_to_yaml(msg.ok, out);
    out << "\n";
  }

  // member: topics
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.topics.size() == 0) {
      out << "topics: []\n";
    } else {
      out << "topics:\n";
      for (auto item : msg.topics) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const NodeHealthMetricMsgData & msg, bool use_flow_style = false)
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
  const lll_rdm_msgs::msg::NodeHealthMetricMsgData & msg,
  std::ostream & out, size_t indentation = 0)
{
  lll_rdm_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use lll_rdm_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const lll_rdm_msgs::msg::NodeHealthMetricMsgData & msg)
{
  return lll_rdm_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<lll_rdm_msgs::msg::NodeHealthMetricMsgData>()
{
  return "lll_rdm_msgs::msg::NodeHealthMetricMsgData";
}

template<>
inline const char * name<lll_rdm_msgs::msg::NodeHealthMetricMsgData>()
{
  return "lll_rdm_msgs/msg/NodeHealthMetricMsgData";
}

template<>
struct has_fixed_size<lll_rdm_msgs::msg::NodeHealthMetricMsgData>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<lll_rdm_msgs::msg::NodeHealthMetricMsgData>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<lll_rdm_msgs::msg::NodeHealthMetricMsgData>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // LLL_RDM_MSGS__MSG__DETAIL__NODE_HEALTH_METRIC_MSG_DATA__TRAITS_HPP_
