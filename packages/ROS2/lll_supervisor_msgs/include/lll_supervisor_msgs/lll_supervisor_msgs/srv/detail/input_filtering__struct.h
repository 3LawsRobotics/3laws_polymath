// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from lll_supervisor_msgs:srv/InputFiltering.idl
// generated code does not contain a copyright notice

#ifndef LLL_SUPERVISOR_MSGS__SRV__DETAIL__INPUT_FILTERING__STRUCT_H_
#define LLL_SUPERVISOR_MSGS__SRV__DETAIL__INPUT_FILTERING__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'input_desired'
#include "lll_msgs/msg/detail/float64_vector_stamped__struct.h"

/// Struct defined in srv/InputFiltering in the package lll_supervisor_msgs.
typedef struct lll_supervisor_msgs__srv__InputFiltering_Request
{
  lll_msgs__msg__Float64VectorStamped input_desired;
} lll_supervisor_msgs__srv__InputFiltering_Request;

// Struct for a sequence of lll_supervisor_msgs__srv__InputFiltering_Request.
typedef struct lll_supervisor_msgs__srv__InputFiltering_Request__Sequence
{
  lll_supervisor_msgs__srv__InputFiltering_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} lll_supervisor_msgs__srv__InputFiltering_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'res'
#include "lll_supervisor_msgs/msg/detail/input_filtering_result__struct.h"

/// Struct defined in srv/InputFiltering in the package lll_supervisor_msgs.
typedef struct lll_supervisor_msgs__srv__InputFiltering_Response
{
  bool ready;
  lll_supervisor_msgs__msg__InputFilteringResult res;
} lll_supervisor_msgs__srv__InputFiltering_Response;

// Struct for a sequence of lll_supervisor_msgs__srv__InputFiltering_Response.
typedef struct lll_supervisor_msgs__srv__InputFiltering_Response__Sequence
{
  lll_supervisor_msgs__srv__InputFiltering_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} lll_supervisor_msgs__srv__InputFiltering_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // LLL_SUPERVISOR_MSGS__SRV__DETAIL__INPUT_FILTERING__STRUCT_H_
