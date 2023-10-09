# generated from rosidl_generator_py/resource/_idl.py.em
# with input from lll_rdm_msgs:msg/DynamicConsistencyMsgData.idl
# generated code does not contain a copyright notice


# Import statements for member types

# Member 'xdot_difference'
import array  # noqa: E402, I100

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_DynamicConsistencyMsgData(type):
    """Metaclass of message 'DynamicConsistencyMsgData'."""

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
                'lll_rdm_msgs.msg.DynamicConsistencyMsgData')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__dynamic_consistency_msg_data
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__dynamic_consistency_msg_data
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__dynamic_consistency_msg_data
            cls._TYPE_SUPPORT = module.type_support_msg__msg__dynamic_consistency_msg_data
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__dynamic_consistency_msg_data

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class DynamicConsistencyMsgData(metaclass=Metaclass_DynamicConsistencyMsgData):
    """Message class 'DynamicConsistencyMsgData'."""

    __slots__ = [
        '_state_timeout',
        '_time_since_last_state_msg',
        '_input_timeout',
        '_time_since_last_input_msg',
        '_input_domain_value',
        '_state_domain_value',
        '_xdot_difference',
        '_xdot_difference_pdf_value',
        '_xdot_difference_pdf_value_normalized',
        '_xdot_difference_norm_1sigma',
        '_xdot_difference_norm_2sigma',
        '_xdot_difference_norm_3sigma',
        '_system_degradation_probability',
    ]

    _fields_and_field_types = {
        'state_timeout': 'boolean',
        'time_since_last_state_msg': 'int64',
        'input_timeout': 'boolean',
        'time_since_last_input_msg': 'int64',
        'input_domain_value': 'double',
        'state_domain_value': 'double',
        'xdot_difference': 'sequence<double>',
        'xdot_difference_pdf_value': 'double',
        'xdot_difference_pdf_value_normalized': 'double',
        'xdot_difference_norm_1sigma': 'double',
        'xdot_difference_norm_2sigma': 'double',
        'xdot_difference_norm_3sigma': 'double',
        'system_degradation_probability': 'double',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('int64'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('int64'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('double')),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
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
        self.state_timeout = kwargs.get('state_timeout', bool())
        self.time_since_last_state_msg = kwargs.get('time_since_last_state_msg', int())
        self.input_timeout = kwargs.get('input_timeout', bool())
        self.time_since_last_input_msg = kwargs.get('time_since_last_input_msg', int())
        self.input_domain_value = kwargs.get('input_domain_value', float())
        self.state_domain_value = kwargs.get('state_domain_value', float())
        self.xdot_difference = array.array('d', kwargs.get('xdot_difference', []))
        self.xdot_difference_pdf_value = kwargs.get('xdot_difference_pdf_value', float())
        self.xdot_difference_pdf_value_normalized = kwargs.get('xdot_difference_pdf_value_normalized', float())
        self.xdot_difference_norm_1sigma = kwargs.get('xdot_difference_norm_1sigma', float())
        self.xdot_difference_norm_2sigma = kwargs.get('xdot_difference_norm_2sigma', float())
        self.xdot_difference_norm_3sigma = kwargs.get('xdot_difference_norm_3sigma', float())
        self.system_degradation_probability = kwargs.get('system_degradation_probability', float())

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
        if self.state_timeout != other.state_timeout:
            return False
        if self.time_since_last_state_msg != other.time_since_last_state_msg:
            return False
        if self.input_timeout != other.input_timeout:
            return False
        if self.time_since_last_input_msg != other.time_since_last_input_msg:
            return False
        if self.input_domain_value != other.input_domain_value:
            return False
        if self.state_domain_value != other.state_domain_value:
            return False
        if self.xdot_difference != other.xdot_difference:
            return False
        if self.xdot_difference_pdf_value != other.xdot_difference_pdf_value:
            return False
        if self.xdot_difference_pdf_value_normalized != other.xdot_difference_pdf_value_normalized:
            return False
        if self.xdot_difference_norm_1sigma != other.xdot_difference_norm_1sigma:
            return False
        if self.xdot_difference_norm_2sigma != other.xdot_difference_norm_2sigma:
            return False
        if self.xdot_difference_norm_3sigma != other.xdot_difference_norm_3sigma:
            return False
        if self.system_degradation_probability != other.system_degradation_probability:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def state_timeout(self):
        """Message field 'state_timeout'."""
        return self._state_timeout

    @state_timeout.setter
    def state_timeout(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'state_timeout' field must be of type 'bool'"
        self._state_timeout = value

    @builtins.property
    def time_since_last_state_msg(self):
        """Message field 'time_since_last_state_msg'."""
        return self._time_since_last_state_msg

    @time_since_last_state_msg.setter
    def time_since_last_state_msg(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'time_since_last_state_msg' field must be of type 'int'"
            assert value >= -9223372036854775808 and value < 9223372036854775808, \
                "The 'time_since_last_state_msg' field must be an integer in [-9223372036854775808, 9223372036854775807]"
        self._time_since_last_state_msg = value

    @builtins.property
    def input_timeout(self):
        """Message field 'input_timeout'."""
        return self._input_timeout

    @input_timeout.setter
    def input_timeout(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'input_timeout' field must be of type 'bool'"
        self._input_timeout = value

    @builtins.property
    def time_since_last_input_msg(self):
        """Message field 'time_since_last_input_msg'."""
        return self._time_since_last_input_msg

    @time_since_last_input_msg.setter
    def time_since_last_input_msg(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'time_since_last_input_msg' field must be of type 'int'"
            assert value >= -9223372036854775808 and value < 9223372036854775808, \
                "The 'time_since_last_input_msg' field must be an integer in [-9223372036854775808, 9223372036854775807]"
        self._time_since_last_input_msg = value

    @builtins.property
    def input_domain_value(self):
        """Message field 'input_domain_value'."""
        return self._input_domain_value

    @input_domain_value.setter
    def input_domain_value(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'input_domain_value' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'input_domain_value' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._input_domain_value = value

    @builtins.property
    def state_domain_value(self):
        """Message field 'state_domain_value'."""
        return self._state_domain_value

    @state_domain_value.setter
    def state_domain_value(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'state_domain_value' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'state_domain_value' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._state_domain_value = value

    @builtins.property
    def xdot_difference(self):
        """Message field 'xdot_difference'."""
        return self._xdot_difference

    @xdot_difference.setter
    def xdot_difference(self, value):
        if isinstance(value, array.array):
            assert value.typecode == 'd', \
                "The 'xdot_difference' array.array() must have the type code of 'd'"
            self._xdot_difference = value
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
                "The 'xdot_difference' field must be a set or sequence and each value of type 'float' and each double in [-179769313486231570814527423731704356798070567525844996598917476803157260780028538760589558632766878171540458953514382464234321326889464182768467546703537516986049910576551282076245490090389328944075868508455133942304583236903222948165808559332123348274797826204144723168738177180919299881250404026184124858368.000000, 179769313486231570814527423731704356798070567525844996598917476803157260780028538760589558632766878171540458953514382464234321326889464182768467546703537516986049910576551282076245490090389328944075868508455133942304583236903222948165808559332123348274797826204144723168738177180919299881250404026184124858368.000000]"
        self._xdot_difference = array.array('d', value)

    @builtins.property
    def xdot_difference_pdf_value(self):
        """Message field 'xdot_difference_pdf_value'."""
        return self._xdot_difference_pdf_value

    @xdot_difference_pdf_value.setter
    def xdot_difference_pdf_value(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'xdot_difference_pdf_value' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'xdot_difference_pdf_value' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._xdot_difference_pdf_value = value

    @builtins.property
    def xdot_difference_pdf_value_normalized(self):
        """Message field 'xdot_difference_pdf_value_normalized'."""
        return self._xdot_difference_pdf_value_normalized

    @xdot_difference_pdf_value_normalized.setter
    def xdot_difference_pdf_value_normalized(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'xdot_difference_pdf_value_normalized' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'xdot_difference_pdf_value_normalized' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._xdot_difference_pdf_value_normalized = value

    @builtins.property
    def xdot_difference_norm_1sigma(self):
        """Message field 'xdot_difference_norm_1sigma'."""
        return self._xdot_difference_norm_1sigma

    @xdot_difference_norm_1sigma.setter
    def xdot_difference_norm_1sigma(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'xdot_difference_norm_1sigma' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'xdot_difference_norm_1sigma' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._xdot_difference_norm_1sigma = value

    @builtins.property
    def xdot_difference_norm_2sigma(self):
        """Message field 'xdot_difference_norm_2sigma'."""
        return self._xdot_difference_norm_2sigma

    @xdot_difference_norm_2sigma.setter
    def xdot_difference_norm_2sigma(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'xdot_difference_norm_2sigma' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'xdot_difference_norm_2sigma' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._xdot_difference_norm_2sigma = value

    @builtins.property
    def xdot_difference_norm_3sigma(self):
        """Message field 'xdot_difference_norm_3sigma'."""
        return self._xdot_difference_norm_3sigma

    @xdot_difference_norm_3sigma.setter
    def xdot_difference_norm_3sigma(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'xdot_difference_norm_3sigma' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'xdot_difference_norm_3sigma' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._xdot_difference_norm_3sigma = value

    @builtins.property
    def system_degradation_probability(self):
        """Message field 'system_degradation_probability'."""
        return self._system_degradation_probability

    @system_degradation_probability.setter
    def system_degradation_probability(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'system_degradation_probability' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'system_degradation_probability' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._system_degradation_probability = value
