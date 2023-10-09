// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from lll_supervisor_msgs:srv/InputFiltering.idl
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
#include "lll_supervisor_msgs/srv/detail/input_filtering__struct.h"
#include "lll_supervisor_msgs/srv/detail/input_filtering__functions.h"

ROSIDL_GENERATOR_C_IMPORT
bool lll_msgs__msg__float64_vector_stamped__convert_from_py(PyObject * _pymsg, void * _ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * lll_msgs__msg__float64_vector_stamped__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool lll_supervisor_msgs__srv__input_filtering__request__convert_from_py(PyObject * _pymsg, void * _ros_message)
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
    assert(strncmp("lll_supervisor_msgs.srv._input_filtering.InputFiltering_Request", full_classname_dest, 63) == 0);
  }
  lll_supervisor_msgs__srv__InputFiltering_Request * ros_message = _ros_message;
  {  // input_desired
    PyObject * field = PyObject_GetAttrString(_pymsg, "input_desired");
    if (!field) {
      return false;
    }
    if (!lll_msgs__msg__float64_vector_stamped__convert_from_py(field, &ros_message->input_desired)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * lll_supervisor_msgs__srv__input_filtering__request__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of InputFiltering_Request */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("lll_supervisor_msgs.srv._input_filtering");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "InputFiltering_Request");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  lll_supervisor_msgs__srv__InputFiltering_Request * ros_message = (lll_supervisor_msgs__srv__InputFiltering_Request *)raw_ros_message;
  {  // input_desired
    PyObject * field = NULL;
    field = lll_msgs__msg__float64_vector_stamped__convert_to_py(&ros_message->input_desired);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "input_desired", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}

#define NPY_NO_DEPRECATED_API NPY_1_7_API_VERSION
// already included above
// #include <Python.h>
// already included above
// #include <stdbool.h>
// already included above
// #include "numpy/ndarrayobject.h"
// already included above
// #include "rosidl_runtime_c/visibility_control.h"
// already included above
// #include "lll_supervisor_msgs/srv/detail/input_filtering__struct.h"
// already included above
// #include "lll_supervisor_msgs/srv/detail/input_filtering__functions.h"

bool lll_supervisor_msgs__msg__input_filtering_result__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * lll_supervisor_msgs__msg__input_filtering_result__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool lll_supervisor_msgs__srv__input_filtering__response__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[65];
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
    assert(strncmp("lll_supervisor_msgs.srv._input_filtering.InputFiltering_Response", full_classname_dest, 64) == 0);
  }
  lll_supervisor_msgs__srv__InputFiltering_Response * ros_message = _ros_message;
  {  // ready
    PyObject * field = PyObject_GetAttrString(_pymsg, "ready");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->ready = (Py_True == field);
    Py_DECREF(field);
  }
  {  // res
    PyObject * field = PyObject_GetAttrString(_pymsg, "res");
    if (!field) {
      return false;
    }
    if (!lll_supervisor_msgs__msg__input_filtering_result__convert_from_py(field, &ros_message->res)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * lll_supervisor_msgs__srv__input_filtering__response__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of InputFiltering_Response */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("lll_supervisor_msgs.srv._input_filtering");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "InputFiltering_Response");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  lll_supervisor_msgs__srv__InputFiltering_Response * ros_message = (lll_supervisor_msgs__srv__InputFiltering_Response *)raw_ros_message;
  {  // ready
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->ready ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "ready", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // res
    PyObject * field = NULL;
    field = lll_supervisor_msgs__msg__input_filtering_result__convert_to_py(&ros_message->res);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "res", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
