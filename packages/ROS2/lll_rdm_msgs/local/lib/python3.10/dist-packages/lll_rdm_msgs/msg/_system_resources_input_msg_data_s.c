// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from lll_rdm_msgs:msg/SystemResourcesInputMsgData.idl
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
#include "lll_rdm_msgs/msg/detail/system_resources_input_msg_data__struct.h"
#include "lll_rdm_msgs/msg/detail/system_resources_input_msg_data__functions.h"

#include "rosidl_runtime_c/string.h"
#include "rosidl_runtime_c/string_functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool lll_rdm_msgs__msg__system_resources_input_msg_data__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[78];
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
    assert(strncmp("lll_rdm_msgs.msg._system_resources_input_msg_data.SystemResourcesInputMsgData", full_classname_dest, 77) == 0);
  }
  lll_rdm_msgs__msg__SystemResourcesInputMsgData * ros_message = _ros_message;
  {  // system_id
    PyObject * field = PyObject_GetAttrString(_pymsg, "system_id");
    if (!field) {
      return false;
    }
    assert(PyUnicode_Check(field));
    PyObject * encoded_field = PyUnicode_AsUTF8String(field);
    if (!encoded_field) {
      Py_DECREF(field);
      return false;
    }
    rosidl_runtime_c__String__assign(&ros_message->system_id, PyBytes_AS_STRING(encoded_field));
    Py_DECREF(encoded_field);
    Py_DECREF(field);
  }
  {  // cpu_load
    PyObject * field = PyObject_GetAttrString(_pymsg, "cpu_load");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->cpu_load = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // ram_usage
    PyObject * field = PyObject_GetAttrString(_pymsg, "ram_usage");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->ram_usage = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // disk_usage
    PyObject * field = PyObject_GetAttrString(_pymsg, "disk_usage");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->disk_usage = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // network_read
    PyObject * field = PyObject_GetAttrString(_pymsg, "network_read");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->network_read = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // network_write
    PyObject * field = PyObject_GetAttrString(_pymsg, "network_write");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->network_write = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // cpu_nb
    PyObject * field = PyObject_GetAttrString(_pymsg, "cpu_nb");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->cpu_nb = PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // procs_nb
    PyObject * field = PyObject_GetAttrString(_pymsg, "procs_nb");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->procs_nb = PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * lll_rdm_msgs__msg__system_resources_input_msg_data__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of SystemResourcesInputMsgData */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("lll_rdm_msgs.msg._system_resources_input_msg_data");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "SystemResourcesInputMsgData");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  lll_rdm_msgs__msg__SystemResourcesInputMsgData * ros_message = (lll_rdm_msgs__msg__SystemResourcesInputMsgData *)raw_ros_message;
  {  // system_id
    PyObject * field = NULL;
    field = PyUnicode_DecodeUTF8(
      ros_message->system_id.data,
      strlen(ros_message->system_id.data),
      "replace");
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "system_id", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // cpu_load
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->cpu_load);
    {
      int rc = PyObject_SetAttrString(_pymessage, "cpu_load", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // ram_usage
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->ram_usage);
    {
      int rc = PyObject_SetAttrString(_pymessage, "ram_usage", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // disk_usage
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->disk_usage);
    {
      int rc = PyObject_SetAttrString(_pymessage, "disk_usage", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // network_read
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->network_read);
    {
      int rc = PyObject_SetAttrString(_pymessage, "network_read", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // network_write
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->network_write);
    {
      int rc = PyObject_SetAttrString(_pymessage, "network_write", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // cpu_nb
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->cpu_nb);
    {
      int rc = PyObject_SetAttrString(_pymessage, "cpu_nb", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // procs_nb
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->procs_nb);
    {
      int rc = PyObject_SetAttrString(_pymessage, "procs_nb", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
