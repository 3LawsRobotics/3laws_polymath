# generated from rosidl_generator_py/resource/_idl.py.em
# with input from lll_rdm_msgs:msg/ObstaclesDistanceMetricMsgData.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_ObstaclesDistanceMetricMsgData(type):
    """Metaclass of message 'ObstaclesDistanceMetricMsgData'."""

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
                'lll_rdm_msgs.msg.ObstaclesDistanceMetricMsgData')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__obstacles_distance_metric_msg_data
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__obstacles_distance_metric_msg_data
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__obstacles_distance_metric_msg_data
            cls._TYPE_SUPPORT = module.type_support_msg__msg__obstacles_distance_metric_msg_data
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__obstacles_distance_metric_msg_data

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class ObstaclesDistanceMetricMsgData(metaclass=Metaclass_ObstaclesDistanceMetricMsgData):
    """Message class 'ObstaclesDistanceMetricMsgData'."""

    __slots__ = [
        '_timeout',
        '_time_since_last_msg',
        '_min_dist',
        '_min_dist_sensor_id',
    ]

    _fields_and_field_types = {
        'timeout': 'boolean',
        'time_since_last_msg': 'int64',
        'min_dist': 'double',
        'min_dist_sensor_id': 'string',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('int64'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.timeout = kwargs.get('timeout', bool())
        self.time_since_last_msg = kwargs.get('time_since_last_msg', int())
        self.min_dist = kwargs.get('min_dist', float())
        self.min_dist_sensor_id = kwargs.get('min_dist_sensor_id', str())

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
        if self.timeout != other.timeout:
            return False
        if self.time_since_last_msg != other.time_since_last_msg:
            return False
        if self.min_dist != other.min_dist:
            return False
        if self.min_dist_sensor_id != other.min_dist_sensor_id:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def timeout(self):
        """Message field 'timeout'."""
        return self._timeout

    @timeout.setter
    def timeout(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'timeout' field must be of type 'bool'"
        self._timeout = value

    @builtins.property
    def time_since_last_msg(self):
        """Message field 'time_since_last_msg'."""
        return self._time_since_last_msg

    @time_since_last_msg.setter
    def time_since_last_msg(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'time_since_last_msg' field must be of type 'int'"
            assert value >= -9223372036854775808 and value < 9223372036854775808, \
                "The 'time_since_last_msg' field must be an integer in [-9223372036854775808, 9223372036854775807]"
        self._time_since_last_msg = value

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
    def min_dist_sensor_id(self):
        """Message field 'min_dist_sensor_id'."""
        return self._min_dist_sensor_id

    @min_dist_sensor_id.setter
    def min_dist_sensor_id(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'min_dist_sensor_id' field must be of type 'str'"
        self._min_dist_sensor_id = value
