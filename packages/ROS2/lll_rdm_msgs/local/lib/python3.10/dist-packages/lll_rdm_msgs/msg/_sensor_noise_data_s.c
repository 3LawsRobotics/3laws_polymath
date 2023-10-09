// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from lll_rdm_msgs:msg/SensorNoiseData.idl
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
#include "lll_rdm_msgs/msg/detail/sensor_noise_data__struct.h"
#include "lll_rdm_msgs/msg/detail/sensor_noise_data__functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool lll_rdm_msgs__msg__sensor_noise_data__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[52];
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
    assert(strncmp("lll_rdm_msgs.msg._sensor_noise_data.SensorNoiseData", full_classname_dest, 51) == 0);
  }
  lll_rdm_msgs__msg__SensorNoiseData * ros_message = _ros_message;
  {  // average_std_error
    PyObject * field = PyObject_GetAttrString(_pymsg, "average_std_error");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->average_std_error = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // max_std_error
    PyObject * field = PyObject_GetAttrString(_pymsg, "max_std_error");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->max_std_error = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // angle_max_error
    PyObject * field = PyObject_GetAttrString(_pymsg, "angle_max_error");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->angle_max_error = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // percent_of_sigma
    PyObject * field = PyObject_GetAttrString(_pymsg, "percent_of_sigma");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->percent_of_sigma = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // p_value
    PyObject * field = PyObject_GetAttrString(_pymsg, "p_value");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->p_value = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // reject_model
    PyObject * field = PyObject_GetAttrString(_pymsg, "reject_model");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->reject_model = (Py_True == field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * lll_rdm_msgs__msg__sensor_noise_data__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of SensorNoiseData */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("lll_rdm_msgs.msg._sensor_noise_data");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "SensorNoiseData");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  lll_rdm_msgs__msg__SensorNoiseData * ros_message = (lll_rdm_msgs__msg__SensorNoiseData *)raw_ros_message;
  {  // average_std_error
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->average_std_error);
    {
      int rc = PyObject_SetAttrString(_pymessage, "average_std_error", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // max_std_error
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->max_std_error);
    {
      int rc = PyObject_SetAttrString(_pymessage, "max_std_error", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // angle_max_error
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->angle_max_error);
    {
      int rc = PyObject_SetAttrString(_pymessage, "angle_max_error", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // percent_of_sigma
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->percent_of_sigma);
    {
      int rc = PyObject_SetAttrString(_pymessage, "percent_of_sigma", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // p_value
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->p_value);
    {
      int rc = PyObject_SetAttrString(_pymessage, "p_value", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // reject_model
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->reject_model ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "reject_model", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
