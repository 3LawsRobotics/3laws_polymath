# generated from rosidl_generator_py/resource/_idl.py.em
# with input from lll_rdm_msgs:msg/SensorObstructionData.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_SensorObstructionData(type):
    """Metaclass of message 'SensorObstructionData'."""

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
            module = import_type_support('lll_rdm_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'lll_rdm_msgs.msg.SensorObstructionData')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__sensor_obstruction_data
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__sensor_obstruction_data
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__sensor_obstruction_data
            cls._TYPE_SUPPORT = module.type_support_msg__msg__sensor_obstruction_data
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__sensor_obstruction_data

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class SensorObstructionData(metaclass=Metaclass_SensorObstructionData):
    """Message class 'SensorObstructionData'."""

    __slots__ = [
        '_start_angle',
        '_end_angle',
        '_min_dist',
        '_max_dist',
        '_type',
    ]

    _fields_and_field_types = {
        'start_angle': 'double',
        'end_angle': 'double',
        'min_dist': 'double',
        'max_dist': 'double',
        'type': 'string',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.start_angle = kwargs.get('start_angle', float())
        self.end_angle = kwargs.get('end_angle', float())
        self.min_dist = kwargs.get('min_dist', float())
        self.max_dist = kwargs.get('max_dist', float())
        self.type = kwargs.get('type', str())

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
        if self.start_angle != other.start_angle:
            return False
        if self.end_angle != other.end_angle:
            return False
        if self.min_dist != other.min_dist:
            return False
        if self.max_dist != other.max_dist:
            return False
        if self.type != other.type:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def start_angle(self):
        """Message field 'start_angle'."""
        return self._start_angle

    @start_angle.setter
    def start_angle(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'start_angle' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'start_angle' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._start_angle = value

    @builtins.property
    def end_angle(self):
        """Message field 'end_angle'."""
        return self._end_angle

    @end_angle.setter
    def end_angle(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'end_angle' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'end_angle' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._end_angle = value

    @builtins.property
    def min_dist(self):
        """Message field 'min_dist'."""
        return self._min_dist

    @min_dist.setter
    def min_dist(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'min_dist' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'min_dist' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._min_dist = value

    @builtins.property
    def max_dist(self):
        """Message field 'max_dist'."""
        return self._max_dist

    @max_dist.setter
    def max_dist(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'max_dist' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'max_dist' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._max_dist = value

    @builtins.property  # noqa: A003
    def type(self):  # noqa: A003
        """Message field 'type'."""
        return self._type

    @type.setter  # noqa: A003
    def type(self, value):  # noqa: A003
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'type' field must be of type 'str'"
        self._type = value
