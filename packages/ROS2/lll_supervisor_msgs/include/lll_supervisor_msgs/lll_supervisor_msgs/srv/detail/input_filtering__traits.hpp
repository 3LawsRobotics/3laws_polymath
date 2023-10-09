// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from lll_supervisor_msgs:srv/InputFiltering.idl
// generated code does not contain a copyright notice

#ifndef LLL_SUPERVISOR_MSGS__SRV__DETAIL__INPUT_FILTERING__TRAITS_HPP_
#define LLL_SUPERVISOR_MSGS__SRV__DETAIL__INPUT_FILTERING__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "lll_supervisor_msgs/srv/detail/input_filtering__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'input_desired'
#include "lll_msgs/msg/detail/float64_vector_stamped__traits.hpp"

namespace lll_supervisor_msgs
{

namespace srv
{

inline void to_flow_style_yaml(
  const InputFiltering_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: input_desired
  {
    out << "input_desired: ";
    to_flow_style_yaml(msg.input_desired, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const InputFiltering_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: input_desired
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "input_desired:\n";
    to_block_style_yaml(msg.input_desired, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const InputFiltering_Request & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace lll_supervisor_msgs

namespace rosidl_generator_traits
{

[[deprecated("use lll_supervisor_msgs::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const lll_supervisor_msgs::srv::InputFiltering_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  lll_supervisor_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use lll_supervisor_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const lll_supervisor_msgs::srv::InputFiltering_Request & msg)
{
  return lll_supervisor_msgs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<lll_supervisor_msgs::srv::InputFiltering_Request>()
{
  return "lll_supervisor_msgs::srv::InputFiltering_Request";
}

template<>
inline const char * name<lll_supervisor_msgs::srv::InputFiltering_Request>()
{
  return "lll_supervisor_msgs/srv/InputFiltering_Request";
}

template<>
struct has_fixed_size<lll_supervisor_msgs::srv::InputFiltering_Request>
  : std::integral_constant<bool, has_fixed_size<lll_msgs::msg::Float64VectorStamped>::value> {};

template<>
struct has_bounded_size<lll_supervisor_msgs::srv::InputFiltering_Request>
  : std::integral_constant<bool, has_bounded_size<lll_msgs::msg::Float64VectorStamped>::value> {};

template<>
struct is_message<lll_supervisor_msgs::srv::InputFiltering_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'res'
#include "lll_supervisor_msgs/msg/detail/input_filtering_result__traits.hpp"

namespace lll_supervisor_msgs
{

namespace srv
{

inline void to_flow_style_yaml(
  const InputFiltering_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: ready
  {
    out << "ready: ";
    rosidl_generator_traits::value_to_yaml(msg.ready, out);
    out << ", ";
  }

  // member: res
  {
    out << "res: ";
    to_flow_style_yaml(msg.res, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const InputFiltering_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: ready
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "ready: ";
    rosidl_generator_traits::value_to_yaml(msg.ready, out);
    out << "\n";
  }

  // member: res
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "res:\n";
    to_block_style_yaml(msg.res, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const InputFiltering_Response & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace lll_supervisor_msgs

namespace rosidl_generator_traits
{

[[deprecated("use lll_supervisor_msgs::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const lll_supervisor_msgs::srv::InputFiltering_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  lll_supervisor_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use lll_supervisor_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const lll_supervisor_msgs::srv::InputFiltering_Response & msg)
{
  return lll_supervisor_msgs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<lll_supervisor_msgs::srv::InputFiltering_Response>()
{
  return "lll_supervisor_msgs::srv::InputFiltering_Response";
}

template<>
inline const char * name<lll_supervisor_msgs::srv::InputFiltering_Response>()
{
  return "lll_supervisor_msgs/srv/InputFiltering_Response";
}

template<>
struct has_fixed_size<lll_supervisor_msgs::srv::InputFiltering_Response>
  : std::integral_constant<bool, has_fixed_size<lll_supervisor_msgs::msg::InputFilteringResult>::value> {};

template<>
struct has_bounded_size<lll_supervisor_msgs::srv::InputFiltering_Response>
  : std::integral_constant<bool, has_bounded_size<lll_supervisor_msgs::msg::InputFilteringResult>::value> {};

template<>
struct is_message<lll_supervisor_msgs::srv::InputFiltering_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<lll_supervisor_msgs::srv::InputFiltering>()
{
  return "lll_supervisor_msgs::srv::InputFiltering";
}

template<>
inline const char * name<lll_supervisor_msgs::srv::InputFiltering>()
{
  return "lll_supervisor_msgs/srv/InputFiltering";
}

template<>
struct has_fixed_size<lll_supervisor_msgs::srv::InputFiltering>
  : std::integral_constant<
    bool,
    has_fixed_size<lll_supervisor_msgs::srv::InputFiltering_Request>::value &&
    has_fixed_size<lll_supervisor_msgs::srv::InputFiltering_Response>::value
  >
{
};

template<>
struct has_bounded_size<lll_supervisor_msgs::srv::InputFiltering>
  : std::integral_constant<
    bool,
    has_bounded_size<lll_supervisor_msgs::srv::InputFiltering_Request>::value &&
    has_bounded_size<lll_supervisor_msgs::srv::InputFiltering_Response>::value
  >
{
};

template<>
struct is_service<lll_supervisor_msgs::srv::InputFiltering>
  : std::true_type
{
};

template<>
struct is_service_request<lll_supervisor_msgs::srv::InputFiltering_Request>
  : std::true_type
{
};

template<>
struct is_service_response<lll_supervisor_msgs::srv::InputFiltering_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // LLL_SUPERVISOR_MSGS__SRV__DETAIL__INPUT_FILTERING__TRAITS_HPP_
