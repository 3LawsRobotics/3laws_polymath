// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from lll_rdm_msgs:msg/DynamicConsistencyMsgData.idl
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
#include "lll_rdm_msgs/msg/detail/dynamic_consistency_msg_data__struct.h"
#include "lll_rdm_msgs/msg/detail/dynamic_consistency_msg_data__functions.h"

#include "rosidl_runtime_c/primitives_sequence.h"
#include "rosidl_runtime_c/primitives_sequence_functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool lll_rdm_msgs__msg__dynamic_consistency_msg_data__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[73];
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
    assert(strncmp("lll_rdm_msgs.msg._dynamic_consistency_msg_data.DynamicConsistencyMsgData", full_classname_dest, 72) == 0);
  }
  lll_rdm_msgs__msg__DynamicConsistencyMsgData * ros_message = _ros_message;
  {  // state_timeout
    PyObject * field = PyObject_GetAttrString(_pymsg, "state_timeout");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->state_timeout = (Py_True == field);
    Py_DECREF(field);
  }
  {  // time_since_last_state_msg
    PyObject * field = PyObject_GetAttrString(_pymsg, "time_since_last_state_msg");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->time_since_last_state_msg = PyLong_AsLongLong(field);
    Py_DECREF(field);
  }
  {  // input_timeout
    PyObject * field = PyObject_GetAttrString(_pymsg, "input_timeout");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->input_timeout = (Py_True == field);
    Py_DECREF(field);
  }
  {  // time_since_last_input_msg
    PyObject * field = PyObject_GetAttrString(_pymsg, "time_since_last_input_msg");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->time_since_last_input_msg = PyLong_AsLongLong(field);
    Py_DECREF(field);
  }
  {  // input_domain_value
    PyObject * field = PyObject_GetAttrString(_pymsg, "input_domain_value");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->input_domain_value = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // state_domain_value
    PyObject * field = PyObject_GetAttrString(_pymsg, "state_domain_value");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->state_domain_value = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // xdot_difference
    PyObject * field = PyObject_GetAttrString(_pymsg, "xdot_difference");
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
      if (!rosidl_runtime_c__double__Sequence__init(&(ros_message->xdot_difference), size)) {
        PyErr_SetString(PyExc_RuntimeError, "unable to create double__Sequence ros_message");
        PyBuffer_Release(&view);
        Py_DECREF(field);
        return false;
      }
      double * dest = ros_message->xdot_difference.data;
      rc = PyBuffer_ToContiguous(dest, &view, view.len, 'C');
      if (rc < 0) {
        PyBuffer_Release(&view);
        Py_DECREF(field);
        return false;
      }
      PyBuffer_Release(&view);
    } else {
      PyObject * seq_field = PySequence_Fast(field, "expected a sequence in 'xdot_difference'");
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
      if (!rosidl_runtime_c__double__Sequence__init(&(ros_message->xdot_difference), size)) {
        PyErr_SetString(PyExc_RuntimeError, "unable to create double__Sequence ros_message");
        Py_DECREF(seq_field);
        Py_DECREF(field);
        return false;
      }
      double * dest = ros_message->xdot_difference.data;
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
  {  // xdot_difference_pdf_value
    PyObject * field = PyObject_GetAttrString(_pymsg, "xdot_difference_pdf_value");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->xdot_difference_pdf_value = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // xdot_difference_pdf_value_normalized
    PyObject * field = PyObject_GetAttrString(_pymsg, "xdot_difference_pdf_value_normalized");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->xdot_difference_pdf_value_normalized = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // xdot_difference_norm_1sigma
    PyObject * field = PyObject_GetAttrString(_pymsg, "xdot_difference_norm_1sigma");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->xdot_difference_norm_1sigma = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // xdot_difference_norm_2sigma
    PyObject * field = PyObject_GetAttrString(_pymsg, "xdot_difference_norm_2sigma");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->xdot_difference_norm_2sigma = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // xdot_difference_norm_3sigma
    PyObject * field = PyObject_GetAttrString(_pymsg, "xdot_difference_norm_3sigma");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->xdot_difference_norm_3sigma = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // system_degradation_probability
    PyObject * field = PyObject_GetAttrString(_pymsg, "system_degradation_probability");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->system_degradation_probability = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * lll_rdm_msgs__msg__dynamic_consistency_msg_data__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of DynamicConsistencyMsgData */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("lll_rdm_msgs.msg._dynamic_consistency_msg_data");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "DynamicConsistencyMsgData");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  lll_rdm_msgs__msg__DynamicConsistencyMsgData * ros_message = (lll_rdm_msgs__msg__DynamicConsistencyMsgData *)raw_ros_message;
  {  // state_timeout
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->state_timeout ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "state_timeout", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // time_since_last_state_msg
    PyObject * field = NULL;
    field = PyLong_FromLongLong(ros_message->time_since_last_state_msg);
    {
      int rc = PyObject_SetAttrString(_pymessage, "time_since_last_state_msg", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // input_timeout
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->input_timeout ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "input_timeout", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // time_since_last_input_msg
    PyObject * field = NULL;
    field = PyLong_FromLongLong(ros_message->time_since_last_input_msg);
    {
      int rc = PyObject_SetAttrString(_pymessage, "time_since_last_input_msg", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // input_domain_value
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->input_domain_value);
    {
      int rc = PyObject_SetAttrString(_pymessage, "input_domain_value", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // state_domain_value
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->state_domain_value);
    {
      int rc = PyObject_SetAttrString(_pymessage, "state_domain_value", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // xdot_difference
    PyObject * field = NULL;
    field = PyObject_GetAttrString(_pymessage, "xdot_difference");
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
    if (ros_message->xdot_difference.size > 0) {
      // populating the array.array using the frombytes method
      PyObject * frombytes = PyObject_GetAttrString(field, "frombytes");
      assert(frombytes != NULL);
      double * src = &(ros_message->xdot_difference.data[0]);
      PyObject * data = PyBytes_FromStringAndSize((const char *)src, ros_message->xdot_difference.size * sizeof(double));
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
  {  // xdot_difference_pdf_value
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->xdot_difference_pdf_value);
    {
      int rc = PyObject_SetAttrString(_pymessage, "xdot_difference_pdf_value", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // xdot_difference_pdf_value_normalized
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->xdot_difference_pdf_value_normalized);
    {
      int rc = PyObject_SetAttrString(_pymessage, "xdot_difference_pdf_value_normalized", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // xdot_difference_norm_1sigma
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->xdot_difference_norm_1sigma);
    {
      int rc = PyObject_SetAttrString(_pymessage, "xdot_difference_norm_1sigma", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // xdot_difference_norm_2sigma
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->xdot_difference_norm_2sigma);
    {
      int rc = PyObject_SetAttrString(_pymessage, "xdot_difference_norm_2sigma", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // xdot_difference_norm_3sigma
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->xdot_difference_norm_3sigma);
    {
      int rc = PyObject_SetAttrString(_pymessage, "xdot_difference_norm_3sigma", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // system_degradation_probability
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->system_degradation_probability);
    {
      int rc = PyObject_SetAttrString(_pymessage, "system_degradation_probability", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
