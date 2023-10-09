// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from lll_rdm_msgs:msg/IncidentLogMsgData.idl
// generated code does not contain a copyright notice

#ifndef LLL_RDM_MSGS__MSG__DETAIL__INCIDENT_LOG_MSG_DATA__FUNCTIONS_H_
#define LLL_RDM_MSGS__MSG__DETAIL__INCIDENT_LOG_MSG_DATA__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "lll_rdm_msgs/msg/rosidl_generator_c__visibility_control.h"

#include "lll_rdm_msgs/msg/detail/incident_log_msg_data__struct.h"

/// Initialize msg/IncidentLogMsgData message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * lll_rdm_msgs__msg__IncidentLogMsgData
 * )) before or use
 * lll_rdm_msgs__msg__IncidentLogMsgData__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_lll_rdm_msgs
bool
lll_rdm_msgs__msg__IncidentLogMsgData__init(lll_rdm_msgs__msg__IncidentLogMsgData * msg);

/// Finalize msg/IncidentLogMsgData message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_lll_rdm_msgs
void
lll_rdm_msgs__msg__IncidentLogMsgData__fini(lll_rdm_msgs__msg__IncidentLogMsgData * msg);

/// Create msg/IncidentLogMsgData message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * lll_rdm_msgs__msg__IncidentLogMsgData__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_lll_rdm_msgs
lll_rdm_msgs__msg__IncidentLogMsgData *
lll_rdm_msgs__msg__IncidentLogMsgData__create();

/// Destroy msg/IncidentLogMsgData message.
/**
 * It calls
 * lll_rdm_msgs__msg__IncidentLogMsgData__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_lll_rdm_msgs
void
lll_rdm_msgs__msg__IncidentLogMsgData__destroy(lll_rdm_msgs__msg__IncidentLogMsgData * msg);

/// Check for msg/IncidentLogMsgData message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_lll_rdm_msgs
bool
lll_rdm_msgs__msg__IncidentLogMsgData__are_equal(const lll_rdm_msgs__msg__IncidentLogMsgData * lhs, const lll_rdm_msgs__msg__IncidentLogMsgData * rhs);

/// Copy a msg/IncidentLogMsgData message.
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
lll_rdm_msgs__msg__IncidentLogMsgData__copy(
  const lll_rdm_msgs__msg__IncidentLogMsgData * input,
  lll_rdm_msgs__msg__IncidentLogMsgData * output);

/// Initialize array of msg/IncidentLogMsgData messages.
/**
 * It allocates the memory for the number of elements and calls
 * lll_rdm_msgs__msg__IncidentLogMsgData__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_lll_rdm_msgs
bool
lll_rdm_msgs__msg__IncidentLogMsgData__Sequence__init(lll_rdm_msgs__msg__IncidentLogMsgData__Sequence * array, size_t size);

/// Finalize array of msg/IncidentLogMsgData messages.
/**
 * It calls
 * lll_rdm_msgs__msg__IncidentLogMsgData__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_lll_rdm_msgs
void
lll_rdm_msgs__msg__IncidentLogMsgData__Sequence__fini(lll_rdm_msgs__msg__IncidentLogMsgData__Sequence * array);

/// Create array of msg/IncidentLogMsgData messages.
/**
 * It allocates the memory for the array and calls
 * lll_rdm_msgs__msg__IncidentLogMsgData__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_lll_rdm_msgs
lll_rdm_msgs__msg__IncidentLogMsgData__Sequence *
lll_rdm_msgs__msg__IncidentLogMsgData__Sequence__create(size_t size);

/// Destroy array of msg/IncidentLogMsgData messages.
/**
 * It calls
 * lll_rdm_msgs__msg__IncidentLogMsgData__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_lll_rdm_msgs
void
lll_rdm_msgs__msg__IncidentLogMsgData__Sequence__destroy(lll_rdm_msgs__msg__IncidentLogMsgData__Sequence * array);

/// Check for msg/IncidentLogMsgData message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_lll_rdm_msgs
bool
lll_rdm_msgs__msg__IncidentLogMsgData__Sequence__are_equal(const lll_rdm_msgs__msg__IncidentLogMsgData__Sequence * lhs, const lll_rdm_msgs__msg__IncidentLogMsgData__Sequence * rhs);

/// Copy an array of msg/IncidentLogMsgData messages.
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
lll_rdm_msgs__msg__IncidentLogMsgData__Sequence__copy(
  const lll_rdm_msgs__msg__IncidentLogMsgData__Sequence * input,
  lll_rdm_msgs__msg__IncidentLogMsgData__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // LLL_RDM_MSGS__MSG__DETAIL__INCIDENT_LOG_MSG_DATA__FUNCTIONS_H_
