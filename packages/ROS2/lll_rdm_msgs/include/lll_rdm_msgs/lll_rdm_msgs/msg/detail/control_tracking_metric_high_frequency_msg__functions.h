// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from lll_rdm_msgs:msg/ControlTrackingMetricHighFrequencyMsg.idl
// generated code does not contain a copyright notice

#ifndef LLL_RDM_MSGS__MSG__DETAIL__CONTROL_TRACKING_METRIC_HIGH_FREQUENCY_MSG__FUNCTIONS_H_
#define LLL_RDM_MSGS__MSG__DETAIL__CONTROL_TRACKING_METRIC_HIGH_FREQUENCY_MSG__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "lll_rdm_msgs/msg/rosidl_generator_c__visibility_control.h"

#include "lll_rdm_msgs/msg/detail/control_tracking_metric_high_frequency_msg__struct.h"

/// Initialize msg/ControlTrackingMetricHighFrequencyMsg message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * lll_rdm_msgs__msg__ControlTrackingMetricHighFrequencyMsg
 * )) before or use
 * lll_rdm_msgs__msg__ControlTrackingMetricHighFrequencyMsg__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_lll_rdm_msgs
bool
lll_rdm_msgs__msg__ControlTrackingMetricHighFrequencyMsg__init(lll_rdm_msgs__msg__ControlTrackingMetricHighFrequencyMsg * msg);

/// Finalize msg/ControlTrackingMetricHighFrequencyMsg message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_lll_rdm_msgs
void
lll_rdm_msgs__msg__ControlTrackingMetricHighFrequencyMsg__fini(lll_rdm_msgs__msg__ControlTrackingMetricHighFrequencyMsg * msg);

/// Create msg/ControlTrackingMetricHighFrequencyMsg message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * lll_rdm_msgs__msg__ControlTrackingMetricHighFrequencyMsg__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_lll_rdm_msgs
lll_rdm_msgs__msg__ControlTrackingMetricHighFrequencyMsg *
lll_rdm_msgs__msg__ControlTrackingMetricHighFrequencyMsg__create();

/// Destroy msg/ControlTrackingMetricHighFrequencyMsg message.
/**
 * It calls
 * lll_rdm_msgs__msg__ControlTrackingMetricHighFrequencyMsg__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_lll_rdm_msgs
void
lll_rdm_msgs__msg__ControlTrackingMetricHighFrequencyMsg__destroy(lll_rdm_msgs__msg__ControlTrackingMetricHighFrequencyMsg * msg);

/// Check for msg/ControlTrackingMetricHighFrequencyMsg message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_lll_rdm_msgs
bool
lll_rdm_msgs__msg__ControlTrackingMetricHighFrequencyMsg__are_equal(const lll_rdm_msgs__msg__ControlTrackingMetricHighFrequencyMsg * lhs, const lll_rdm_msgs__msg__ControlTrackingMetricHighFrequencyMsg * rhs);

/// Copy a msg/ControlTrackingMetricHighFrequencyMsg message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_lll_rdm_msgs
bool
lll_rdm_msgs__msg__ControlTrackingMetricHighFrequencyMsg__copy(
  const lll_rdm_msgs__msg__ControlTrackingMetricHighFrequencyMsg * input,
  lll_rdm_msgs__msg__ControlTrackingMetricHighFrequencyMsg * output);

/// Initialize array of msg/ControlTrackingMetricHighFrequencyMsg messages.
/**
 * It allocates the memory for the number of elements and calls
 * lll_rdm_msgs__msg__ControlTrackingMetricHighFrequencyMsg__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_lll_rdm_msgs
bool
lll_rdm_msgs__msg__ControlTrackingMetricHighFrequencyMsg__Sequence__init(lll_rdm_msgs__msg__ControlTrackingMetricHighFrequencyMsg__Sequence * array, size_t size);

/// Finalize array of msg/ControlTrackingMetricHighFrequencyMsg messages.
/**
 * It calls
 * lll_rdm_msgs__msg__ControlTrackingMetricHighFrequencyMsg__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_lll_rdm_msgs
void
lll_rdm_msgs__msg__ControlTrackingMetricHighFrequencyMsg__Sequence__fini(lll_rdm_msgs__msg__ControlTrackingMetricHighFrequencyMsg__Sequence * array);

/// Create array of msg/ControlTrackingMetricHighFrequencyMsg messages.
/**
 * It allocates the memory for the array and calls
 * lll_rdm_msgs__msg__ControlTrackingMetricHighFrequencyMsg__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_lll_rdm_msgs
lll_rdm_msgs__msg__ControlTrackingMetricHighFrequencyMsg__Sequence *
lll_rdm_msgs__msg__ControlTrackingMetricHighFrequencyMsg__Sequence__create(size_t size);

/// Destroy array of msg/ControlTrackingMetricHighFrequencyMsg messages.
/**
 * It calls
 * lll_rdm_msgs__msg__ControlTrackingMetricHighFrequencyMsg__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_lll_rdm_msgs
void
lll_rdm_msgs__msg__ControlTrackingMetricHighFrequencyMsg__Sequence__destroy(lll_rdm_msgs__msg__ControlTrackingMetricHighFrequencyMsg__Sequence * array);

/// Check for msg/ControlTrackingMetricHighFrequencyMsg message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_lll_rdm_msgs
bool
lll_rdm_msgs__msg__ControlTrackingMetricHighFrequencyMsg__Sequence__are_equal(const lll_rdm_msgs__msg__ControlTrackingMetricHighFrequencyMsg__Sequence * lhs, const lll_rdm_msgs__msg__ControlTrackingMetricHighFrequencyMsg__Sequence * rhs);

/// Copy an array of msg/ControlTrackingMetricHighFrequencyMsg messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_lll_rdm_msgs
bool
lll_rdm_msgs__msg__ControlTrackingMetricHighFrequencyMsg__Sequence__copy(
  const lll_rdm_msgs__msg__ControlTrackingMetricHighFrequencyMsg__Sequence * input,
  lll_rdm_msgs__msg__ControlTrackingMetricHighFrequencyMsg__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // LLL_RDM_MSGS__MSG__DETAIL__CONTROL_TRACKING_METRIC_HIGH_FREQUENCY_MSG__FUNCTIONS_H_
