# generated from rosidl_generator_py/resource/_idl.py.em
# with input from interfaces_pkg:msg/TrackingMask.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_TrackingMask(type):
    """Metaclass of message 'TrackingMask'."""

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
                'interfaces_pkg.msg.TrackingMask')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__tracking_mask
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__tracking_mask
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__tracking_mask
            cls._TYPE_SUPPORT = module.type_support_msg__msg__tracking_mask
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__tracking_mask

            from geometry_msgs.msg import Point
            if Point.__class__._TYPE_SUPPORT is None:
                Point.__class__.__import_type_support__()

            from interfaces_pkg.msg import ListOfMaskDetections
            if ListOfMaskDetections.__class__._TYPE_SUPPORT is None:
                ListOfMaskDetections.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class TrackingMask(metaclass=Metaclass_TrackingMask):
    """Message class 'TrackingMask'."""

    __slots__ = [
        '_obj_name',
        '_object_id',
        '_centroid',
        '_mask',
        '_position_relative',
        '_position_absolute',
    ]

    _fields_and_field_types = {
        'obj_name': 'string',
        'object_id': 'int32',
        'centroid': 'geometry_msgs/Point',
        'mask': 'interfaces_pkg/ListOfMaskDetections',
        'position_relative': 'geometry_msgs/Point',
        'position_absolute': 'geometry_msgs/Point',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['geometry_msgs', 'msg'], 'Point'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['interfaces_pkg', 'msg'], 'ListOfMaskDetections'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['geometry_msgs', 'msg'], 'Point'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['geometry_msgs', 'msg'], 'Point'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.obj_name = kwargs.get('obj_name', str())
        self.object_id = kwargs.get('object_id', int())
        from geometry_msgs.msg import Point
        self.centroid = kwargs.get('centroid', Point())
        from interfaces_pkg.msg import ListOfMaskDetections
        self.mask = kwargs.get('mask', ListOfMaskDetections())
        from geometry_msgs.msg import Point
        self.position_relative = kwargs.get('position_relative', Point())
        from geometry_msgs.msg import Point
        self.position_absolute = kwargs.get('position_absolute', Point())

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
        if self.obj_name != other.obj_name:
            return False
        if self.object_id != other.object_id:
            return False
        if self.centroid != other.centroid:
            return False
        if self.mask != other.mask:
            return False
        if self.position_relative != other.position_relative:
            return False
        if self.position_absolute != other.position_absolute:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def obj_name(self):
        """Message field 'obj_name'."""
        return self._obj_name

    @obj_name.setter
    def obj_name(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'obj_name' field must be of type 'str'"
        self._obj_name = value

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
    def centroid(self):
        """Message field 'centroid'."""
        return self._centroid

    @centroid.setter
    def centroid(self, value):
        if __debug__:
            from geometry_msgs.msg import Point
            assert \
                isinstance(value, Point), \
                "The 'centroid' field must be a sub message of type 'Point'"
        self._centroid = value

    @builtins.property
    def mask(self):
        """Message field 'mask'."""
        return self._mask

    @mask.setter
    def mask(self, value):
        if __debug__:
            from interfaces_pkg.msg import ListOfMaskDetections
            assert \
                isinstance(value, ListOfMaskDetections), \
                "The 'mask' field must be a sub message of type 'ListOfMaskDetections'"
        self._mask = value

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
