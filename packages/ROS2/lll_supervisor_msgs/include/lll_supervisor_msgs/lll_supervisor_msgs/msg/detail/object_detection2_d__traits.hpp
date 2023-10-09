// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from lll_supervisor_msgs:msg/ObjectDetection2D.idl
// generated code does not contain a copyright notice

#ifndef LLL_SUPERVISOR_MSGS__MSG__DETAIL__OBJECT_DETECTION2_D__TRAITS_HPP_
#define LLL_SUPERVISOR_MSGS__MSG__DETAIL__OBJECT_DETECTION2_D__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "lll_supervisor_msgs/msg/detail/object_detection2_d__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace lll_supervisor_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const ObjectDetection2D & msg,
  std::ostream & out)
{
  out << "{";
  // member: track_id
  {
    out << "track_id: ";
    rosidl_generator_traits::value_to_yaml(msg.track_id, out);
    out << ", ";
  }

  // member: class_name
  {
    out << "class_name: ";
    rosidl_generator_traits::value_to_yaml(msg.class_name, out);
    out << ", ";
  }

  // member: x_center
  {
    out << "x_center: ";
    rosidl_generator_traits::value_to_yaml(msg.x_center, out);
    out << ", ";
  }

  // member: y_center
  {
    out << "y_center: ";
    rosidl_generator_traits::value_to_yaml(msg.y_center, out);
    out << ", ";
  }

  // member: x_radius
  {
    out << "x_radius: ";
    rosidl_generator_traits::value_to_yaml(msg.x_radius, out);
    out << ", ";
  }

  // member: y_radius
  {
    out << "y_radius: ";
    rosidl_generator_traits::value_to_yaml(msg.y_radius, out);
    out << ", ";
  }

  // member: safety_index
  {
    out << "safety_index: ";
    rosidl_generator_traits::value_to_yaml(msg.safety_index, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const ObjectDetection2D & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: track_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "track_id: ";
    rosidl_generator_traits::value_to_yaml(msg.track_id, out);
    out << "\n";
  }

  // member: class_name
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "class_name: ";
    rosidl_generator_traits::value_to_yaml(msg.class_name, out);
    out << "\n";
  }

  // member: x_center
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "x_center: ";
    rosidl_generator_traits::value_to_yaml(msg.x_center, out);
    out << "\n";
  }

  // member: y_center
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "y_center: ";
    rosidl_generator_traits::value_to_yaml(msg.y_center, out);
    out << "\n";
  }

  // member: x_radius
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "x_radius: ";
    rosidl_generator_traits::value_to_yaml(msg.x_radius, out);
    out << "\n";
  }

  // member: y_radius
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "y_radius: ";
    rosidl_generator_traits::value_to_yaml(msg.y_radius, out);
    out << "\n";
  }

  // member: safety_index
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "safety_index: ";
    rosidl_generator_traits::value_to_yaml(msg.safety_index, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const ObjectDetection2D & msg, bool use_flow_style = false)
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
  const lll_supervisor_msgs::msg::ObjectDetection2D & msg,
  std::ostream & out, size_t indentation = 0)
{
  lll_supervisor_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use lll_supervisor_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const lll_supervisor_msgs::msg::ObjectDetection2D & msg)
{
  return lll_supervisor_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<lll_supervisor_msgs::msg::ObjectDetection2D>()
{
  return "lll_supervisor_msgs::msg::ObjectDetection2D";
}

template<>
inline const char * name<lll_supervisor_msgs::msg::ObjectDetection2D>()
{
  return "lll_supervisor_msgs/msg/ObjectDetection2D";
}

template<>
struct has_fixed_size<lll_supervisor_msgs::msg::ObjectDetection2D>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<lll_supervisor_msgs::msg::ObjectDetection2D>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<lll_supervisor_msgs::msg::ObjectDetection2D>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // LLL_SUPERVISOR_MSGS__MSG__DETAIL__OBJECT_DETECTION2_D__TRAITS_HPP_
