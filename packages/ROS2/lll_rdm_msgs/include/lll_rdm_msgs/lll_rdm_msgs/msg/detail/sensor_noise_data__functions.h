// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from lll_rdm_msgs:msg/SensorNoiseData.idl
// generated code does not contain a copyright notice

#ifndef LLL_RDM_MSGS__MSG__DETAIL__SENSOR_NOISE_DATA__FUNCTIONS_H_
#define LLL_RDM_MSGS__MSG__DETAIL__SENSOR_NOISE_DATA__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "lll_rdm_msgs/msg/rosidl_generator_c__visibility_control.h"

#include "lll_rdm_msgs/msg/detail/sensor_noise_data__struct.h"

/// Initialize msg/SensorNoiseData message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * lll_rdm_msgs__msg__SensorNoiseData
 * )) before or use
 * lll_rdm_msgs__msg__SensorNoiseData__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_lll_rdm_msgs
bool
lll_rdm_msgs__msg__SensorNoiseData__init(lll_rdm_msgs__msg__SensorNoiseData * msg);

/// Finalize msg/SensorNoiseData message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_lll_rdm_msgs
void
lll_rdm_msgs__msg__SensorNoiseData__fini(lll_rdm_msgs__msg__SensorNoiseData * msg);

/// Create msg/SensorNoiseData message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * lll_rdm_msgs__msg__SensorNoiseData__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_lll_rdm_msgs
lll_rdm_msgs__msg__SensorNoiseData *
lll_rdm_msgs__msg__SensorNoiseData__create();

/// Destroy msg/SensorNoiseData message.
/**
 * It calls
 * lll_rdm_msgs__msg__SensorNoiseData__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_lll_rdm_msgs
void
lll_rdm_msgs__msg__SensorNoiseData__destroy(lll_rdm_msgs__msg__SensorNoiseData * msg);

/// Check for msg/SensorNoiseData message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_lll_rdm_msgs
bool
lll_rdm_msgs__msg__SensorNoiseData__are_equal(const lll_rdm_msgs__msg__SensorNoiseData * lhs, const lll_rdm_msgs__msg__SensorNoiseData * rhs);

/// Copy a msg/SensorNoiseData message.
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
lll_rdm_msgs__msg__SensorNoiseData__copy(
  const lll_rdm_msgs__msg__SensorNoiseData * input,
  lll_rdm_msgs__msg__SensorNoiseData * output);

/// Initialize array of msg/SensorNoiseData messages.
/**
 * It allocates the memory for the number of elements and calls
 * lll_rdm_msgs__msg__SensorNoiseData__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_lll_rdm_msgs
bool
lll_rdm_msgs__msg__SensorNoiseData__Sequence__init(lll_rdm_msgs__msg__SensorNoiseData__Sequence * array, size_t size);

/// Finalize array of msg/SensorNoiseData messages.
/**
 * It calls
 * lll_rdm_msgs__msg__SensorNoiseData__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_lll_rdm_msgs
void
lll_rdm_msgs__msg__SensorNoiseData__Sequence__fini(lll_rdm_msgs__msg__SensorNoiseData__Sequence * array);

/// Create array of msg/SensorNoiseData messages.
/**
 * It allocates the memory for the array and calls
 * lll_rdm_msgs__msg__SensorNoiseData__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_lll_rdm_msgs
lll_rdm_msgs__msg__SensorNoiseData__Sequence *
lll_rdm_msgs__msg__SensorNoiseData__Sequence__create(size_t size);

/// Destroy array of msg/SensorNoiseData messages.
/**
 * It calls
 * lll_rdm_msgs__msg__SensorNoiseData__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_lll_rdm_msgs
void
lll_rdm_msgs__msg__SensorNoiseData__Sequence__destroy(lll_rdm_msgs__msg__SensorNoiseData__Sequence * array);

/// Check for msg/SensorNoiseData message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_lll_rdm_msgs
bool
lll_rdm_msgs__msg__SensorNoiseData__Sequence__are_equal(const lll_rdm_msgs__msg__SensorNoiseData__Sequence * lhs, const lll_rdm_msgs__msg__SensorNoiseData__Sequence * rhs);

/// Copy an array of msg/SensorNoiseData messages.
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
lll_rdm_msgs__msg__SensorNoiseData__Sequence__copy(
  const lll_rdm_msgs__msg__SensorNoiseData__Sequence * input,
  lll_rdm_msgs__msg__SensorNoiseData__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // LLL_RDM_MSGS__MSG__DETAIL__SENSOR_NOISE_DATA__FUNCTIONS_H_
