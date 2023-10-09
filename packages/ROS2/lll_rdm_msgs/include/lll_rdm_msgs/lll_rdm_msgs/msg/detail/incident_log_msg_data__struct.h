// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from lll_rdm_msgs:msg/IncidentLogMsgData.idl
// generated code does not contain a copyright notice

#ifndef LLL_RDM_MSGS__MSG__DETAIL__INCIDENT_LOG_MSG_DATA__STRUCT_H_
#define LLL_RDM_MSGS__MSG__DETAIL__INCIDENT_LOG_MSG_DATA__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'name'
// Member 'detail'
// Member 'domain'
#include "rosidl_runtime_c/string.h"

/// Struct defined in msg/IncidentLogMsgData in the package lll_rdm_msgs.
/**
  * ##
  * ## Severity level constants
  * ##
  * byte LOW=3 #debug level
  * byte MEDIUM=2  #general level
  * byte SEVERE=1  #warning level
  * byte CRITICAL=0 #error level
 */
typedef struct lll_rdm_msgs__msg__IncidentLogMsgData
{
  /// ##
  /// ## Type level constants
  /// ##
  /// byte SYSTEM   = 1
  /// byte HARDWARE = 2
  /// byte SAFETY   = 3
  /// byte CLOCK    = 4
  /// byte SENSOR   = 5
  /// byte SIGNAL   = 6
  /// byte TRACKING = 7
  /// byte DYNAMIC  = 8
  /// ##
  /// ## SubType level constants
  /// ##
  /// # system
  /// byte TIMEOUT = 10
  /// byte NOT_OK  = 11
  /// # Hardware
  /// byte FULL_RAM  = 20
  /// byte FULL_CPU  = 21
  /// byte FULL_DISK = 22
  /// # Collision
  /// byte COLLISION      = 30
  /// byte NEAR_COLLISION = 31
  /// # Clock
  /// byte RTC_OFFSET = 40
  /// byte UTC_OFFSET = 41
  /// # Sensor
  /// byte OBSTRUCTION = 50
  /// byte NOISE       = 51
  /// # Signal
  /// byte NAN_VALUES      = 60
  /// byte SUBNORMAL_FLOAT = 61
  /// byte INFINITE_VALUES = 62
  /// byte EXACT_ZERO      = 63
  /// byte BAD_TIMESTAMP   = 64
  /// # tracking
  /// byte TRACKING_ERROR = 70
  /// # Dynamic
  /// byte INPUT_DOMAIN     = 80
  /// byte STATE_DOMAIN     = 81
  /// byte STATE_DIFFERENCE = 82
  /// ##
  /// ## Fields
  /// ##
  /// byte type
  /// byte sub_type
  /// byte severity
  bool in_progress;
  rosidl_runtime_c__String name;
  rosidl_runtime_c__String detail;
  rosidl_runtime_c__String domain;
} lll_rdm_msgs__msg__IncidentLogMsgData;

// Struct for a sequence of lll_rdm_msgs__msg__IncidentLogMsgData.
typedef struct lll_rdm_msgs__msg__IncidentLogMsgData__Sequence
{
  lll_rdm_msgs__msg__IncidentLogMsgData * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} lll_rdm_msgs__msg__IncidentLogMsgData__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // LLL_RDM_MSGS__MSG__DETAIL__INCIDENT_LOG_MSG_DATA__STRUCT_H_
