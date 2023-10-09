// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from lll_msgs:msg/Float64VectorStamped.idl
// generated code does not contain a copyright notice

#ifndef LLL_MSGS__MSG__DETAIL__FLOAT64_VECTOR_STAMPED__TRAITS_HPP_
#define LLL_MSGS__MSG__DETAIL__FLOAT64_VECTOR_STAMPED__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "lll_msgs/msg/detail/float64_vector_stamped__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"

namespace lll_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const Float64VectorStamped & msg,
  std::ostream & out)
{
  out << "{";
  // member: header
  {
    out << "header: ";
    to_flow_style_yaml(msg.header, out);
    out << ", ";
  }

  // member: data
  {
    if (msg.data.size() == 0) {
      out << "data: []";
    } else {
      out << "data: [";
      size_t pending_items = msg.data.size();
      for (auto item : msg.data) {
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
  const Float64VectorStamped & msg,
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

  // member: data
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.data.size() == 0) {
      out << "data: []\n";
    } else {
      out << "data:\n";
      for (auto item : msg.data) {
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

inline std::string to_yaml(const Float64VectorStamped & msg, bool use_flow_style = false)
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
  const lll_msgs::msg::Float64VectorStamped & msg,
  std::ostream & out, size_t indentation = 0)
{
  lll_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use lll_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const lll_msgs::msg::Float64VectorStamped & msg)
{
  return lll_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<lll_msgs::msg::Float64VectorStamped>()
{
  return "lll_msgs::msg::Float64VectorStamped";
}

template<>
inline const char * name<lll_msgs::msg::Float64VectorStamped>()
{
  return "lll_msgs/msg/Float64VectorStamped";
}

template<>
struct has_fixed_size<lll_msgs::msg::Float64VectorStamped>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<lll_msgs::msg::Float64VectorStamped>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<lll_msgs::msg::Float64VectorStamped>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // LLL_MSGS__MSG__DETAIL__FLOAT64_VECTOR_STAMPED__TRAITS_HPP_
