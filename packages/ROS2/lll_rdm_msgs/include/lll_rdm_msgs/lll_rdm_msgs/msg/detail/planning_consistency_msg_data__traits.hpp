// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from lll_rdm_msgs:msg/PlanningConsistencyMsgData.idl
// generated code does not contain a copyright notice

#ifndef LLL_RDM_MSGS__MSG__DETAIL__PLANNING_CONSISTENCY_MSG_DATA__TRAITS_HPP_
#define LLL_RDM_MSGS__MSG__DETAIL__PLANNING_CONSISTENCY_MSG_DATA__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "lll_rdm_msgs/msg/detail/planning_consistency_msg_data__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace lll_rdm_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const PlanningConsistencyMsgData & msg,
  std::ostream & out)
{
  out << "{";
  // member: consistent_lengths
  {
    out << "consistent_lengths: ";
    rosidl_generator_traits::value_to_yaml(msg.consistent_lengths, out);
    out << ", ";
  }

  // member: consistent_state_size
  {
    out << "consistent_state_size: ";
    rosidl_generator_traits::value_to_yaml(msg.consistent_state_size, out);
    out << ", ";
  }

  // member: consistent_input_size
  {
    out << "consistent_input_size: ";
    rosidl_generator_traits::value_to_yaml(msg.consistent_input_size, out);
    out << ", ";
  }

  // member: strictly_sorted_time
  {
    out << "strictly_sorted_time: ";
    rosidl_generator_traits::value_to_yaml(msg.strictly_sorted_time, out);
    out << ", ";
  }

  // member: acceleration_inconsistency
  {
    out << "acceleration_inconsistency: ";
    rosidl_generator_traits::value_to_yaml(msg.acceleration_inconsistency, out);
    out << ", ";
  }

  // member: acceleration_inconsistency_values
  {
    if (msg.acceleration_inconsistency_values.size() == 0) {
      out << "acceleration_inconsistency_values: []";
    } else {
      out << "acceleration_inconsistency_values: [";
      size_t pending_items = msg.acceleration_inconsistency_values.size();
      for (auto item : msg.acceleration_inconsistency_values) {
        rosidl_generator_traits::value_to_yaml(item, out);
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
  const PlanningConsistencyMsgData & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: consistent_lengths
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "consistent_lengths: ";
    rosidl_generator_traits::value_to_yaml(msg.consistent_lengths, out);
    out << "\n";
  }

  // member: consistent_state_size
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "consistent_state_size: ";
    rosidl_generator_traits::value_to_yaml(msg.consistent_state_size, out);
    out << "\n";
  }

  // member: consistent_input_size
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "consistent_input_size: ";
    rosidl_generator_traits::value_to_yaml(msg.consistent_input_size, out);
    out << "\n";
  }

  // member: strictly_sorted_time
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "strictly_sorted_time: ";
    rosidl_generator_traits::value_to_yaml(msg.strictly_sorted_time, out);
    out << "\n";
  }

  // member: acceleration_inconsistency
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "acceleration_inconsistency: ";
    rosidl_generator_traits::value_to_yaml(msg.acceleration_inconsistency, out);
    out << "\n";
  }

  // member: acceleration_inconsistency_values
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.acceleration_inconsistency_values.size() == 0) {
      out << "acceleration_inconsistency_values: []\n";
    } else {
      out << "acceleration_inconsistency_values:\n";
      for (auto item : msg.acceleration_inconsistency_values) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const PlanningConsistencyMsgData & msg, bool use_flow_style = false)
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
  const lll_rdm_msgs::msg::PlanningConsistencyMsgData & msg,
  std::ostream & out, size_t indentation = 0)
{
  lll_rdm_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use lll_rdm_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const lll_rdm_msgs::msg::PlanningConsistencyMsgData & msg)
{
  return lll_rdm_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<lll_rdm_msgs::msg::PlanningConsistencyMsgData>()
{
  return "lll_rdm_msgs::msg::PlanningConsistencyMsgData";
}

template<>
inline const char * name<lll_rdm_msgs::msg::PlanningConsistencyMsgData>()
{
  return "lll_rdm_msgs/msg/PlanningConsistencyMsgData";
}

template<>
struct has_fixed_size<lll_rdm_msgs::msg::PlanningConsistencyMsgData>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<lll_rdm_msgs::msg::PlanningConsistencyMsgData>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<lll_rdm_msgs::msg::PlanningConsistencyMsgData>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // LLL_RDM_MSGS__MSG__DETAIL__PLANNING_CONSISTENCY_MSG_DATA__TRAITS_HPP_
