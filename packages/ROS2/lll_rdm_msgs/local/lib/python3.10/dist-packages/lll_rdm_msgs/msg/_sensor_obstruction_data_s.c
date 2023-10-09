// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from lll_rdm_msgs:msg/SensorObstructionData.idl
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
#include "lll_rdm_msgs/msg/detail/sensor_obstruction_data__struct.h"
#include "lll_rdm_msgs/msg/detail/sensor_obstruction_data__functions.h"

#include "rosidl_runtime_c/string.h"
#include "rosidl_runtime_c/string_functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool lll_rdm_msgs__msg__sensor_obstruction_data__convert_from_py(PyObject * _pymsg, void * _ros_message)
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
    assert(strncmp("lll_rdm_msgs.msg._sensor_obstruction_data.SensorObstructionData", full_classname_dest, 63) == 0);
  }
  lll_rdm_msgs__msg__SensorObstructionData * ros_message = _ros_message;
  {  // start_angle
    PyObject * field = PyObject_GetAttrString(_pymsg, "start_angle");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->start_angle = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // end_angle
    PyObject * field = PyObject_GetAttrString(_pymsg, "end_angle");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->end_angle = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // min_dist
    PyObject * field = PyObject_GetAttrString(_pymsg, "min_dist");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->min_dist = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // max_dist
    PyObject * field = PyObject_GetAttrString(_pymsg, "max_dist");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->max_dist = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // type
    PyObject * field = PyObject_GetAttrString(_pymsg, "type");
    if (!field) {
      return false;
    }
    assert(PyUnicode_Check(field));
    PyObject * encoded_field = PyUnicode_AsUTF8String(field);
    if (!encoded_field) {
      Py_DECREF(field);
      return false;
    }
    rosidl_runtime_c__String__assign(&ros_message->type, PyBytes_AS_STRING(encoded_field));
    Py_DECREF(encoded_field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * lll_rdm_msgs__msg__sensor_obstruction_data__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of SensorObstructionData */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("lll_rdm_msgs.msg._sensor_obstruction_data");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "SensorObstructionData");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  lll_rdm_msgs__msg__SensorObstructionData * ros_message = (lll_rdm_msgs__msg__SensorObstructionData *)raw_ros_message;
  {  // start_angle
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->start_angle);
    {
      int rc = PyObject_SetAttrString(_pymessage, "start_angle", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // end_angle
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->end_angle);
    {
      int rc = PyObject_SetAttrString(_pymessage, "end_angle", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // min_dist
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->min_dist);
    {
      int rc = PyObject_SetAttrString(_pymessage, "min_dist", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // max_dist
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->max_dist);
    {
      int rc = PyObject_SetAttrString(_pymessage, "max_dist", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // type
    PyObject * field = NULL;
    field = PyUnicode_DecodeUTF8(
      ros_message->type.data,
      strlen(ros_message->type.data),
      "replace");
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "type", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
