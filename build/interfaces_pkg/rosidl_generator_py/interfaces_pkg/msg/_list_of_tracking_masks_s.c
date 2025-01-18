// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from interfaces_pkg:msg/ListOfTrackingMasks.idl
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
#include "interfaces_pkg/msg/detail/list_of_tracking_masks__struct.h"
#include "interfaces_pkg/msg/detail/list_of_tracking_masks__functions.h"

#include "rosidl_runtime_c/primitives_sequence.h"
#include "rosidl_runtime_c/primitives_sequence_functions.h"

// Nested array functions includes
#include "interfaces_pkg/msg/detail/tracking_mask__functions.h"
// end nested array functions include
bool interfaces_pkg__msg__tracking_mask__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * interfaces_pkg__msg__tracking_mask__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool interfaces_pkg__msg__list_of_tracking_masks__convert_from_py(PyObject * _pymsg, void * _ros_message)
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
    assert(strncmp("interfaces_pkg.msg._list_of_tracking_masks.ListOfTrackingMasks", full_classname_dest, 62) == 0);
  }
  interfaces_pkg__msg__ListOfTrackingMasks * ros_message = _ros_message;
  {  // list_of_masks
    PyObject * field = PyObject_GetAttrString(_pymsg, "list_of_masks");
    if (!field) {
      return false;
    }
    PyObject * seq_field = PySequence_Fast(field, "expected a sequence in 'list_of_masks'");
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
    if (!interfaces_pkg__msg__TrackingMask__Sequence__init(&(ros_message->list_of_masks), size)) {
      PyErr_SetString(PyExc_RuntimeError, "unable to create interfaces_pkg__msg__TrackingMask__Sequence ros_message");
      Py_DECREF(seq_field);
      Py_DECREF(field);
      return false;
    }
    interfaces_pkg__msg__TrackingMask * dest = ros_message->list_of_masks.data;
    for (Py_ssize_t i = 0; i < size; ++i) {
      if (!interfaces_pkg__msg__tracking_mask__convert_from_py(PySequence_Fast_GET_ITEM(seq_field, i), &dest[i])) {
        Py_DECREF(seq_field);
        Py_DECREF(field);
        return false;
      }
    }
    Py_DECREF(seq_field);
    Py_DECREF(field);
  }
  {  // nr_of_objects_detected
    PyObject * field = PyObject_GetAttrString(_pymsg, "nr_of_objects_detected");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->nr_of_objects_detected = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * interfaces_pkg__msg__list_of_tracking_masks__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of ListOfTrackingMasks */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("interfaces_pkg.msg._list_of_tracking_masks");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "ListOfTrackingMasks");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  interfaces_pkg__msg__ListOfTrackingMasks * ros_message = (interfaces_pkg__msg__ListOfTrackingMasks *)raw_ros_message;
  {  // list_of_masks
    PyObject * field = NULL;
    size_t size = ros_message->list_of_masks.size;
    field = PyList_New(size);
    if (!field) {
      return NULL;
    }
    interfaces_pkg__msg__TrackingMask * item;
    for (size_t i = 0; i < size; ++i) {
      item = &(ros_message->list_of_masks.data[i]);
      PyObject * pyitem = interfaces_pkg__msg__tracking_mask__convert_to_py(item);
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
      int rc = PyObject_SetAttrString(_pymessage, "list_of_masks", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // nr_of_objects_detected
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->nr_of_objects_detected);
    {
      int rc = PyObject_SetAttrString(_pymessage, "nr_of_objects_detected", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
