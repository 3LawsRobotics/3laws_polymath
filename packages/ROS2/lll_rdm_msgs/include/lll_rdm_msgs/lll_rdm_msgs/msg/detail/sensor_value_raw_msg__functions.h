// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from lll_rdm_msgs:msg/SensorValueRawMsg.idl
// generated code does not contain a copyright notice

#ifndef LLL_RDM_MSGS__MSG__DETAIL__SENSOR_VALUE_RAW_MSG__FUNCTIONS_H_
#define LLL_RDM_MSGS__MSG__DETAIL__SENSOR_VALUE_RAW_MSG__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "lll_rdm_msgs/msg/rosidl_generator_c__visibility_control.h"

#include "lll_rdm_msgs/msg/detail/sensor_value_raw_msg__struct.h"

/// Initialize msg/SensorValueRawMsg message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * lll_rdm_msgs__msg__SensorValueRawMsg
 * )) before or use
 * lll_rdm_msgs__msg__SensorValueRawMsg__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_lll_rdm_msgs
bool
lll_rdm_msgs__msg__SensorValueRawMsg__init(lll_rdm_msgs__msg__SensorValueRawMsg * msg);

/// Finalize msg/SensorValueRawMsg message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_lll_rdm_msgs
void
lll_rdm_msgs__msg__SensorValueRawMsg__fini(lll_rdm_msgs__msg__SensorValueRawMsg * msg);

/// Create msg/SensorValueRawMsg message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * lll_rdm_msgs__msg__SensorValueRawMsg__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_lll_rdm_msgs
lll_rdm_msgs__msg__SensorValueRawMsg *
lll_rdm_msgs__msg__SensorValueRawMsg__create();

/// Destroy msg/SensorValueRawMsg message.
/**
 * It calls
 * lll_rdm_msgs__msg__SensorValueRawMsg__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_lll_rdm_msgs
void
lll_rdm_msgs__msg__SensorValueRawMsg__destroy(lll_rdm_msgs__msg__SensorValueRawMsg * msg);

/// Check for msg/SensorValueRawMsg message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_lll_rdm_msgs
bool
lll_rdm_msgs__msg__SensorValueRawMsg__are_equal(const lll_rdm_msgs__msg__SensorValueRawMsg * lhs, const lll_rdm_msgs__msg__SensorValueRawMsg * rhs);

/// Copy a msg/SensorValueRawMsg message.
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
lll_rdm_msgs__msg__SensorValueRawMsg__copy(
  const lll_rdm_msgs__msg__SensorValueRawMsg * input,
  lll_rdm_msgs__msg__SensorValueRawMsg * output);

/// Initialize array of msg/SensorValueRawMsg messages.
/**
 * It allocates the memory for the number of elements and calls
 * lll_rdm_msgs__msg__SensorValueRawMsg__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_lll_rdm_msgs
bool
lll_rdm_msgs__msg__SensorValueRawMsg__Sequence__init(lll_rdm_msgs__msg__SensorValueRawMsg__Sequence * array, size_t size);

/// Finalize array of msg/SensorValueRawMsg messages.
/**
 * It calls
 * lll_rdm_msgs__msg__SensorValueRawMsg__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_lll_rdm_msgs
void
lll_rdm_msgs__msg__SensorValueRawMsg__Sequence__fini(lll_rdm_msgs__msg__SensorValueRawMsg__Sequence * array);

/// Create array of msg/SensorValueRawMsg messages.
/**
 * It allocates the memory for the array and calls
 * lll_rdm_msgs__msg__SensorValueRawMsg__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_lll_rdm_msgs
lll_rdm_msgs__msg__SensorValueRawMsg__Sequence *
lll_rdm_msgs__msg__SensorValueRawMsg__Sequence__create(size_t size);

/// Destroy array of msg/SensorValueRawMsg messages.
/**
 * It calls
 * lll_rdm_msgs__msg__SensorValueRawMsg__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_lll_rdm_msgs
void
lll_rdm_msgs__msg__SensorValueRawMsg__Sequence__destroy(lll_rdm_msgs__msg__SensorValueRawMsg__Sequence * array);

/// Check for msg/SensorValueRawMsg message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_lll_rdm_msgs
bool
lll_rdm_msgs__msg__SensorValueRawMsg__Sequence__are_equal(const lll_rdm_msgs__msg__SensorValueRawMsg__Sequence * lhs, const lll_rdm_msgs__msg__SensorValueRawMsg__Sequence * rhs);

/// Copy an array of msg/SensorValueRawMsg messages.
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
lll_rdm_msgs__msg__SensorValueRawMsg__Sequence__copy(
  const lll_rdm_msgs__msg__SensorValueRawMsg__Sequence * input,
  lll_rdm_msgs__msg__SensorValueRawMsg__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // LLL_RDM_MSGS__MSG__DETAIL__SENSOR_VALUE_RAW_MSG__FUNCTIONS_H_
