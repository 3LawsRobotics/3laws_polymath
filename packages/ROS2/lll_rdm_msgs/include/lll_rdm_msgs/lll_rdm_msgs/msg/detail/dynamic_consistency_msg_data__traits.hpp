// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from lll_rdm_msgs:msg/DynamicConsistencyMsgData.idl
// generated code does not contain a copyright notice

#ifndef LLL_RDM_MSGS__MSG__DETAIL__DYNAMIC_CONSISTENCY_MSG_DATA__TRAITS_HPP_
#define LLL_RDM_MSGS__MSG__DETAIL__DYNAMIC_CONSISTENCY_MSG_DATA__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "lll_rdm_msgs/msg/detail/dynamic_consistency_msg_data__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace lll_rdm_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const DynamicConsistencyMsgData & msg,
  std::ostream & out)
{
  out << "{";
  // member: state_timeout
  {
    out << "state_timeout: ";
    rosidl_generator_traits::value_to_yaml(msg.state_timeout, out);
    out << ", ";
  }

  // member: time_since_last_state_msg
  {
    out << "time_since_last_state_msg: ";
    rosidl_generator_traits::value_to_yaml(msg.time_since_last_state_msg, out);
    out << ", ";
  }

  // member: input_timeout
  {
    out << "input_timeout: ";
    rosidl_generator_traits::value_to_yaml(msg.input_timeout, out);
    out << ", ";
  }

  // member: time_since_last_input_msg
  {
    out << "time_since_last_input_msg: ";
    rosidl_generator_traits::value_to_yaml(msg.time_since_last_input_msg, out);
    out << ", ";
  }

  // member: input_domain_value
  {
    out << "input_domain_value: ";
    rosidl_generator_traits::value_to_yaml(msg.input_domain_value, out);
    out << ", ";
  }

  // member: state_domain_value
  {
    out << "state_domain_value: ";
    rosidl_generator_traits::value_to_yaml(msg.state_domain_value, out);
    out << ", ";
  }

  // member: xdot_difference
  {
    if (msg.xdot_difference.size() == 0) {
      out << "xdot_difference: []";
    } else {
      out << "xdot_difference: [";
      size_t pending_items = msg.xdot_difference.size();
      for (auto item : msg.xdot_difference) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: xdot_difference_pdf_value
  {
    out << "xdot_difference_pdf_value: ";
    rosidl_generator_traits::value_to_yaml(msg.xdot_difference_pdf_value, out);
    out << ", ";
  }

  // member: xdot_difference_pdf_value_normalized
  {
    out << "xdot_difference_pdf_value_normalized: ";
    rosidl_generator_traits::value_to_yaml(msg.xdot_difference_pdf_value_normalized, out);
    out << ", ";
  }

  // member: xdot_difference_norm_1sigma
  {
    out << "xdot_difference_norm_1sigma: ";
    rosidl_generator_traits::value_to_yaml(msg.xdot_difference_norm_1sigma, out);
    out << ", ";
  }

  // member: xdot_difference_norm_2sigma
  {
    out << "xdot_difference_norm_2sigma: ";
    rosidl_generator_traits::value_to_yaml(msg.xdot_difference_norm_2sigma, out);
    out << ", ";
  }

  // member: xdot_difference_norm_3sigma
  {
    out << "xdot_difference_norm_3sigma: ";
    rosidl_generator_traits::value_to_yaml(msg.xdot_difference_norm_3sigma, out);
    out << ", ";
  }

  // member: system_degradation_probability
  {
    out << "system_degradation_probability: ";
    rosidl_generator_traits::value_to_yaml(msg.system_degradation_probability, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const DynamicConsistencyMsgData & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: state_timeout
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "state_timeout: ";
    rosidl_generator_traits::value_to_yaml(msg.state_timeout, out);
    out << "\n";
  }

  // member: time_since_last_state_msg
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "time_since_last_state_msg: ";
    rosidl_generator_traits::value_to_yaml(msg.time_since_last_state_msg, out);
    out << "\n";
  }

  // member: input_timeout
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "input_timeout: ";
    rosidl_generator_traits::value_to_yaml(msg.input_timeout, out);
    out << "\n";
  }

  // member: time_since_last_input_msg
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "time_since_last_input_msg: ";
    rosidl_generator_traits::value_to_yaml(msg.time_since_last_input_msg, out);
    out << "\n";
  }

  // member: input_domain_value
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "input_domain_value: ";
    rosidl_generator_traits::value_to_yaml(msg.input_domain_value, out);
    out << "\n";
  }

  // member: state_domain_value
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "state_domain_value: ";
    rosidl_generator_traits::value_to_yaml(msg.state_domain_value, out);
    out << "\n";
  }

  // member: xdot_difference
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.xdot_difference.size() == 0) {
      out << "xdot_difference: []\n";
    } else {
      out << "xdot_difference:\n";
      for (auto item : msg.xdot_difference) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: xdot_difference_pdf_value
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "xdot_difference_pdf_value: ";
    rosidl_generator_traits::value_to_yaml(msg.xdot_difference_pdf_value, out);
    out << "\n";
  }

  // member: xdot_difference_pdf_value_normalized
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "xdot_difference_pdf_value_normalized: ";
    rosidl_generator_traits::value_to_yaml(msg.xdot_difference_pdf_value_normalized, out);
    out << "\n";
  }

  // member: xdot_difference_norm_1sigma
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "xdot_difference_norm_1sigma: ";
    rosidl_generator_traits::value_to_yaml(msg.xdot_difference_norm_1sigma, out);
    out << "\n";
  }

  // member: xdot_difference_norm_2sigma
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "xdot_difference_norm_2sigma: ";
    rosidl_generator_traits::value_to_yaml(msg.xdot_difference_norm_2sigma, out);
    out << "\n";
  }

  // member: xdot_difference_norm_3sigma
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "xdot_difference_norm_3sigma: ";
    rosidl_generator_traits::value_to_yaml(msg.xdot_difference_norm_3sigma, out);
    out << "\n";
  }

  // member: system_degradation_probability
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "system_degradation_probability: ";
    rosidl_generator_traits::value_to_yaml(msg.system_degradation_probability, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const DynamicConsistencyMsgData & msg, bool use_flow_style = false)
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
  const lll_rdm_msgs::msg::DynamicConsistencyMsgData & msg,
  std::ostream & out, size_t indentation = 0)
{
  lll_rdm_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use lll_rdm_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const lll_rdm_msgs::msg::DynamicConsistencyMsgData & msg)
{
  return lll_rdm_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<lll_rdm_msgs::msg::DynamicConsistencyMsgData>()
{
  return "lll_rdm_msgs::msg::DynamicConsistencyMsgData";
}

template<>
inline const char * name<lll_rdm_msgs::msg::DynamicConsistencyMsgData>()
{
  return "lll_rdm_msgs/msg/DynamicConsistencyMsgData";
}

template<>
struct has_fixed_size<lll_rdm_msgs::msg::DynamicConsistencyMsgData>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<lll_rdm_msgs::msg::DynamicConsistencyMsgData>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<lll_rdm_msgs::msg::DynamicConsistencyMsgData>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // LLL_RDM_MSGS__MSG__DETAIL__DYNAMIC_CONSISTENCY_MSG_DATA__TRAITS_HPP_
