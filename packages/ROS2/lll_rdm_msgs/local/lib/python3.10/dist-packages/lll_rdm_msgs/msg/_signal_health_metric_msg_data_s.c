// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from lll_rdm_msgs:msg/SignalHealthMetricMsgData.idl
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
#include "lll_rdm_msgs/msg/detail/signal_health_metric_msg_data__struct.h"
#include "lll_rdm_msgs/msg/detail/signal_health_metric_msg_data__functions.h"

#include "rosidl_runtime_c/string.h"
#include "rosidl_runtime_c/string_functions.h"

#include "rosidl_runtime_c/primitives_sequence.h"
#include "rosidl_runtime_c/primitives_sequence_functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool lll_rdm_msgs__msg__signal_health_metric_msg_data__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[74];
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
    assert(strncmp("lll_rdm_msgs.msg._signal_health_metric_msg_data.SignalHealthMetricMsgData", full_classname_dest, 73) == 0);
  }
  lll_rdm_msgs__msg__SignalHealthMetricMsgData * ros_message = _ros_message;
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
  {  // wrong_size
    PyObject * field = PyObject_GetAttrString(_pymsg, "wrong_size");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->wrong_size = (Py_True == field);
    Py_DECREF(field);
  }
  {  // bad_timestamp
    PyObject * field = PyObject_GetAttrString(_pymsg, "bad_timestamp");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->bad_timestamp = (Py_True == field);
    Py_DECREF(field);
  }
  {  // has_nan
    PyObject * field = PyObject_GetAttrString(_pymsg, "has_nan");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->has_nan = (Py_True == field);
    Py_DECREF(field);
  }
  {  // has_infinity
    PyObject * field = PyObject_GetAttrString(_pymsg, "has_infinity");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->has_infinity = (Py_True == field);
    Py_DECREF(field);
  }
  {  // has_zero
    PyObject * field = PyObject_GetAttrString(_pymsg, "has_zero");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->has_zero = (Py_True == field);
    Py_DECREF(field);
  }
  {  // has_subnormal
    PyObject * field = PyObject_GetAttrString(_pymsg, "has_subnormal");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->has_subnormal = (Py_True == field);
    Py_DECREF(field);
  }
  {  // norm_type
    PyObject * field = PyObject_GetAttrString(_pymsg, "norm_type");
    if (!field) {
      return false;
    }
    assert(PyUnicode_Check(field));
    PyObject * encoded_field = PyUnicode_AsUTF8String(field);
    if (!encoded_field) {
      Py_DECREF(field);
      return false;
    }
    rosidl_runtime_c__String__assign(&ros_message->norm_type, PyBytes_AS_STRING(encoded_field));
    Py_DECREF(encoded_field);
    Py_DECREF(field);
  }
  {  // norm
    PyObject * field = PyObject_GetAttrString(_pymsg, "norm");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->norm = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // values
    PyObject * field = PyObject_GetAttrString(_pymsg, "values");
    if (!field) {
      return false;
    }
    if (PyObject_CheckBuffer(field)) {
      // Optimization for converting arrays of primitives
      Py_buffer view;
      int rc = PyObject_GetBuffer(field, &view, PyBUF_SIMPLE);
      if (rc < 0) {
        Py_DECREF(field);
        return false;
      }
      Py_ssize_t size = view.len / sizeof(double);
      if (!rosidl_runtime_c__double__Sequence__init(&(ros_message->values), size)) {
        PyErr_SetString(PyExc_RuntimeError, "unable to create double__Sequence ros_message");
        PyBuffer_Release(&view);
        Py_DECREF(field);
        return false;
      }
      double * dest = ros_message->values.data;
      rc = PyBuffer_ToContiguous(dest, &view, view.len, 'C');
      if (rc < 0) {
        PyBuffer_Release(&view);
        Py_DECREF(field);
        return false;
      }
      PyBuffer_Release(&view);
    } else {
      PyObject * seq_field = PySequence_Fast(field, "expected a sequence in 'values'");
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
      if (!rosidl_runtime_c__double__Sequence__init(&(ros_message->values), size)) {
        PyErr_SetString(PyExc_RuntimeError, "unable to create double__Sequence ros_message");
        Py_DECREF(seq_field);
        Py_DECREF(field);
        return false;
      }
      double * dest = ros_message->values.data;
      for (Py_ssize_t i = 0; i < size; ++i) {
        PyObject * item = PySequence_Fast_GET_ITEM(seq_field, i);
        if (!item) {
          Py_DECREF(seq_field);
          Py_DECREF(field);
          return false;
        }
        assert(PyFloat_Check(item));
        double tmp = PyFloat_AS_DOUBLE(item);
        memcpy(&dest[i], &tmp, sizeof(double));
      }
      Py_DECREF(seq_field);
    }
    Py_DECREF(field);
  }
  {  // rates
    PyObject * field = PyObject_GetAttrString(_pymsg, "rates");
    if (!field) {
      return false;
    }
    if (PyObject_CheckBuffer(field)) {
      // Optimization for converting arrays of primitives
      Py_buffer view;
      int rc = PyObject_GetBuffer(field, &view, PyBUF_SIMPLE);
      if (rc < 0) {
        Py_DECREF(field);
        return false;
      }
      Py_ssize_t size = view.len / sizeof(double);
      if (!rosidl_runtime_c__double__Sequence__init(&(ros_message->rates), size)) {
        PyErr_SetString(PyExc_RuntimeError, "unable to create double__Sequence ros_message");
        PyBuffer_Release(&view);
        Py_DECREF(field);
        return false;
      }
      double * dest = ros_message->rates.data;
      rc = PyBuffer_ToContiguous(dest, &view, view.len, 'C');
      if (rc < 0) {
        PyBuffer_Release(&view);
        Py_DECREF(field);
        return false;
      }
      PyBuffer_Release(&view);
    } else {
      PyObject * seq_field = PySequence_Fast(field, "expected a sequence in 'rates'");
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
      if (!rosidl_runtime_c__double__Sequence__init(&(ros_message->rates), size)) {
        PyErr_SetString(PyExc_RuntimeError, "unable to create double__Sequence ros_message");
        Py_DECREF(seq_field);
        Py_DECREF(field);
        return false;
      }
      double * dest = ros_message->rates.data;
      for (Py_ssize_t i = 0; i < size; ++i) {
        PyObject * item = PySequence_Fast_GET_ITEM(seq_field, i);
        if (!item) {
          Py_DECREF(seq_field);
          Py_DECREF(field);
          return false;
        }
        assert(PyFloat_Check(item));
        double tmp = PyFloat_AS_DOUBLE(item);
        memcpy(&dest[i], &tmp, sizeof(double));
      }
      Py_DECREF(seq_field);
    }
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * lll_rdm_msgs__msg__signal_health_metric_msg_data__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of SignalHealthMetricMsgData */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("lll_rdm_msgs.msg._signal_health_metric_msg_data");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "SignalHealthMetricMsgData");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  lll_rdm_msgs__msg__SignalHealthMetricMsgData * ros_message = (lll_rdm_msgs__msg__SignalHealthMetricMsgData *)raw_ros_message;
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
  {  // wrong_size
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->wrong_size ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "wrong_size", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // bad_timestamp
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->bad_timestamp ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "bad_timestamp", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // has_nan
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->has_nan ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "has_nan", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // has_infinity
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->has_infinity ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "has_infinity", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // has_zero
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->has_zero ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "has_zero", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // has_subnormal
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->has_subnormal ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "has_subnormal", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // norm_type
    PyObject * field = NULL;
    field = PyUnicode_DecodeUTF8(
      ros_message->norm_type.data,
      strlen(ros_message->norm_type.data),
      "replace");
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "norm_type", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // norm
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->norm);
    {
      int rc = PyObject_SetAttrString(_pymessage, "norm", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // values
    PyObject * field = NULL;
    field = PyObject_GetAttrString(_pymessage, "values");
    if (!field) {
      return NULL;
    }
    assert(field->ob_type != NULL);
    assert(field->ob_type->tp_name != NULL);
    assert(strcmp(field->ob_type->tp_name, "array.array") == 0);
    // ensure that itemsize matches the sizeof of the ROS message field
    PyObject * itemsize_attr = PyObject_GetAttrString(field, "itemsize");
    assert(itemsize_attr != NULL);
    size_t itemsize = PyLong_AsSize_t(itemsize_attr);
    Py_DECREF(itemsize_attr);
    if (itemsize != sizeof(double)) {
      PyErr_SetString(PyExc_RuntimeError, "itemsize doesn't match expectation");
      Py_DECREF(field);
      return NULL;
    }
    // clear the array, poor approach to remove potential default values
    Py_ssize_t length = PyObject_Length(field);
    if (-1 == length) {
      Py_DECREF(field);
      return NULL;
    }
    if (length > 0) {
      PyObject * pop = PyObject_GetAttrString(field, "pop");
      assert(pop != NULL);
      for (Py_ssize_t i = 0; i < length; ++i) {
        PyObject * ret = PyObject_CallFunctionObjArgs(pop, NULL);
        if (!ret) {
          Py_DECREF(pop);
          Py_DECREF(field);
          return NULL;
        }
        Py_DECREF(ret);
      }
      Py_DECREF(pop);
    }
    if (ros_message->values.size > 0) {
      // populating the array.array using the frombytes method
      PyObject * frombytes = PyObject_GetAttrString(field, "frombytes");
      assert(frombytes != NULL);
      double * src = &(ros_message->values.data[0]);
      PyObject * data = PyBytes_FromStringAndSize((const char *)src, ros_message->values.size * sizeof(double));
      assert(data != NULL);
      PyObject * ret = PyObject_CallFunctionObjArgs(frombytes, data, NULL);
      Py_DECREF(data);
      Py_DECREF(frombytes);
      if (!ret) {
        Py_DECREF(field);
        return NULL;
      }
      Py_DECREF(ret);
    }
    Py_DECREF(field);
  }
  {  // rates
    PyObject * field = NULL;
    field = PyObject_GetAttrString(_pymessage, "rates");
    if (!field) {
      return NULL;
    }
    assert(field->ob_type != NULL);
    assert(field->ob_type->tp_name != NULL);
    assert(strcmp(field->ob_type->tp_name, "array.array") == 0);
    // ensure that itemsize matches the sizeof of the ROS message field
    PyObject * itemsize_attr = PyObject_GetAttrString(field, "itemsize");
    assert(itemsize_attr != NULL);
    size_t itemsize = PyLong_AsSize_t(itemsize_attr);
    Py_DECREF(itemsize_attr);
    if (itemsize != sizeof(double)) {
      PyErr_SetString(PyExc_RuntimeError, "itemsize doesn't match expectation");
      Py_DECREF(field);
      return NULL;
    }
    // clear the array, poor approach to remove potential default values
    Py_ssize_t length = PyObject_Length(field);
    if (-1 == length) {
      Py_DECREF(field);
      return NULL;
    }
    if (length > 0) {
      PyObject * pop = PyObject_GetAttrString(field, "pop");
      assert(pop != NULL);
      for (Py_ssize_t i = 0; i < length; ++i) {
        PyObject * ret = PyObject_CallFunctionObjArgs(pop, NULL);
        if (!ret) {
          Py_DECREF(pop);
          Py_DECREF(field);
          return NULL;
        }
        Py_DECREF(ret);
      }
      Py_DECREF(pop);
    }
    if (ros_message->rates.size > 0) {
      // populating the array.array using the frombytes method
      PyObject * frombytes = PyObject_GetAttrString(field, "frombytes");
      assert(frombytes != NULL);
      double * src = &(ros_message->rates.data[0]);
      PyObject * data = PyBytes_FromStringAndSize((const char *)src, ros_message->rates.size * sizeof(double));
      assert(data != NULL);
      PyObject * ret = PyObject_CallFunctionObjArgs(frombytes, data, NULL);
      Py_DECREF(data);
      Py_DECREF(frombytes);
      if (!ret) {
        Py_DECREF(field);
        return NULL;
      }
      Py_DECREF(ret);
    }
    Py_DECREF(field);
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
