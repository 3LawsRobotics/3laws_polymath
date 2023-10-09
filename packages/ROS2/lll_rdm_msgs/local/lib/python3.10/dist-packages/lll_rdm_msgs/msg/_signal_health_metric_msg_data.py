# generated from rosidl_generator_py/resource/_idl.py.em
# with input from lll_rdm_msgs:msg/SignalHealthMetricMsgData.idl
# generated code does not contain a copyright notice


# Import statements for member types

# Member 'values'
# Member 'rates'
import array  # noqa: E402, I100

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_SignalHealthMetricMsgData(type):
    """Metaclass of message 'SignalHealthMetricMsgData'."""

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
                'lll_rdm_msgs.msg.SignalHealthMetricMsgData')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__signal_health_metric_msg_data
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__signal_health_metric_msg_data
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__signal_health_metric_msg_data
            cls._TYPE_SUPPORT = module.type_support_msg__msg__signal_health_metric_msg_data
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__signal_health_metric_msg_data

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class SignalHealthMetricMsgData(metaclass=Metaclass_SignalHealthMetricMsgData):
    """Message class 'SignalHealthMetricMsgData'."""

    __slots__ = [
        '_timeout',
        '_time_since_last_msg',
        '_wrong_size',
        '_bad_timestamp',
        '_has_nan',
        '_has_infinity',
        '_has_zero',
        '_has_subnormal',
        '_norm_type',
        '_norm',
        '_values',
        '_rates',
    ]

    _fields_and_field_types = {
        'timeout': 'boolean',
        'time_since_last_msg': 'int64',
        'wrong_size': 'boolean',
        'bad_timestamp': 'boolean',
        'has_nan': 'boolean',
        'has_infinity': 'boolean',
        'has_zero': 'boolean',
        'has_subnormal': 'boolean',
        'norm_type': 'string',
        'norm': 'double',
        'values': 'sequence<double>',
        'rates': 'sequence<double>',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('int64'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('double')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('double')),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.timeout = kwargs.get('timeout', bool())
        self.time_since_last_msg = kwargs.get('time_since_last_msg', int())
        self.wrong_size = kwargs.get('wrong_size', bool())
        self.bad_timestamp = kwargs.get('bad_timestamp', bool())
        self.has_nan = kwargs.get('has_nan', bool())
        self.has_infinity = kwargs.get('has_infinity', bool())
        self.has_zero = kwargs.get('has_zero', bool())
        self.has_subnormal = kwargs.get('has_subnormal', bool())
        self.norm_type = kwargs.get('norm_type', str())
        self.norm = kwargs.get('norm', float())
        self.values = array.array('d', kwargs.get('values', []))
        self.rates = array.array('d', kwargs.get('rates', []))

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
        if self.wrong_size != other.wrong_size:
            return False
        if self.bad_timestamp != other.bad_timestamp:
            return False
        if self.has_nan != other.has_nan:
            return False
        if self.has_infinity != other.has_infinity:
            return False
        if self.has_zero != other.has_zero:
            return False
        if self.has_subnormal != other.has_subnormal:
            return False
        if self.norm_type != other.norm_type:
            return False
        if self.norm != other.norm:
            return False
        if self.values != other.values:
            return False
        if self.rates != other.rates:
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
    def wrong_size(self):
        """Message field 'wrong_size'."""
        return self._wrong_size

    @wrong_size.setter
    def wrong_size(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'wrong_size' field must be of type 'bool'"
        self._wrong_size = value

    @builtins.property
    def bad_timestamp(self):
        """Message field 'bad_timestamp'."""
        return self._bad_timestamp

    @bad_timestamp.setter
    def bad_timestamp(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'bad_timestamp' field must be of type 'bool'"
        self._bad_timestamp = value

    @builtins.property
    def has_nan(self):
        """Message field 'has_nan'."""
        return self._has_nan

    @has_nan.setter
    def has_nan(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'has_nan' field must be of type 'bool'"
        self._has_nan = value

    @builtins.property
    def has_infinity(self):
        """Message field 'has_infinity'."""
        return self._has_infinity

    @has_infinity.setter
    def has_infinity(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'has_infinity' field must be of type 'bool'"
        self._has_infinity = value

    @builtins.property
    def has_zero(self):
        """Message field 'has_zero'."""
        return self._has_zero

    @has_zero.setter
    def has_zero(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'has_zero' field must be of type 'bool'"
        self._has_zero = value

    @builtins.property
    def has_subnormal(self):
        """Message field 'has_subnormal'."""
        return self._has_subnormal

    @has_subnormal.setter
    def has_subnormal(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'has_subnormal' field must be of type 'bool'"
        self._has_subnormal = value

    @builtins.property
    def norm_type(self):
        """Message field 'norm_type'."""
        return self._norm_type

    @norm_type.setter
    def norm_type(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'norm_type' field must be of type 'str'"
        self._norm_type = value

    @builtins.property
    def norm(self):
        """Message field 'norm'."""
        return self._norm

    @norm.setter
    def norm(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'norm' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'norm' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._norm = value

    @builtins.property
    def values(self):
        """Message field 'values'."""
        return self._values

    @values.setter
    def values(self, value):
        if isinstance(value, array.array):
            assert value.typecode == 'd', \
                "The 'values' array.array() must have the type code of 'd'"
            self._values = value
            return
        if __debug__:
            from collections.abc import Sequence
            from collections.abc import Set
            from collections import UserList
            from collections import UserString
            assert \
                ((isinstance(value, Sequence) or
                  isinstance(value, Set) or
                  isinstance(value, UserList)) and
                 not isinstance(value, str) and
                 not isinstance(value, UserString) and
                 all(isinstance(v, float) for v in value) and
                 all(not (val < -1.7976931348623157e+308 or val > 1.7976931348623157e+308) or math.isinf(val) for val in value)), \
                "The 'values' field must be a set or sequence and each value of type 'float' and each double in [-179769313486231570814527423731704356798070567525844996598917476803157260780028538760589558632766878171540458953514382464234321326889464182768467546703537516986049910576551282076245490090389328944075868508455133942304583236903222948165808559332123348274797826204144723168738177180919299881250404026184124858368.000000, 179769313486231570814527423731704356798070567525844996598917476803157260780028538760589558632766878171540458953514382464234321326889464182768467546703537516986049910576551282076245490090389328944075868508455133942304583236903222948165808559332123348274797826204144723168738177180919299881250404026184124858368.000000]"
        self._values = array.array('d', value)

    @builtins.property
    def rates(self):
        """Message field 'rates'."""
        return self._rates

    @rates.setter
    def rates(self, value):
        if isinstance(value, array.array):
            assert value.typecode == 'd', \
                "The 'rates' array.array() must have the type code of 'd'"
            self._rates = value
            return
        if __debug__:
            from collections.abc import Sequence
            from collections.abc import Set
            from collections import UserList
            from collections import UserString
            assert \
                ((isinstance(value, Sequence) or
                  isinstance(value, Set) or
                  isinstance(value, UserList)) and
                 not isinstance(value, str) and
                 not isinstance(value, UserString) and
                 all(isinstance(v, float) for v in value) and
                 all(not (val < -1.7976931348623157e+308 or val > 1.7976931348623157e+308) or math.isinf(val) for val in value)), \
                "The 'rates' field must be a set or sequence and each value of type 'float' and each double in [-179769313486231570814527423731704356798070567525844996598917476803157260780028538760589558632766878171540458953514382464234321326889464182768467546703537516986049910576551282076245490090389328944075868508455133942304583236903222948165808559332123348274797826204144723168738177180919299881250404026184124858368.000000, 179769313486231570814527423731704356798070567525844996598917476803157260780028538760589558632766878171540458953514382464234321326889464182768467546703537516986049910576551282076245490090389328944075868508455133942304583236903222948165808559332123348274797826204144723168738177180919299881250404026184124858368.000000]"
        self._rates = array.array('d', value)
