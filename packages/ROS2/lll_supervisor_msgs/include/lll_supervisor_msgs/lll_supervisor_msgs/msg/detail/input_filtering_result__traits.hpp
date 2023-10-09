// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from lll_supervisor_msgs:msg/InputFilteringResult.idl
// generated code does not contain a copyright notice

#ifndef LLL_SUPERVISOR_MSGS__MSG__DETAIL__INPUT_FILTERING_RESULT__TRAITS_HPP_
#define LLL_SUPERVISOR_MSGS__MSG__DETAIL__INPUT_FILTERING_RESULT__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "lll_supervisor_msgs/msg/detail/input_filtering_result__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"

namespace lll_supervisor_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const InputFilteringResult & msg,
  std::ostream & out)
{
  out << "{";
  // member: header
  {
    out << "header: ";
    to_flow_style_yaml(msg.header, out);
    out << ", ";
  }

  // member: t_input_desired
  {
    out << "t_input_desired: ";
    rosidl_generator_traits::value_to_yaml(msg.t_input_desired, out);
    out << ", ";
  }

  // member: t_regulation_data
  {
    out << "t_regulation_data: ";
    rosidl_generator_traits::value_to_yaml(msg.t_regulation_data, out);
    out << ", ";
  }

  // member: nu
  {
    out << "nu: ";
    rosidl_generator_traits::value_to_yaml(msg.nu, out);
    out << ", ";
  }

  // member: return_code
  {
    out << "return_code: ";
    rosidl_generator_traits::value_to_yaml(msg.return_code, out);
    out << ", ";
  }

  // member: input_desired
  {
    if (msg.input_desired.size() == 0) {
      out << "input_desired: []";
    } else {
      out << "input_desired: [";
      size_t pending_items = msg.input_desired.size();
      for (auto item : msg.input_desired) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: input_filtered
  {
    if (msg.input_filtered.size() == 0) {
      out << "input_filtered: []";
    } else {
      out << "input_filtered: [";
      size_t pending_items = msg.input_filtered.size();
      for (auto item : msg.input_filtered) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: input_failsafe
  {
    if (msg.input_failsafe.size() == 0) {
      out << "input_failsafe: []";
    } else {
      out << "input_failsafe: [";
      size_t pending_items = msg.input_failsafe.size();
      for (auto item : msg.input_failsafe) {
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
  const InputFilteringResult & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: header
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "header:\n";
    to_block_style_yaml(msg.header, out, indentation + 2);
  }

  // member: t_input_desired
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "t_input_desired: ";
    rosidl_generator_traits::value_to_yaml(msg.t_input_desired, out);
    out << "\n";
  }

  // member: t_regulation_data
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "t_regulation_data: ";
    rosidl_generator_traits::value_to_yaml(msg.t_regulation_data, out);
    out << "\n";
  }

  // member: nu
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "nu: ";
    rosidl_generator_traits::value_to_yaml(msg.nu, out);
    out << "\n";
  }

  // member: return_code
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "return_code: ";
    rosidl_generator_traits::value_to_yaml(msg.return_code, out);
    out << "\n";
  }

  // member: input_desired
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.input_desired.size() == 0) {
      out << "input_desired: []\n";
    } else {
      out << "input_desired:\n";
      for (auto item : msg.input_desired) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: input_filtered
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.input_filtered.size() == 0) {
      out << "input_filtered: []\n";
    } else {
      out << "input_filtered:\n";
      for (auto item : msg.input_filtered) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: input_failsafe
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.input_failsafe.size() == 0) {
      out << "input_failsafe: []\n";
    } else {
      out << "input_failsafe:\n";
      for (auto item : msg.input_failsafe) {
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

inline std::string to_yaml(const InputFilteringResult & msg, bool use_flow_style = false)
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

}  // namespace lll_supervisor_msgs

namespace rosidl_generator_traits
{

[[deprecated("use lll_supervisor_msgs::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const lll_supervisor_msgs::msg::InputFilteringResult & msg,
  std::ostream & out, size_t indentation = 0)
{
  lll_supervisor_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use lll_supervisor_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const lll_supervisor_msgs::msg::InputFilteringResult & msg)
{
  return lll_supervisor_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<lll_supervisor_msgs::msg::InputFilteringResult>()
{
  return "lll_supervisor_msgs::msg::InputFilteringResult";
}

template<>
inline const char * name<lll_supervisor_msgs::msg::InputFilteringResult>()
{
  return "lll_supervisor_msgs/msg/InputFilteringResult";
}

template<>
struct has_fixed_size<lll_supervisor_msgs::msg::InputFilteringResult>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<lll_supervisor_msgs::msg::InputFilteringResult>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<lll_supervisor_msgs::msg::InputFilteringResult>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // LLL_SUPERVISOR_MSGS__MSG__DETAIL__INPUT_FILTERING_RESULT__TRAITS_HPP_
