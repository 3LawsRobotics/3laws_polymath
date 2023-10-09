// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from lll_rdm_msgs:msg/PlanningConsistencyTrackingErrorHighFrequencyMsgData.idl
// generated code does not contain a copyright notice

#ifndef LLL_RDM_MSGS__MSG__DETAIL__PLANNING_CONSISTENCY_TRACKING_ERROR_HIGH_FREQUENCY_MSG_DATA__TRAITS_HPP_
#define LLL_RDM_MSGS__MSG__DETAIL__PLANNING_CONSISTENCY_TRACKING_ERROR_HIGH_FREQUENCY_MSG_DATA__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "lll_rdm_msgs/msg/detail/planning_consistency_tracking_error_high_frequency_msg_data__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace lll_rdm_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const PlanningConsistencyTrackingErrorHighFrequencyMsgData & msg,
  std::ostream & out)
{
  out << "{";
  // member: tracking_error
  {
    if (msg.tracking_error.size() == 0) {
      out << "tracking_error: []";
    } else {
      out << "tracking_error: [";
      size_t pending_items = msg.tracking_error.size();
      for (auto item : msg.tracking_error) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: desired
  {
    if (msg.desired.size() == 0) {
      out << "desired: []";
    } else {
      out << "desired: [";
      size_t pending_items = msg.desired.size();
      for (auto item : msg.desired) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: actual
  {
    if (msg.actual.size() == 0) {
      out << "actual: []";
    } else {
      out << "actual: [";
      size_t pending_items = msg.actual.size();
      for (auto item : msg.actual) {
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
  const PlanningConsistencyTrackingErrorHighFrequencyMsgData & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: tracking_error
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.tracking_error.size() == 0) {
      out << "tracking_error: []\n";
    } else {
      out << "tracking_error:\n";
      for (auto item : msg.tracking_error) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: desired
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.desired.size() == 0) {
      out << "desired: []\n";
    } else {
      out << "desired:\n";
      for (auto item : msg.desired) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: actual
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.actual.size() == 0) {
      out << "actual: []\n";
    } else {
      out << "actual:\n";
      for (auto item : msg.actual) {
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

inline std::string to_yaml(const PlanningConsistencyTrackingErrorHighFrequencyMsgData & msg, bool use_flow_style = false)
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
  const lll_rdm_msgs::msg::PlanningConsistencyTrackingErrorHighFrequencyMsgData & msg,
  std::ostream & out, size_t indentation = 0)
{
  lll_rdm_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use lll_rdm_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const lll_rdm_msgs::msg::PlanningConsistencyTrackingErrorHighFrequencyMsgData & msg)
{
  return lll_rdm_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<lll_rdm_msgs::msg::PlanningConsistencyTrackingErrorHighFrequencyMsgData>()
{
  return "lll_rdm_msgs::msg::PlanningConsistencyTrackingErrorHighFrequencyMsgData";
}

template<>
inline const char * name<lll_rdm_msgs::msg::PlanningConsistencyTrackingErrorHighFrequencyMsgData>()
{
  return "lll_rdm_msgs/msg/PlanningConsistencyTrackingErrorHighFrequencyMsgData";
}

template<>
struct has_fixed_size<lll_rdm_msgs::msg::PlanningConsistencyTrackingErrorHighFrequencyMsgData>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<lll_rdm_msgs::msg::PlanningConsistencyTrackingErrorHighFrequencyMsgData>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<lll_rdm_msgs::msg::PlanningConsistencyTrackingErrorHighFrequencyMsgData>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // LLL_RDM_MSGS__MSG__DETAIL__PLANNING_CONSISTENCY_TRACKING_ERROR_HIGH_FREQUENCY_MSG_DATA__TRAITS_HPP_
