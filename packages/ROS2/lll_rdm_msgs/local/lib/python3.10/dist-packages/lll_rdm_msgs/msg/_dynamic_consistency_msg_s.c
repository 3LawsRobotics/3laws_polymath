// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from lll_rdm_msgs:msg/DynamicConsistencyMsg.idl
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
#include "lll_rdm_msgs/msg/detail/dynamic_consistency_msg__struct.h"
#include "lll_rdm_msgs/msg/detail/dynamic_consistency_msg__functions.h"

#include "rosidl_runtime_c/primitives_sequence.h"
#include "rosidl_runtime_c/primitives_sequence_functions.h"

// Nested array functions includes
#include "lll_rdm_msgs/msg/detail/metric_tags_msg_data__functions.h"
// end nested array functions include
bool lll_rdm_msgs__msg__msg_header__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * lll_rdm_msgs__msg__msg_header__convert_to_py(void * raw_ros_message);
bool lll_rdm_msgs__msg__dynamic_consistency_msg_data__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * lll_rdm_msgs__msg__dynamic_consistency_msg_data__convert_to_py(void * raw_ros_message);
bool lll_rdm_msgs__msg__metric_tags_msg_data__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * lll_rdm_msgs__msg__metric_tags_msg_data__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool lll_rdm_msgs__msg__dynamic_consistency_msg__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[64];
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
    assert(strncmp("lll_rdm_msgs.msg._dynamic_consistency_msg.DynamicConsistencyMsg", full_classname_dest, 63) == 0);
  }
  lll_rdm_msgs__msg__DynamicConsistencyMsg * ros_message = _ros_message;
  {  // header
    PyObject * field = PyObject_GetAttrString(_pymsg, "header");
    if (!field) {
      return false;
    }
    if (!lll_rdm_msgs__msg__msg_header__convert_from_py(field, &ros_message->header)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // data
    PyObject * field = PyObject_GetAttrString(_pymsg, "data");
    if (!field) {
      return false;
    }
    if (!lll_rdm_msgs__msg__dynamic_consistency_msg_data__convert_from_py(field, &ros_message->data)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // tags
    PyObject * field = PyObject_GetAttrString(_pymsg, "tags");
    if (!field) {
      return false;
    }
    PyObject * seq_field = PySequence_Fast(field, "expected a sequence in 'tags'");
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
    if (!lll_rdm_msgs__msg__MetricTagsMsgData__Sequence__init(&(ros_message->tags), size)) {
      PyErr_SetString(PyExc_RuntimeError, "unable to create lll_rdm_msgs__msg__MetricTagsMsgData__Sequence ros_message");
      Py_DECREF(seq_field);
      Py_DECREF(field);
      return false;
    }
    lll_rdm_msgs__msg__MetricTagsMsgData * dest = ros_message->tags.data;
    for (Py_ssize_t i = 0; i < size; ++i) {
      if (!lll_rdm_msgs__msg__metric_tags_msg_data__convert_from_py(PySequence_Fast_GET_ITEM(seq_field, i), &dest[i])) {
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
PyObject * lll_rdm_msgs__msg__dynamic_consistency_msg__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of DynamicConsistencyMsg */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("lll_rdm_msgs.msg._dynamic_consistency_msg");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "DynamicConsistencyMsg");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  lll_rdm_msgs__msg__DynamicConsistencyMsg * ros_message = (lll_rdm_msgs__msg__DynamicConsistencyMsg *)raw_ros_message;
  {  // header
    PyObject * field = NULL;
    field = lll_rdm_msgs__msg__msg_header__convert_to_py(&ros_message->header);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "header", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // data
    PyObject * field = NULL;
    field = lll_rdm_msgs__msg__dynamic_consistency_msg_data__convert_to_py(&ros_message->data);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "data", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // tags
    PyObject * field = NULL;
    size_t size = ros_message->tags.size;
    field = PyList_New(size);
    if (!field) {
      return NULL;
    }
    lll_rdm_msgs__msg__MetricTagsMsgData * item;
    for (size_t i = 0; i < size; ++i) {
      item = &(ros_message->tags.data[i]);
      PyObject * pyitem = lll_rdm_msgs__msg__metric_tags_msg_data__convert_to_py(item);
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
      int rc = PyObject_SetAttrString(_pymessage, "tags", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
