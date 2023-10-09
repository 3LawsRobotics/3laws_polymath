// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from lll_rdm_msgs:msg/PlanningConsistencyTrackingErrorHighFrequencyMsg.idl
// generated code does not contain a copyright notice

#ifndef LLL_RDM_MSGS__MSG__DETAIL__PLANNING_CONSISTENCY_TRACKING_ERROR_HIGH_FREQUENCY_MSG__FUNCTIONS_H_
#define LLL_RDM_MSGS__MSG__DETAIL__PLANNING_CONSISTENCY_TRACKING_ERROR_HIGH_FREQUENCY_MSG__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "lll_rdm_msgs/msg/rosidl_generator_c__visibility_control.h"

#include "lll_rdm_msgs/msg/detail/planning_consistency_tracking_error_high_frequency_msg__struct.h"

/// Initialize msg/PlanningConsistencyTrackingErrorHighFrequencyMsg message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * lll_rdm_msgs__msg__PlanningConsistencyTrackingErrorHighFrequencyMsg
 * )) before or use
 * lll_rdm_msgs__msg__PlanningConsistencyTrackingErrorHighFrequencyMsg__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_lll_rdm_msgs
bool
lll_rdm_msgs__msg__PlanningConsistencyTrackingErrorHighFrequencyMsg__init(lll_rdm_msgs__msg__PlanningConsistencyTrackingErrorHighFrequencyMsg * msg);

/// Finalize msg/PlanningConsistencyTrackingErrorHighFrequencyMsg message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_lll_rdm_msgs
void
lll_rdm_msgs__msg__PlanningConsistencyTrackingErrorHighFrequencyMsg__fini(lll_rdm_msgs__msg__PlanningConsistencyTrackingErrorHighFrequencyMsg * msg);

/// Create msg/PlanningConsistencyTrackingErrorHighFrequencyMsg message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * lll_rdm_msgs__msg__PlanningConsistencyTrackingErrorHighFrequencyMsg__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_lll_rdm_msgs
lll_rdm_msgs__msg__PlanningConsistencyTrackingErrorHighFrequencyMsg *
lll_rdm_msgs__msg__PlanningConsistencyTrackingErrorHighFrequencyMsg__create();

/// Destroy msg/PlanningConsistencyTrackingErrorHighFrequencyMsg message.
/**
 * It calls
 * lll_rdm_msgs__msg__PlanningConsistencyTrackingErrorHighFrequencyMsg__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_lll_rdm_msgs
void
lll_rdm_msgs__msg__PlanningConsistencyTrackingErrorHighFrequencyMsg__destroy(lll_rdm_msgs__msg__PlanningConsistencyTrackingErrorHighFrequencyMsg * msg);

/// Check for msg/PlanningConsistencyTrackingErrorHighFrequencyMsg message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_lll_rdm_msgs
bool
lll_rdm_msgs__msg__PlanningConsistencyTrackingErrorHighFrequencyMsg__are_equal(const lll_rdm_msgs__msg__PlanningConsistencyTrackingErrorHighFrequencyMsg * lhs, const lll_rdm_msgs__msg__PlanningConsistencyTrackingErrorHighFrequencyMsg * rhs);

/// Copy a msg/PlanningConsistencyTrackingErrorHighFrequencyMsg message.
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
lll_rdm_msgs__msg__PlanningConsistencyTrackingErrorHighFrequencyMsg__copy(
  const lll_rdm_msgs__msg__PlanningConsistencyTrackingErrorHighFrequencyMsg * input,
  lll_rdm_msgs__msg__PlanningConsistencyTrackingErrorHighFrequencyMsg * output);

/// Initialize array of msg/PlanningConsistencyTrackingErrorHighFrequencyMsg messages.
/**
 * It allocates the memory for the number of elements and calls
 * lll_rdm_msgs__msg__PlanningConsistencyTrackingErrorHighFrequencyMsg__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_lll_rdm_msgs
bool
lll_rdm_msgs__msg__PlanningConsistencyTrackingErrorHighFrequencyMsg__Sequence__init(lll_rdm_msgs__msg__PlanningConsistencyTrackingErrorHighFrequencyMsg__Sequence * array, size_t size);

/// Finalize array of msg/PlanningConsistencyTrackingErrorHighFrequencyMsg messages.
/**
 * It calls
 * lll_rdm_msgs__msg__PlanningConsistencyTrackingErrorHighFrequencyMsg__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_lll_rdm_msgs
void
lll_rdm_msgs__msg__PlanningConsistencyTrackingErrorHighFrequencyMsg__Sequence__fini(lll_rdm_msgs__msg__PlanningConsistencyTrackingErrorHighFrequencyMsg__Sequence * array);

/// Create array of msg/PlanningConsistencyTrackingErrorHighFrequencyMsg messages.
/**
 * It allocates the memory for the array and calls
 * lll_rdm_msgs__msg__PlanningConsistencyTrackingErrorHighFrequencyMsg__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_lll_rdm_msgs
lll_rdm_msgs__msg__PlanningConsistencyTrackingErrorHighFrequencyMsg__Sequence *
lll_rdm_msgs__msg__PlanningConsistencyTrackingErrorHighFrequencyMsg__Sequence__create(size_t size);

/// Destroy array of msg/PlanningConsistencyTrackingErrorHighFrequencyMsg messages.
/**
 * It calls
 * lll_rdm_msgs__msg__PlanningConsistencyTrackingErrorHighFrequencyMsg__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_lll_rdm_msgs
void
lll_rdm_msgs__msg__PlanningConsistencyTrackingErrorHighFrequencyMsg__Sequence__destroy(lll_rdm_msgs__msg__PlanningConsistencyTrackingErrorHighFrequencyMsg__Sequence * array);

/// Check for msg/PlanningConsistencyTrackingErrorHighFrequencyMsg message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_lll_rdm_msgs
bool
lll_rdm_msgs__msg__PlanningConsistencyTrackingErrorHighFrequencyMsg__Sequence__are_equal(const lll_rdm_msgs__msg__PlanningConsistencyTrackingErrorHighFrequencyMsg__Sequence * lhs, const lll_rdm_msgs__msg__PlanningConsistencyTrackingErrorHighFrequencyMsg__Sequence * rhs);

/// Copy an array of msg/PlanningConsistencyTrackingErrorHighFrequencyMsg messages.
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
lll_rdm_msgs__msg__PlanningConsistencyTrackingErrorHighFrequencyMsg__Sequence__copy(
  const lll_rdm_msgs__msg__PlanningConsistencyTrackingErrorHighFrequencyMsg__Sequence * input,
  lll_rdm_msgs__msg__PlanningConsistencyTrackingErrorHighFrequencyMsg__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // LLL_RDM_MSGS__MSG__DETAIL__PLANNING_CONSISTENCY_TRACKING_ERROR_HIGH_FREQUENCY_MSG__FUNCTIONS_H_
