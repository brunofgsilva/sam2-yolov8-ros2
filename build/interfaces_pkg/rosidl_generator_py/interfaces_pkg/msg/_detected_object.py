# generated from rosidl_generator_py/resource/_idl.py.em
# with input from interfaces_pkg:msg/DetectedObject.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_DetectedObject(type):
    """Metaclass of message 'DetectedObject'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
    }

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('interfaces_pkg')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'interfaces_pkg.msg.DetectedObject')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__detected_object
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__detected_object
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__detected_object
            cls._TYPE_SUPPORT = module.type_support_msg__msg__detected_object
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__detected_object

            from geometry_msgs.msg import Point
            if Point.__class__._TYPE_SUPPORT is None:
                Point.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class DetectedObject(metaclass=Metaclass_DetectedObject):
    """Message class 'DetectedObject'."""

    __slots__ = [
        '_object_name',
        '_object_id',
        '_confidence',
        '_position_relative',
        '_position_absolute',
        '_obj_height',
        '_obj_width',
        '_box_top_left_x',
        '_box_top_left_y',
        '_box_width',
        '_box_height',
        '_box_center_x',
        '_box_center_y',
        '_camera',
    ]

    _fields_and_field_types = {
        'object_name': 'string',
        'object_id': 'int32',
        'confidence': 'float',
        'position_relative': 'geometry_msgs/Point',
        'position_absolute': 'geometry_msgs/Point',
        'obj_height': 'int32',
        'obj_width': 'int32',
        'box_top_left_x': 'int32',
        'box_top_left_y': 'int32',
        'box_width': 'int32',
        'box_height': 'int32',
        'box_center_x': 'int32',
        'box_center_y': 'int32',
        'camera': 'string',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['geometry_msgs', 'msg'], 'Point'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['geometry_msgs', 'msg'], 'Point'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.object_name = kwargs.get('object_name', str())
        self.object_id = kwargs.get('object_id', int())
        self.confidence = kwargs.get('confidence', float())
        from geometry_msgs.msg import Point
        self.position_relative = kwargs.get('position_relative', Point())
        from geometry_msgs.msg import Point
        self.position_absolute = kwargs.get('position_absolute', Point())
        self.obj_height = kwargs.get('obj_height', int())
        self.obj_width = kwargs.get('obj_width', int())
        self.box_top_left_x = kwargs.get('box_top_left_x', int())
        self.box_top_left_y = kwargs.get('box_top_left_y', int())
        self.box_width = kwargs.get('box_width', int())
        self.box_height = kwargs.get('box_height', int())
        self.box_center_x = kwargs.get('box_center_x', int())
        self.box_center_y = kwargs.get('box_center_y', int())
        self.camera = kwargs.get('camera', str())

    def __repr__(self):
        typename = self.__class__.__module__.split('.')
        typename.pop()
        typename.append(self.__class__.__name__)
        args = []
        for s, t in zip(self.__slots__, self.SLOT_TYPES):
            field = getattr(self, s)
            fieldstr = repr(field)
            # We use Python array type for fields that can be directly stored
            # in them, and "normal" sequences for everything else.  If it is
            # a type that we store in an array, strip off the 'array' portion.
            if (
                isinstance(t, rosidl_parser.definition.AbstractSequence) and
                isinstance(t.value_type, rosidl_parser.definition.BasicType) and
                t.value_type.typename in ['float', 'double', 'int8', 'uint8', 'int16', 'uint16', 'int32', 'uint32', 'int64', 'uint64']
            ):
                if len(field) == 0:
                    fieldstr = '[]'
                else:
                    assert fieldstr.startswith('array(')
                    prefix = "array('X', "
                    suffix = ')'
                    fieldstr = fieldstr[len(prefix):-len(suffix)]
            args.append(s[1:] + '=' + fieldstr)
        return '%s(%s)' % ('.'.join(typename), ', '.join(args))

    def __eq__(self, other):
        if not isinstance(other, self.__class__):
            return False
        if self.object_name != other.object_name:
            return False
        if self.object_id != other.object_id:
            return False
        if self.confidence != other.confidence:
            return False
        if self.position_relative != other.position_relative:
            return False
        if self.position_absolute != other.position_absolute:
            return False
        if self.obj_height != other.obj_height:
            return False
        if self.obj_width != other.obj_width:
            return False
        if self.box_top_left_x != other.box_top_left_x:
            return False
        if self.box_top_left_y != other.box_top_left_y:
            return False
        if self.box_width != other.box_width:
            return False
        if self.box_height != other.box_height:
            return False
        if self.box_center_x != other.box_center_x:
            return False
        if self.box_center_y != other.box_center_y:
            return False
        if self.camera != other.camera:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def object_name(self):
        """Message field 'object_name'."""
        return self._object_name

    @object_name.setter
    def object_name(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'object_name' field must be of type 'str'"
        self._object_name = value

    @builtins.property
    def object_id(self):
        """Message field 'object_id'."""
        return self._object_id

    @object_id.setter
    def object_id(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'object_id' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'object_id' field must be an integer in [-2147483648, 2147483647]"
        self._object_id = value

    @builtins.property
    def confidence(self):
        """Message field 'confidence'."""
        return self._confidence

    @confidence.setter
    def confidence(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'confidence' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'confidence' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._confidence = value

    @builtins.property
    def position_relative(self):
        """Message field 'position_relative'."""
        return self._position_relative

    @position_relative.setter
    def position_relative(self, value):
        if __debug__:
            from geometry_msgs.msg import Point
            assert \
                isinstance(value, Point), \
                "The 'position_relative' field must be a sub message of type 'Point'"
        self._position_relative = value

    @builtins.property
    def position_absolute(self):
        """Message field 'position_absolute'."""
        return self._position_absolute

    @position_absolute.setter
    def position_absolute(self, value):
        if __debug__:
            from geometry_msgs.msg import Point
            assert \
                isinstance(value, Point), \
                "The 'position_absolute' field must be a sub message of type 'Point'"
        self._position_absolute = value

    @builtins.property
    def obj_height(self):
        """Message field 'obj_height'."""
        return self._obj_height

    @obj_height.setter
    def obj_height(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'obj_height' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'obj_height' field must be an integer in [-2147483648, 2147483647]"
        self._obj_height = value

    @builtins.property
    def obj_width(self):
        """Message field 'obj_width'."""
        return self._obj_width

    @obj_width.setter
    def obj_width(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'obj_width' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'obj_width' field must be an integer in [-2147483648, 2147483647]"
        self._obj_width = value

    @builtins.property
    def box_top_left_x(self):
        """Message field 'box_top_left_x'."""
        return self._box_top_left_x

    @box_top_left_x.setter
    def box_top_left_x(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'box_top_left_x' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'box_top_left_x' field must be an integer in [-2147483648, 2147483647]"
        self._box_top_left_x = value

    @builtins.property
    def box_top_left_y(self):
        """Message field 'box_top_left_y'."""
        return self._box_top_left_y

    @box_top_left_y.setter
    def box_top_left_y(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'box_top_left_y' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'box_top_left_y' field must be an integer in [-2147483648, 2147483647]"
        self._box_top_left_y = value

    @builtins.property
    def box_width(self):
        """Message field 'box_width'."""
        return self._box_width

    @box_width.setter
    def box_width(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'box_width' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'box_width' field must be an integer in [-2147483648, 2147483647]"
        self._box_width = value

    @builtins.property
    def box_height(self):
        """Message field 'box_height'."""
        return self._box_height

    @box_height.setter
    def box_height(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'box_height' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'box_height' field must be an integer in [-2147483648, 2147483647]"
        self._box_height = value

    @builtins.property
    def box_center_x(self):
        """Message field 'box_center_x'."""
        return self._box_center_x

    @box_center_x.setter
    def box_center_x(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'box_center_x' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'box_center_x' field must be an integer in [-2147483648, 2147483647]"
        self._box_center_x = value

    @builtins.property
    def box_center_y(self):
        """Message field 'box_center_y'."""
        return self._box_center_y

    @box_center_y.setter
    def box_center_y(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'box_center_y' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'box_center_y' field must be an integer in [-2147483648, 2147483647]"
        self._box_center_y = value

    @builtins.property
    def camera(self):
        """Message field 'camera'."""
        return self._camera

    @camera.setter
    def camera(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'camera' field must be of type 'str'"
        self._camera = value
