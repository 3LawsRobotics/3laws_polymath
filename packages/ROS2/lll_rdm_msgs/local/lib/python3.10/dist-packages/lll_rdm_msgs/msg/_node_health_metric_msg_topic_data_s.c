// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from lll_rdm_msgs:msg/NodeHealthMetricMsgTopicData.idl
// generated code does not contain a copyright notice
#define NPY_NO_DEPRECATED_API NPY_1_7_API_VERSION
#include <Python.h>
#include <stdbool.h>
#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-function"
#endif
#include "numpy/ndarrayobject.h"
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif
#include "rosidl_runtime_c/visibility_control.h"
#include "lll_rdm_msgs/msg/detail/node_health_metric_msg_topic_data__struct.h"
#include "lll_rdm_msgs/msg/detail/node_health_metric_msg_topic_data__functions.h"

#include "rosidl_runtime_c/string.h"
#include "rosidl_runtime_c/string_functions.h"

bool lll_rdm_msgs__msg__signal_average_msg_data__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * lll_rdm_msgs__msg__signal_average_msg_data__convert_to_py(void * raw_ros_message);
bool lll_rdm_msgs__msg__signal_average_msg_data__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * lll_rdm_msgs__msg__signal_average_msg_data__convert_to_py(void * raw_ros_message);
bool lll_rdm_msgs__msg__signal_average_msg_data__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * lll_rdm_msgs__msg__signal_average_msg_data__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool lll_rdm_msgs__msg__node_health_metric_msg_topic_data__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[81];
    {
      char * class_name = NULL;
      char * module_name = NULL;
      {
        PyObject * class_attr = PyObject_GetAttrString(_pymsg, "__class__");
        if (class_attr) {
          PyObject * name_attr = PyObject_GetAttrString(class_attr, "__name__");
          if (name_attr) {
            class_name = (char *)PyUnicode_1BYTE_DATA(name_attr);
            Py_DECREF(name_attr);
          }
          PyObject * module_attr = PyObject_GetAttrString(class_attr, "__module__");
          if (module_attr) {
            module_name = (char *)PyUnicode_1BYTE_DATA(module_attr);
            Py_DECREF(module_attr);
          }
          Py_DECREF(class_attr);
        }
      }
      if (!class_name || !module_name) {
        return false;
      }
      snprintf(full_classname_dest, sizeof(full_classname_dest), "%s.%s", module_name, class_name);
    }
    assert(strncmp("lll_rdm_msgs.msg._node_health_metric_msg_topic_data.NodeHealthMetricMsgTopicData", full_classname_dest, 80) == 0);
  }
  lll_rdm_msgs__msg__NodeHealthMetricMsgTopicData * ros_message = _ros_message;
  {  // topic_id
    PyObject * field = PyObject_GetAttrString(_pymsg, "topic_id");
    if (!field) {
      return false;
    }
    assert(PyUnicode_Check(field));
    PyObject * encoded_field = PyUnicode_AsUTF8String(field);
    if (!encoded_field) {
      Py_DECREF(field);
      return false;
    }
    rosidl_runtime_c__String__assign(&ros_message->topic_id, PyBytes_AS_STRING(encoded_field));
    Py_DECREF(encoded_field);
    Py_DECREF(field);
  }
  {  // timeout
    PyObject * field = PyObject_GetAttrString(_pymsg, "timeout");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->timeout = (Py_True == field);
    Py_DECREF(field);
  }
  {  // time_since_last_msg
    PyObject * field = PyObject_GetAttrString(_pymsg, "time_since_last_msg");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->time_since_last_msg = PyLong_AsLongLong(field);
    Py_DECREF(field);
  }
  {  // sender_rate
    PyObject * field = PyObject_GetAttrString(_pymsg, "sender_rate");
    if (!field) {
      return false;
    }
    if (!lll_rdm_msgs__msg__signal_average_msg_data__convert_from_py(field, &ros_message->sender_rate)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // receiver_rate
    PyObject * field = PyObject_GetAttrString(_pymsg, "receiver_rate");
    if (!field) {
      return false;
    }
    if (!lll_rdm_msgs__msg__signal_average_msg_data__convert_from_py(field, &ros_message->receiver_rate)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // delay
    PyObject * field = PyObject_GetAttrString(_pymsg, "delay");
    if (!field) {
      return false;
    }
    if (!lll_rdm_msgs__msg__signal_average_msg_data__convert_from_py(field, &ros_message->delay)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * lll_rdm_msgs__msg__node_health_metric_msg_topic_data__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of NodeHealthMetricMsgTopicData */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("lll_rdm_msgs.msg._node_health_metric_msg_topic_data");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "NodeHealthMetricMsgTopicData");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  lll_rdm_msgs__msg__NodeHealthMetricMsgTopicData * ros_message = (lll_rdm_msgs__msg__NodeHealthMetricMsgTopicData *)raw_ros_message;
  {  // topic_id
    PyObject * field = NULL;
    field = PyUnicode_DecodeUTF8(
      ros_message->topic_id.data,
      strlen(ros_message->topic_id.data),
      "replace");
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "topic_id", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // timeout
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->timeout ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "timeout", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // time_since_last_msg
    PyObject * field = NULL;
    field = PyLong_FromLongLong(ros_message->time_since_last_msg);
    {
      int rc = PyObject_SetAttrString(_pymessage, "time_since_last_msg", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // sender_rate
    PyObject * field = NULL;
    field = lll_rdm_msgs__msg__signal_average_msg_data__convert_to_py(&ros_message->sender_rate);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "sender_rate", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // receiver_rate
    PyObject * field = NULL;
    field = lll_rdm_msgs__msg__signal_average_msg_data__convert_to_py(&ros_message->receiver_rate);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "receiver_rate", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // delay
    PyObject * field = NULL;
    field = lll_rdm_msgs__msg__signal_average_msg_data__convert_to_py(&ros_message->delay);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "delay", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
