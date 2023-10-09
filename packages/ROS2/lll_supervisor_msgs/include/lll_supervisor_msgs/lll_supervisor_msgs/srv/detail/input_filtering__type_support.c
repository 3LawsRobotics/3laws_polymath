// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from lll_supervisor_msgs:srv/InputFiltering.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "lll_supervisor_msgs/srv/detail/input_filtering__rosidl_typesupport_introspection_c.h"
#include "lll_supervisor_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "lll_supervisor_msgs/srv/detail/input_filtering__functions.h"
#include "lll_supervisor_msgs/srv/detail/input_filtering__struct.h"


// Include directives for member types
// Member `input_desired`
#include "lll_msgs/msg/float64_vector_stamped.h"
// Member `input_desired`
#include "lll_msgs/msg/detail/float64_vector_stamped__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void lll_supervisor_msgs__srv__InputFiltering_Request__rosidl_typesupport_introspection_c__InputFiltering_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  lll_supervisor_msgs__srv__InputFiltering_Request__init(message_memory);
}

void lll_supervisor_msgs__srv__InputFiltering_Request__rosidl_typesupport_introspection_c__InputFiltering_Request_fini_function(void * message_memory)
{
  lll_supervisor_msgs__srv__InputFiltering_Request__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember lll_supervisor_msgs__srv__InputFiltering_Request__rosidl_typesupport_introspection_c__InputFiltering_Request_message_member_array[1] = {
  {
    "input_desired",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(lll_supervisor_msgs__srv__InputFiltering_Request, input_desired),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers lll_supervisor_msgs__srv__InputFiltering_Request__rosidl_typesupport_introspection_c__InputFiltering_Request_message_members = {
  "lll_supervisor_msgs__srv",  // message namespace
  "InputFiltering_Request",  // message name
  1,  // number of fields
  sizeof(lll_supervisor_msgs__srv__InputFiltering_Request),
  lll_supervisor_msgs__srv__InputFiltering_Request__rosidl_typesupport_introspection_c__InputFiltering_Request_message_member_array,  // message members
  lll_supervisor_msgs__srv__InputFiltering_Request__rosidl_typesupport_introspection_c__InputFiltering_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  lll_supervisor_msgs__srv__InputFiltering_Request__rosidl_typesupport_introspection_c__InputFiltering_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t lll_supervisor_msgs__srv__InputFiltering_Request__rosidl_typesupport_introspection_c__InputFiltering_Request_message_type_support_handle = {
  0,
  &lll_supervisor_msgs__srv__InputFiltering_Request__rosidl_typesupport_introspection_c__InputFiltering_Request_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_lll_supervisor_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, lll_supervisor_msgs, srv, InputFiltering_Request)() {
  lll_supervisor_msgs__srv__InputFiltering_Request__rosidl_typesupport_introspection_c__InputFiltering_Request_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, lll_msgs, msg, Float64VectorStamped)();
  if (!lll_supervisor_msgs__srv__InputFiltering_Request__rosidl_typesupport_introspection_c__InputFiltering_Request_message_type_support_handle.typesupport_identifier) {
    lll_supervisor_msgs__srv__InputFiltering_Request__rosidl_typesupport_introspection_c__InputFiltering_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &lll_supervisor_msgs__srv__InputFiltering_Request__rosidl_typesupport_introspection_c__InputFiltering_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "lll_supervisor_msgs/srv/detail/input_filtering__rosidl_typesupport_introspection_c.h"
// already included above
// #include "lll_supervisor_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "lll_supervisor_msgs/srv/detail/input_filtering__functions.h"
// already included above
// #include "lll_supervisor_msgs/srv/detail/input_filtering__struct.h"


// Include directives for member types
// Member `res`
#include "lll_supervisor_msgs/msg/input_filtering_result.h"
// Member `res`
#include "lll_supervisor_msgs/msg/detail/input_filtering_result__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void lll_supervisor_msgs__srv__InputFiltering_Response__rosidl_typesupport_introspection_c__InputFiltering_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  lll_supervisor_msgs__srv__InputFiltering_Response__init(message_memory);
}

void lll_supervisor_msgs__srv__InputFiltering_Response__rosidl_typesupport_introspection_c__InputFiltering_Response_fini_function(void * message_memory)
{
  lll_supervisor_msgs__srv__InputFiltering_Response__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember lll_supervisor_msgs__srv__InputFiltering_Response__rosidl_typesupport_introspection_c__InputFiltering_Response_message_member_array[2] = {
  {
    "ready",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(lll_supervisor_msgs__srv__InputFiltering_Response, ready),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "res",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(lll_supervisor_msgs__srv__InputFiltering_Response, res),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers lll_supervisor_msgs__srv__InputFiltering_Response__rosidl_typesupport_introspection_c__InputFiltering_Response_message_members = {
  "lll_supervisor_msgs__srv",  // message namespace
  "InputFiltering_Response",  // message name
  2,  // number of fields
  sizeof(lll_supervisor_msgs__srv__InputFiltering_Response),
  lll_supervisor_msgs__srv__InputFiltering_Response__rosidl_typesupport_introspection_c__InputFiltering_Response_message_member_array,  // message members
  lll_supervisor_msgs__srv__InputFiltering_Response__rosidl_typesupport_introspection_c__InputFiltering_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  lll_supervisor_msgs__srv__InputFiltering_Response__rosidl_typesupport_introspection_c__InputFiltering_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t lll_supervisor_msgs__srv__InputFiltering_Response__rosidl_typesupport_introspection_c__InputFiltering_Response_message_type_support_handle = {
  0,
  &lll_supervisor_msgs__srv__InputFiltering_Response__rosidl_typesupport_introspection_c__InputFiltering_Response_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_lll_supervisor_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, lll_supervisor_msgs, srv, InputFiltering_Response)() {
  lll_supervisor_msgs__srv__InputFiltering_Response__rosidl_typesupport_introspection_c__InputFiltering_Response_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, lll_supervisor_msgs, msg, InputFilteringResult)();
  if (!lll_supervisor_msgs__srv__InputFiltering_Response__rosidl_typesupport_introspection_c__InputFiltering_Response_message_type_support_handle.typesupport_identifier) {
    lll_supervisor_msgs__srv__InputFiltering_Response__rosidl_typesupport_introspection_c__InputFiltering_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &lll_supervisor_msgs__srv__InputFiltering_Response__rosidl_typesupport_introspection_c__InputFiltering_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "lll_supervisor_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "lll_supervisor_msgs/srv/detail/input_filtering__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers lll_supervisor_msgs__srv__detail__input_filtering__rosidl_typesupport_introspection_c__InputFiltering_service_members = {
  "lll_supervisor_msgs__srv",  // service namespace
  "InputFiltering",  // service name
  // these two fields are initialized below on the first access
  NULL,  // request message
  // lll_supervisor_msgs__srv__detail__input_filtering__rosidl_typesupport_introspection_c__InputFiltering_Request_message_type_support_handle,
  NULL  // response message
  // lll_supervisor_msgs__srv__detail__input_filtering__rosidl_typesupport_introspection_c__InputFiltering_Response_message_type_support_handle
};

static rosidl_service_type_support_t lll_supervisor_msgs__srv__detail__input_filtering__rosidl_typesupport_introspection_c__InputFiltering_service_type_support_handle = {
  0,
  &lll_supervisor_msgs__srv__detail__input_filtering__rosidl_typesupport_introspection_c__InputFiltering_service_members,
  get_service_typesupport_handle_function,
};

// Forward declaration of request/response type support functions
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, lll_supervisor_msgs, srv, InputFiltering_Request)();

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, lll_supervisor_msgs, srv, InputFiltering_Response)();

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_lll_supervisor_msgs
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, lll_supervisor_msgs, srv, InputFiltering)() {
  if (!lll_supervisor_msgs__srv__detail__input_filtering__rosidl_typesupport_introspection_c__InputFiltering_service_type_support_handle.typesupport_identifier) {
    lll_supervisor_msgs__srv__detail__input_filtering__rosidl_typesupport_introspection_c__InputFiltering_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)lll_supervisor_msgs__srv__detail__input_filtering__rosidl_typesupport_introspection_c__InputFiltering_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, lll_supervisor_msgs, srv, InputFiltering_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, lll_supervisor_msgs, srv, InputFiltering_Response)()->data;
  }

  return &lll_supervisor_msgs__srv__detail__input_filtering__rosidl_typesupport_introspection_c__InputFiltering_service_type_support_handle;
}
