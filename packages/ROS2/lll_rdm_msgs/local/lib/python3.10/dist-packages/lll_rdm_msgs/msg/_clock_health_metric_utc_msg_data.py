# generated from rosidl_generator_py/resource/_idl.py.em
# with input from lll_rdm_msgs:msg/ClockHealthMetricUtcMsgData.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_ClockHealthMetricUtcMsgData(type):
    """Metaclass of message 'ClockHealthMetricUtcMsgData'."""

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
                'lll_rdm_msgs.msg.ClockHealthMetricUtcMsgData')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__clock_health_metric_utc_msg_data
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__clock_health_metric_utc_msg_data
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__clock_health_metric_utc_msg_data
            cls._TYPE_SUPPORT = module.type_support_msg__msg__clock_health_metric_utc_msg_data
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__clock_health_metric_utc_msg_data

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class ClockHealthMetricUtcMsgData(metaclass=Metaclass_ClockHealthMetricUtcMsgData):
    """Message class 'ClockHealthMetricUtcMsgData'."""

    __slots__ = [
        '_has_utc',
        '_utc_time',
        '_rtc_time',
        '_offset_from_utc',
    ]

    _fields_and_field_types = {
        'has_utc': 'boolean',
        'utc_time': 'int64',
        'rtc_time': 'int64',
        'offset_from_utc': 'int64',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('int64'),  # noqa: E501
        rosidl_parser.definition.BasicType('int64'),  # noqa: E501
        rosidl_parser.definition.BasicType('int64'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.has_utc = kwargs.get('has_utc', bool())
        self.utc_time = kwargs.get('utc_time', int())
        self.rtc_time = kwargs.get('rtc_time', int())
        self.offset_from_utc = kwargs.get('offset_from_utc', int())

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
        if self.has_utc != other.has_utc:
            return False
        if self.utc_time != other.utc_time:
            return False
        if self.rtc_time != other.rtc_time:
            return False
        if self.offset_from_utc != other.offset_from_utc:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def has_utc(self):
        """Message field 'has_utc'."""
        return self._has_utc

    @has_utc.setter
    def has_utc(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'has_utc' field must be of type 'bool'"
        self._has_utc = value

    @builtins.property
    def utc_time(self):
        """Message field 'utc_time'."""
        return self._utc_time

    @utc_time.setter
    def utc_time(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'utc_time' field must be of type 'int'"
            assert value >= -9223372036854775808 and value < 9223372036854775808, \
                "The 'utc_time' field must be an integer in [-9223372036854775808, 9223372036854775807]"
        self._utc_time = value

    @builtins.property
    def rtc_time(self):
        """Message field 'rtc_time'."""
        return self._rtc_time

    @rtc_time.setter
    def rtc_time(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'rtc_time' field must be of type 'int'"
            assert value >= -9223372036854775808 and value < 9223372036854775808, \
                "The 'rtc_time' field must be an integer in [-9223372036854775808, 9223372036854775807]"
        self._rtc_time = value

    @builtins.property
    def offset_from_utc(self):
        """Message field 'offset_from_utc'."""
        return self._offset_from_utc

    @offset_from_utc.setter
    def offset_from_utc(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'offset_from_utc' field must be of type 'int'"
            assert value >= -9223372036854775808 and value < 9223372036854775808, \
                "The 'offset_from_utc' field must be an integer in [-9223372036854775808, 9223372036854775807]"
        self._offset_from_utc = value
