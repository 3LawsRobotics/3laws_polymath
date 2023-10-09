// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from lll_supervisor_msgs:msg/InputConstraints.idl
// generated code does not contain a copyright notice

#ifndef LLL_SUPERVISOR_MSGS__MSG__DETAIL__INPUT_CONSTRAINTS__TRAITS_HPP_
#define LLL_SUPERVISOR_MSGS__MSG__DETAIL__INPUT_CONSTRAINTS__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "lll_supervisor_msgs/msg/detail/input_constraints__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace lll_supervisor_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const InputConstraints & msg,
  std::ostream & out)
{
  out << "{";
  // member: nu
  {
    out << "nu: ";
    rosidl_generator_traits::value_to_yaml(msg.nu, out);
    out << ", ";
  }

  // member: n_cstr
  {
    out << "n_cstr: ";
    rosidl_generator_traits::value_to_yaml(msg.n_cstr, out);
    out << ", ";
  }

  // member: lb
  {
    if (msg.lb.size() == 0) {
      out << "lb: []";
    } else {
      out << "lb: [";
      size_t pending_items = msg.lb.size();
      for (auto item : msg.lb) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: m
  {
    if (msg.m.size() == 0) {
      out << "m: []";
    } else {
      out << "m: [";
      size_t pending_items = msg.m.size();
      for (auto item : msg.m) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: ub
  {
    if (msg.ub.size() == 0) {
      out << "ub: []";
    } else {
      out << "ub: [";
      size_t pending_items = msg.ub.size();
      for (auto item : msg.ub) {
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
  const InputConstraints & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: nu
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "nu: ";
    rosidl_generator_traits::value_to_yaml(msg.nu, out);
    out << "\n";
  }

  // member: n_cstr
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "n_cstr: ";
    rosidl_generator_traits::value_to_yaml(msg.n_cstr, out);
    out << "\n";
  }

  // member: lb
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.lb.size() == 0) {
      out << "lb: []\n";
    } else {
      out << "lb:\n";
      for (auto item : msg.lb) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: m
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.m.size() == 0) {
      out << "m: []\n";
    } else {
      out << "m:\n";
      for (auto item : msg.m) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: ub
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.ub.size() == 0) {
      out << "ub: []\n";
    } else {
      out << "ub:\n";
      for (auto item : msg.ub) {
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

inline std::string to_yaml(const InputConstraints & msg, bool use_flow_style = false)
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
  const lll_supervisor_msgs::msg::InputConstraints & msg,
  std::ostream & out, size_t indentation = 0)
{
  lll_supervisor_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use lll_supervisor_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const lll_supervisor_msgs::msg::InputConstraints & msg)
{
  return lll_supervisor_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<lll_supervisor_msgs::msg::InputConstraints>()
{
  return "lll_supervisor_msgs::msg::InputConstraints";
}

template<>
inline const char * name<lll_supervisor_msgs::msg::InputConstraints>()
{
  return "lll_supervisor_msgs/msg/InputConstraints";
}

template<>
struct has_fixed_size<lll_supervisor_msgs::msg::InputConstraints>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<lll_supervisor_msgs::msg::InputConstraints>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<lll_supervisor_msgs::msg::InputConstraints>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // LLL_SUPERVISOR_MSGS__MSG__DETAIL__INPUT_CONSTRAINTS__TRAITS_HPP_
