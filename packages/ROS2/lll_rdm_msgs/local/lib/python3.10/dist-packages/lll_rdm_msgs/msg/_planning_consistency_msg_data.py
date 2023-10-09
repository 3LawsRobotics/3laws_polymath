# generated from rosidl_generator_py/resource/_idl.py.em
# with input from lll_rdm_msgs:msg/PlanningConsistencyMsgData.idl
# generated code does not contain a copyright notice


# Import statements for member types

# Member 'acceleration_inconsistency_values'
import array  # noqa: E402, I100

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_PlanningConsistencyMsgData(type):
    """Metaclass of message 'PlanningConsistencyMsgData'."""

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
                'lll_rdm_msgs.msg.PlanningConsistencyMsgData')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__planning_consistency_msg_data
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__planning_consistency_msg_data
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__planning_consistency_msg_data
            cls._TYPE_SUPPORT = module.type_support_msg__msg__planning_consistency_msg_data
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__planning_consistency_msg_data

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class PlanningConsistencyMsgData(metaclass=Metaclass_PlanningConsistencyMsgData):
    """Message class 'PlanningConsistencyMsgData'."""

    __slots__ = [
        '_consistent_lengths',
        '_consistent_state_size',
        '_consistent_input_size',
        '_strictly_sorted_time',
        '_acceleration_inconsistency',
        '_acceleration_inconsistency_values',
    ]

    _fields_and_field_types = {
        'consistent_lengths': 'boolean',
        'consistent_state_size': 'boolean',
        'consistent_input_size': 'boolean',
        'strictly_sorted_time': 'boolean',
        'acceleration_inconsistency': 'double',
        'acceleration_inconsistency_values': 'sequence<double>',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('double')),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.consistent_lengths = kwargs.get('consistent_lengths', bool())
        self.consistent_state_size = kwargs.get('consistent_state_size', bool())
        self.consistent_input_size = kwargs.get('consistent_input_size', bool())
        self.strictly_sorted_time = kwargs.get('strictly_sorted_time', bool())
        self.acceleration_inconsistency = kwargs.get('acceleration_inconsistency', float())
        self.acceleration_inconsistency_values = array.array('d', kwargs.get('acceleration_inconsistency_values', []))

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
        if self.consistent_lengths != other.consistent_lengths:
            return False
        if self.consistent_state_size != other.consistent_state_size:
            return False
        if self.consistent_input_size != other.consistent_input_size:
            return False
        if self.strictly_sorted_time != other.strictly_sorted_time:
            return False
        if self.acceleration_inconsistency != other.acceleration_inconsistency:
            return False
        if self.acceleration_inconsistency_values != other.acceleration_inconsistency_values:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def consistent_lengths(self):
        """Message field 'consistent_lengths'."""
        return self._consistent_lengths

    @consistent_lengths.setter
    def consistent_lengths(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'consistent_lengths' field must be of type 'bool'"
        self._consistent_lengths = value

    @builtins.property
    def consistent_state_size(self):
        """Message field 'consistent_state_size'."""
        return self._consistent_state_size

    @consistent_state_size.setter
    def consistent_state_size(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'consistent_state_size' field must be of type 'bool'"
        self._consistent_state_size = value

    @builtins.property
    def consistent_input_size(self):
        """Message field 'consistent_input_size'."""
        return self._consistent_input_size

    @consistent_input_size.setter
    def consistent_input_size(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'consistent_input_size' field must be of type 'bool'"
        self._consistent_input_size = value

    @builtins.property
    def strictly_sorted_time(self):
        """Message field 'strictly_sorted_time'."""
        return self._strictly_sorted_time

    @strictly_sorted_time.setter
    def strictly_sorted_time(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'strictly_sorted_time' field must be of type 'bool'"
        self._strictly_sorted_time = value

    @builtins.property
    def acceleration_inconsistency(self):
        """Message field 'acceleration_inconsistency'."""
        return self._acceleration_inconsistency

    @acceleration_inconsistency.setter
    def acceleration_inconsistency(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'acceleration_inconsistency' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'acceleration_inconsistency' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._acceleration_inconsistency = value

    @builtins.property
    def acceleration_inconsistency_values(self):
        """Message field 'acceleration_inconsistency_values'."""
        return self._acceleration_inconsistency_values

    @acceleration_inconsistency_values.setter
    def acceleration_inconsistency_values(self, value):
        if isinstance(value, array.array):
            assert value.typecode == 'd', \
                "The 'acceleration_inconsistency_values' array.array() must have the type code of 'd'"
            self._acceleration_inconsistency_values = value
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
                "The 'acceleration_inconsistency_values' field must be a set or sequence and each value of type 'float' and each double in [-179769313486231570814527423731704356798070567525844996598917476803157260780028538760589558632766878171540458953514382464234321326889464182768467546703537516986049910576551282076245490090389328944075868508455133942304583236903222948165808559332123348274797826204144723168738177180919299881250404026184124858368.000000, 179769313486231570814527423731704356798070567525844996598917476803157260780028538760589558632766878171540458953514382464234321326889464182768467546703537516986049910576551282076245490090389328944075868508455133942304583236903222948165808559332123348274797826204144723168738177180919299881250404026184124858368.000000]"
        self._acceleration_inconsistency_values = array.array('d', value)
