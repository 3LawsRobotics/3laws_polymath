// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from lll_rdm_msgs:msg/ProcessHealthMetricMsgData.idl
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
#include "lll_rdm_msgs/msg/detail/process_health_metric_msg_data__struct.h"
#include "lll_rdm_msgs/msg/detail/process_health_metric_msg_data__functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool lll_rdm_msgs__msg__process_health_metric_msg_data__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[76];
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
    assert(strncmp("lll_rdm_msgs.msg._process_health_metric_msg_data.ProcessHealthMetricMsgData", full_classname_dest, 75) == 0);
  }
  lll_rdm_msgs__msg__ProcessHealthMetricMsgData * ros_message = _ros_message;
  {  // cpu_usage
    PyObject * field = PyObject_GetAttrString(_pymsg, "cpu_usage");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->cpu_usage = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // cpu_usage_total
    PyObject * field = PyObject_GetAttrString(_pymsg, "cpu_usage_total");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->cpu_usage_total = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // ram_usage
    PyObject * field = PyObject_GetAttrString(_pymsg, "ram_usage");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->ram_usage = PyLong_AsUnsignedLongLong(field);
    Py_DECREF(field);
  }
  {  // n_threads
    PyObject * field = PyObject_GetAttrString(_pymsg, "n_threads");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->n_threads = PyLong_AsUnsignedLongLong(field);
    Py_DECREF(field);
  }
  {  // process_up_time
    PyObject * field = PyObject_GetAttrString(_pymsg, "process_up_time");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->process_up_time = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // process_run_time
    PyObject * field = PyObject_GetAttrString(_pymsg, "process_run_time");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->process_run_time = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // io_total_read
    PyObject * field = PyObject_GetAttrString(_pymsg, "io_total_read");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->io_total_read = PyLong_AsUnsignedLongLong(field);
    Py_DECREF(field);
  }
  {  // io_total_write
    PyObject * field = PyObject_GetAttrString(_pymsg, "io_total_write");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->io_total_write = PyLong_AsUnsignedLongLong(field);
    Py_DECREF(field);
  }
  {  // io_disk_read
    PyObject * field = PyObject_GetAttrString(_pymsg, "io_disk_read");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->io_disk_read = PyLong_AsUnsignedLongLong(field);
    Py_DECREF(field);
  }
  {  // io_disk_write
    PyObject * field = PyObject_GetAttrString(_pymsg, "io_disk_write");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->io_disk_write = PyLong_AsUnsignedLongLong(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * lll_rdm_msgs__msg__process_health_metric_msg_data__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of ProcessHealthMetricMsgData */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("lll_rdm_msgs.msg._process_health_metric_msg_data");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "ProcessHealthMetricMsgData");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  lll_rdm_msgs__msg__ProcessHealthMetricMsgData * ros_message = (lll_rdm_msgs__msg__ProcessHealthMetricMsgData *)raw_ros_message;
  {  // cpu_usage
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->cpu_usage);
    {
      int rc = PyObject_SetAttrString(_pymessage, "cpu_usage", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // cpu_usage_total
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->cpu_usage_total);
    {
      int rc = PyObject_SetAttrString(_pymessage, "cpu_usage_total", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // ram_usage
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLongLong(ros_message->ram_usage);
    {
      int rc = PyObject_SetAttrString(_pymessage, "ram_usage", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // n_threads
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLongLong(ros_message->n_threads);
    {
      int rc = PyObject_SetAttrString(_pymessage, "n_threads", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // process_up_time
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->process_up_time);
    {
      int rc = PyObject_SetAttrString(_pymessage, "process_up_time", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // process_run_time
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->process_run_time);
    {
      int rc = PyObject_SetAttrString(_pymessage, "process_run_time", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // io_total_read
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLongLong(ros_message->io_total_read);
    {
      int rc = PyObject_SetAttrString(_pymessage, "io_total_read", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // io_total_write
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLongLong(ros_message->io_total_write);
    {
      int rc = PyObject_SetAttrString(_pymessage, "io_total_write", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // io_disk_read
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLongLong(ros_message->io_disk_read);
    {
      int rc = PyObject_SetAttrString(_pymessage, "io_disk_read", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // io_disk_write
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLongLong(ros_message->io_disk_write);
    {
      int rc = PyObject_SetAttrString(_pymessage, "io_disk_write", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
