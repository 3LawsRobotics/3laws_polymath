// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from lll_msgs:msg/Trajectory.idl
// generated code does not contain a copyright notice

#ifndef LLL_MSGS__MSG__DETAIL__TRAJECTORY__TRAITS_HPP_
#define LLL_MSGS__MSG__DETAIL__TRAJECTORY__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "lll_msgs/msg/detail/trajectory__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"

namespace lll_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const Trajectory & msg,
  std::ostream & out)
{
  out << "{";
  // member: header
  {
    out << "header: ";
    to_flow_style_yaml(msg.header, out);
    out << ", ";
  }

  // member: nx
  {
    out << "nx: ";
    rosidl_generator_traits::value_to_yaml(msg.nx, out);
    out << ", ";
  }

  // member: nu
  {
    out << "nu: ";
    rosidl_generator_traits::value_to_yaml(msg.nu, out);
    out << ", ";
  }

  // member: length
  {
    out << "length: ";
    rosidl_generator_traits::value_to_yaml(msg.length, out);
    out << ", ";
  }

  // member: times
  {
    if (msg.times.size() == 0) {
      out << "times: []";
    } else {
      out << "times: [";
      size_t pending_items = msg.times.size();
      for (auto item : msg.times) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: states
  {
    if (msg.states.size() == 0) {
      out << "states: []";
    } else {
      out << "states: [";
      size_t pending_items = msg.states.size();
      for (auto item : msg.states) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: inputs
  {
    if (msg.inputs.size() == 0) {
      out << "inputs: []";
    } else {
      out << "inputs: [";
      size_t pending_items = msg.inputs.size();
      for (auto item : msg.inputs) {
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
  const Trajectory & msg,
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

  // member: nx
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "nx: ";
    rosidl_generator_traits::value_to_yaml(msg.nx, out);
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

  // member: length
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "length: ";
    rosidl_generator_traits::value_to_yaml(msg.length, out);
    out << "\n";
  }

  // member: times
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.times.size() == 0) {
      out << "times: []\n";
    } else {
      out << "times:\n";
      for (auto item : msg.times) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: states
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.states.size() == 0) {
      out << "states: []\n";
    } else {
      out << "states:\n";
      for (auto item : msg.states) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: inputs
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.inputs.size() == 0) {
      out << "inputs: []\n";
    } else {
      out << "inputs:\n";
      for (auto item : msg.inputs) {
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

inline std::string to_yaml(const Trajectory & msg, bool use_flow_style = false)
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

}  // namespace lll_msgs

namespace rosidl_generator_traits
{

[[deprecated("use lll_msgs::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const lll_msgs::msg::Trajectory & msg,
  std::ostream & out, size_t indentation = 0)
{
  lll_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use lll_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const lll_msgs::msg::Trajectory & msg)
{
  return lll_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<lll_msgs::msg::Trajectory>()
{
  return "lll_msgs::msg::Trajectory";
}

template<>
inline const char * name<lll_msgs::msg::Trajectory>()
{
  return "lll_msgs/msg/Trajectory";
}

template<>
struct has_fixed_size<lll_msgs::msg::Trajectory>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<lll_msgs::msg::Trajectory>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<lll_msgs::msg::Trajectory>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // LLL_MSGS__MSG__DETAIL__TRAJECTORY__TRAITS_HPP_
