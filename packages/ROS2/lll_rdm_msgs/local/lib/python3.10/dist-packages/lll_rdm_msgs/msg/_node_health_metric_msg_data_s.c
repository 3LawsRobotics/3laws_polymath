// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from lll_rdm_msgs:msg/NodeHealthMetricMsgData.idl
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
#include "lll_rdm_msgs/msg/detail/node_health_metric_msg_data__struct.h"
#include "lll_rdm_msgs/msg/detail/node_health_metric_msg_data__functions.h"

#include "rosidl_runtime_c/primitives_sequence.h"
#include "rosidl_runtime_c/primitives_sequence_functions.h"

// Nested array functions includes
#include "lll_rdm_msgs/msg/detail/node_health_metric_msg_topic_data__functions.h"
// end nested array functions include
bool lll_rdm_msgs__msg__node_health_metric_msg_topic_data__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * lll_rdm_msgs__msg__node_health_metric_msg_topic_data__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool lll_rdm_msgs__msg__node_health_metric_msg_data__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[70];
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
    assert(strncmp("lll_rdm_msgs.msg._node_health_metric_msg_data.NodeHealthMetricMsgData", full_classname_dest, 69) == 0);
  }
  lll_rdm_msgs__msg__NodeHealthMetricMsgData * ros_message = _ros_message;
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
  {  // ok
    PyObject * field = PyObject_GetAttrString(_pymsg, "ok");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->ok = (Py_True == field);
    Py_DECREF(field);
  }
  {  // topics
    PyObject * field = PyObject_GetAttrString(_pymsg, "topics");
    if (!field) {
      return false;
    }
    PyObject * seq_field = PySequence_Fast(field, "expected a sequence in 'topics'");
    if (!seq_field) {
      Py_DECREF(field);
      return false;
    }
    Py_ssize_t size = PySequence_Size(field);
    if (-1 == size) {
      Py_DECREF(seq_field);
      Py_DECREF(field);
      return false;
    }
    if (!lll_rdm_msgs__msg__NodeHealthMetricMsgTopicData__Sequence__init(&(ros_message->topics), size)) {
      PyErr_SetString(PyExc_RuntimeError, "unable to create lll_rdm_msgs__msg__NodeHealthMetricMsgTopicData__Sequence ros_message");
      Py_DECREF(seq_field);
      Py_DECREF(field);
      return false;
    }
    lll_rdm_msgs__msg__NodeHealthMetricMsgTopicData * dest = ros_message->topics.data;
    for (Py_ssize_t i = 0; i < size; ++i) {
      if (!lll_rdm_msgs__msg__node_health_metric_msg_topic_data__convert_from_py(PySequence_Fast_GET_ITEM(seq_field, i), &dest[i])) {
        Py_DECREF(seq_field);
        Py_DECREF(field);
        return false;
      }
    }
    Py_DECREF(seq_field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * lll_rdm_msgs__msg__node_health_metric_msg_data__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of NodeHealthMetricMsgData */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("lll_rdm_msgs.msg._node_health_metric_msg_data");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "NodeHealthMetricMsgData");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  lll_rdm_msgs__msg__NodeHealthMetricMsgData * ros_message = (lll_rdm_msgs__msg__NodeHealthMetricMsgData *)raw_ros_message;
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
  {  // ok
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->ok ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "ok", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // topics
    PyObject * field = NULL;
    size_t size = ros_message->topics.size;
    field = PyList_New(size);
    if (!field) {
      return NULL;
    }
    lll_rdm_msgs__msg__NodeHealthMetricMsgTopicData * item;
    for (size_t i = 0; i < size; ++i) {
      item = &(ros_message->topics.data[i]);
      PyObject * pyitem = lll_rdm_msgs__msg__node_health_metric_msg_topic_data__convert_to_py(item);
      if (!pyitem) {
        Py_DECREF(field);
        return NULL;
      }
      int rc = PyList_SetItem(field, i, pyitem);
      (void)rc;
      assert(rc == 0);
    }
    assert(PySequence_Check(field));
    {
      int rc = PyObject_SetAttrString(_pymessage, "topics", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
