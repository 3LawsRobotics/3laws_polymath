// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from lll_supervisor_msgs:msg/ObjectDetection2D.idl
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
#include "lll_supervisor_msgs/msg/detail/object_detection2_d__struct.h"
#include "lll_supervisor_msgs/msg/detail/object_detection2_d__functions.h"

#include "rosidl_runtime_c/string.h"
#include "rosidl_runtime_c/string_functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool lll_supervisor_msgs__msg__object_detection2_d__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[63];
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
    assert(strncmp("lll_supervisor_msgs.msg._object_detection2_d.ObjectDetection2D", full_classname_dest, 62) == 0);
  }
  lll_supervisor_msgs__msg__ObjectDetection2D * ros_message = _ros_message;
  {  // track_id
    PyObject * field = PyObject_GetAttrString(_pymsg, "track_id");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->track_id = PyLong_AsUnsignedLongLong(field);
    Py_DECREF(field);
  }
  {  // class_name
    PyObject * field = PyObject_GetAttrString(_pymsg, "class_name");
    if (!field) {
      return false;
    }
    assert(PyUnicode_Check(field));
    PyObject * encoded_field = PyUnicode_AsUTF8String(field);
    if (!encoded_field) {
      Py_DECREF(field);
      return false;
    }
    rosidl_runtime_c__String__assign(&ros_message->class_name, PyBytes_AS_STRING(encoded_field));
    Py_DECREF(encoded_field);
    Py_DECREF(field);
  }
  {  // x_center
    PyObject * field = PyObject_GetAttrString(_pymsg, "x_center");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->x_center = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // y_center
    PyObject * field = PyObject_GetAttrString(_pymsg, "y_center");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->y_center = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // x_radius
    PyObject * field = PyObject_GetAttrString(_pymsg, "x_radius");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->x_radius = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // y_radius
    PyObject * field = PyObject_GetAttrString(_pymsg, "y_radius");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->y_radius = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // safety_index
    PyObject * field = PyObject_GetAttrString(_pymsg, "safety_index");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->safety_index = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * lll_supervisor_msgs__msg__object_detection2_d__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of ObjectDetection2D */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("lll_supervisor_msgs.msg._object_detection2_d");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "ObjectDetection2D");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  lll_supervisor_msgs__msg__ObjectDetection2D * ros_message = (lll_supervisor_msgs__msg__ObjectDetection2D *)raw_ros_message;
  {  // track_id
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLongLong(ros_message->track_id);
    {
      int rc = PyObject_SetAttrString(_pymessage, "track_id", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // class_name
    PyObject * field = NULL;
    field = PyUnicode_DecodeUTF8(
      ros_message->class_name.data,
      strlen(ros_message->class_name.data),
      "replace");
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "class_name", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // x_center
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->x_center);
    {
      int rc = PyObject_SetAttrString(_pymessage, "x_center", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // y_center
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->y_center);
    {
      int rc = PyObject_SetAttrString(_pymessage, "y_center", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // x_radius
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->x_radius);
    {
      int rc = PyObject_SetAttrString(_pymessage, "x_radius", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // y_radius
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->y_radius);
    {
      int rc = PyObject_SetAttrString(_pymessage, "y_radius", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // safety_index
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->safety_index);
    {
      int rc = PyObject_SetAttrString(_pymessage, "safety_index", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
