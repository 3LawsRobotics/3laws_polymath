# generated from rosidl_generator_py/resource/_idl.py.em
# with input from lll_supervisor_msgs:msg/ObjectDetection2D.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_ObjectDetection2D(type):
    """Metaclass of message 'ObjectDetection2D'."""

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
            module = import_type_support('lll_supervisor_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'lll_supervisor_msgs.msg.ObjectDetection2D')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__object_detection2_d
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__object_detection2_d
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__object_detection2_d
            cls._TYPE_SUPPORT = module.type_support_msg__msg__object_detection2_d
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__object_detection2_d

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
            'SAFETY_INDEX__DEFAULT': -1.0,
        }

    @property
    def SAFETY_INDEX__DEFAULT(cls):
        """Return default value for message field 'safety_index'."""
        return -1.0


class ObjectDetection2D(metaclass=Metaclass_ObjectDetection2D):
    """Message class 'ObjectDetection2D'."""

    __slots__ = [
        '_track_id',
        '_class_name',
        '_x_center',
        '_y_center',
        '_x_radius',
        '_y_radius',
        '_safety_index',
    ]

    _fields_and_field_types = {
        'track_id': 'uint64',
        'class_name': 'string',
        'x_center': 'double',
        'y_center': 'double',
        'x_radius': 'double',
        'y_radius': 'double',
        'safety_index': 'double',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('uint64'),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.track_id = kwargs.get('track_id', int())
        self.class_name = kwargs.get('class_name', str())
        self.x_center = kwargs.get('x_center', float())
        self.y_center = kwargs.get('y_center', float())
        self.x_radius = kwargs.get('x_radius', float())
        self.y_radius = kwargs.get('y_radius', float())
        self.safety_index = kwargs.get(
            'safety_index', ObjectDetection2D.SAFETY_INDEX__DEFAULT)

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
        if self.track_id != other.track_id:
            return False
        if self.class_name != other.class_name:
            return False
        if self.x_center != other.x_center:
            return False
        if self.y_center != other.y_center:
            return False
        if self.x_radius != other.x_radius:
            return False
        if self.y_radius != other.y_radius:
            return False
        if self.safety_index != other.safety_index:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def track_id(self):
        """Message field 'track_id'."""
        return self._track_id

    @track_id.setter
    def track_id(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'track_id' field must be of type 'int'"
            assert value >= 0 and value < 18446744073709551616, \
                "The 'track_id' field must be an unsigned integer in [0, 18446744073709551615]"
        self._track_id = value

    @builtins.property
    def class_name(self):
        """Message field 'class_name'."""
        return self._class_name

    @class_name.setter
    def class_name(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'class_name' field must be of type 'str'"
        self._class_name = value

    @builtins.property
    def x_center(self):
        """Message field 'x_center'."""
        return self._x_center

    @x_center.setter
    def x_center(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'x_center' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'x_center' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._x_center = value

    @builtins.property
    def y_center(self):
        """Message field 'y_center'."""
        return self._y_center

    @y_center.setter
    def y_center(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'y_center' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'y_center' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._y_center = value

    @builtins.property
    def x_radius(self):
        """Message field 'x_radius'."""
        return self._x_radius

    @x_radius.setter
    def x_radius(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'x_radius' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'x_radius' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._x_radius = value

    @builtins.property
    def y_radius(self):
        """Message field 'y_radius'."""
        return self._y_radius

    @y_radius.setter
    def y_radius(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'y_radius' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'y_radius' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._y_radius = value

    @builtins.property
    def safety_index(self):
        """Message field 'safety_index'."""
        return self._safety_index

    @safety_index.setter
    def safety_index(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'safety_index' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'safety_index' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._safety_index = value
