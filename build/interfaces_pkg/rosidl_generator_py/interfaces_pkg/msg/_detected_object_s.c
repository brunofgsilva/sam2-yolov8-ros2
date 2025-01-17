// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from interfaces_pkg:msg/DetectedObject.idl
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
#include "interfaces_pkg/msg/detail/detected_object__struct.h"
#include "interfaces_pkg/msg/detail/detected_object__functions.h"

#include "rosidl_runtime_c/string.h"
#include "rosidl_runtime_c/string_functions.h"

ROSIDL_GENERATOR_C_IMPORT
bool geometry_msgs__msg__point__convert_from_py(PyObject * _pymsg, void * _ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * geometry_msgs__msg__point__convert_to_py(void * raw_ros_message);
ROSIDL_GENERATOR_C_IMPORT
bool geometry_msgs__msg__point__convert_from_py(PyObject * _pymsg, void * _ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * geometry_msgs__msg__point__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool interfaces_pkg__msg__detected_object__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[51];
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
    assert(strncmp("interfaces_pkg.msg._detected_object.DetectedObject", full_classname_dest, 50) == 0);
  }
  interfaces_pkg__msg__DetectedObject * ros_message = _ros_message;
  {  // object_name
    PyObject * field = PyObject_GetAttrString(_pymsg, "object_name");
    if (!field) {
      return false;
    }
    assert(PyUnicode_Check(field));
    PyObject * encoded_field = PyUnicode_AsUTF8String(field);
    if (!encoded_field) {
      Py_DECREF(field);
      return false;
    }
    rosidl_runtime_c__String__assign(&ros_message->object_name, PyBytes_AS_STRING(encoded_field));
    Py_DECREF(encoded_field);
    Py_DECREF(field);
  }
  {  // object_id
    PyObject * field = PyObject_GetAttrString(_pymsg, "object_id");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->object_id = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // confidence
    PyObject * field = PyObject_GetAttrString(_pymsg, "confidence");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->confidence = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // position_relative
    PyObject * field = PyObject_GetAttrString(_pymsg, "position_relative");
    if (!field) {
      return false;
    }
    if (!geometry_msgs__msg__point__convert_from_py(field, &ros_message->position_relative)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // position_absolute
    PyObject * field = PyObject_GetAttrString(_pymsg, "position_absolute");
    if (!field) {
      return false;
    }
    if (!geometry_msgs__msg__point__convert_from_py(field, &ros_message->position_absolute)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // obj_height
    PyObject * field = PyObject_GetAttrString(_pymsg, "obj_height");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->obj_height = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // obj_width
    PyObject * field = PyObject_GetAttrString(_pymsg, "obj_width");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->obj_width = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // box_top_left_x
    PyObject * field = PyObject_GetAttrString(_pymsg, "box_top_left_x");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->box_top_left_x = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // box_top_left_y
    PyObject * field = PyObject_GetAttrString(_pymsg, "box_top_left_y");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->box_top_left_y = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // box_width
    PyObject * field = PyObject_GetAttrString(_pymsg, "box_width");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->box_width = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // box_height
    PyObject * field = PyObject_GetAttrString(_pymsg, "box_height");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->box_height = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // box_center_x
    PyObject * field = PyObject_GetAttrString(_pymsg, "box_center_x");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->box_center_x = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // box_center_y
    PyObject * field = PyObject_GetAttrString(_pymsg, "box_center_y");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->box_center_y = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // camera
    PyObject * field = PyObject_GetAttrString(_pymsg, "camera");
    if (!field) {
      return false;
    }
    assert(PyUnicode_Check(field));
    PyObject * encoded_field = PyUnicode_AsUTF8String(field);
    if (!encoded_field) {
      Py_DECREF(field);
      return false;
    }
    rosidl_runtime_c__String__assign(&ros_message->camera, PyBytes_AS_STRING(encoded_field));
    Py_DECREF(encoded_field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * interfaces_pkg__msg__detected_object__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of DetectedObject */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("interfaces_pkg.msg._detected_object");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "DetectedObject");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  interfaces_pkg__msg__DetectedObject * ros_message = (interfaces_pkg__msg__DetectedObject *)raw_ros_message;
  {  // object_name
    PyObject * field = NULL;
    field = PyUnicode_DecodeUTF8(
      ros_message->object_name.data,
      strlen(ros_message->object_name.data),
      "replace");
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "object_name", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // object_id
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->object_id);
    {
      int rc = PyObject_SetAttrString(_pymessage, "object_id", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // confidence
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->confidence);
    {
      int rc = PyObject_SetAttrString(_pymessage, "confidence", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // position_relative
    PyObject * field = NULL;
    field = geometry_msgs__msg__point__convert_to_py(&ros_message->position_relative);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "position_relative", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // position_absolute
    PyObject * field = NULL;
    field = geometry_msgs__msg__point__convert_to_py(&ros_message->position_absolute);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "position_absolute", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // obj_height
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->obj_height);
    {
      int rc = PyObject_SetAttrString(_pymessage, "obj_height", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // obj_width
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->obj_width);
    {
      int rc = PyObject_SetAttrString(_pymessage, "obj_width", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // box_top_left_x
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->box_top_left_x);
    {
      int rc = PyObject_SetAttrString(_pymessage, "box_top_left_x", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // box_top_left_y
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->box_top_left_y);
    {
      int rc = PyObject_SetAttrString(_pymessage, "box_top_left_y", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // box_width
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->box_width);
    {
      int rc = PyObject_SetAttrString(_pymessage, "box_width", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // box_height
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->box_height);
    {
      int rc = PyObject_SetAttrString(_pymessage, "box_height", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // box_center_x
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->box_center_x);
    {
      int rc = PyObject_SetAttrString(_pymessage, "box_center_x", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // box_center_y
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->box_center_y);
    {
      int rc = PyObject_SetAttrString(_pymessage, "box_center_y", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // camera
    PyObject * field = NULL;
    field = PyUnicode_DecodeUTF8(
      ros_message->camera.data,
      strlen(ros_message->camera.data),
      "replace");
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "camera", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
