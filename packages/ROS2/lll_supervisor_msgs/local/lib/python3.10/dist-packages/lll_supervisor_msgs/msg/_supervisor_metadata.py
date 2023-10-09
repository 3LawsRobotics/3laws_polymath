# generated from rosidl_generator_py/resource/_idl.py.em
# with input from lll_supervisor_msgs:msg/SupervisorMetadata.idl
# generated code does not contain a copyright notice


# Import statements for member types

# Member 'input_desired'
# Member 'input_actual'
# Member 'input_failsafe'
import array  # noqa: E402, I100

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_SupervisorMetadata(type):
    """Metaclass of message 'SupervisorMetadata'."""

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
                'lll_supervisor_msgs.msg.SupervisorMetadata')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__supervisor_metadata
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__supervisor_metadata
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__supervisor_metadata
            cls._TYPE_SUPPORT = module.type_support_msg__msg__supervisor_metadata
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__supervisor_metadata

            from std_msgs.msg import Header
            if Header.__class__._TYPE_SUPPORT is None:
                Header.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class SupervisorMetadata(metaclass=Metaclass_SupervisorMetadata):
    """Message class 'SupervisorMetadata'."""

    __slots__ = [
        '_header',
        '_t_state',
        '_t_input',
        '_input_desired',
        '_input_actual',
        '_input_failsafe',
        '_h_distance_current',
        '_h_current',
        '_h_predicted',
        '_input_modification',
        '_regulation_map_size',
        '_generation_extras',
        '_filtering_extras',
    ]

    _fields_and_field_types = {
        'header': 'std_msgs/Header',
        't_state': 'int64',
        't_input': 'int64',
        'input_desired': 'sequence<double>',
        'input_actual': 'sequence<double>',
        'input_failsafe': 'sequence<double>',
        'h_distance_current': 'double',
        'h_current': 'double',
        'h_predicted': 'double',
        'input_modification': 'double',
        'regulation_map_size': 'double',
        'generation_extras': 'sequence<string>',
        'filtering_extras': 'sequence<string>',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['std_msgs', 'msg'], 'Header'),  # noqa: E501
        rosidl_parser.definition.BasicType('int64'),  # noqa: E501
        rosidl_parser.definition.BasicType('int64'),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('double')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('double')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('double')),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.UnboundedString()),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.UnboundedString()),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from std_msgs.msg import Header
        self.header = kwargs.get('header', Header())
        self.t_state = kwargs.get('t_state', int())
        self.t_input = kwargs.get('t_input', int())
        self.input_desired = array.array('d', kwargs.get('input_desired', []))
        self.input_actual = array.array('d', kwargs.get('input_actual', []))
        self.input_failsafe = array.array('d', kwargs.get('input_failsafe', []))
        self.h_distance_current = kwargs.get('h_distance_current', float())
        self.h_current = kwargs.get('h_current', float())
        self.h_predicted = kwargs.get('h_predicted', float())
        self.input_modification = kwargs.get('input_modification', float())
        self.regulation_map_size = kwargs.get('regulation_map_size', float())
        self.generation_extras = kwargs.get('generation_extras', [])
        self.filtering_extras = kwargs.get('filtering_extras', [])

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
        if self.header != other.header:
            return False
        if self.t_state != other.t_state:
            return False
        if self.t_input != other.t_input:
            return False
        if self.input_desired != other.input_desired:
            return False
        if self.input_actual != other.input_actual:
            return False
        if self.input_failsafe != other.input_failsafe:
            return False
        if self.h_distance_current != other.h_distance_current:
            return False
        if self.h_current != other.h_current:
            return False
        if self.h_predicted != other.h_predicted:
            return False
        if self.input_modification != other.input_modification:
            return False
        if self.regulation_map_size != other.regulation_map_size:
            return False
        if self.generation_extras != other.generation_extras:
            return False
        if self.filtering_extras != other.filtering_extras:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def header(self):
        """Message field 'header'."""
        return self._header

    @header.setter
    def header(self, value):
        if __debug__:
            from std_msgs.msg import Header
            assert \
                isinstance(value, Header), \
                "The 'header' field must be a sub message of type 'Header'"
        self._header = value

    @builtins.property
    def t_state(self):
        """Message field 't_state'."""
        return self._t_state

    @t_state.setter
    def t_state(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 't_state' field must be of type 'int'"
            assert value >= -9223372036854775808 and value < 9223372036854775808, \
                "The 't_state' field must be an integer in [-9223372036854775808, 9223372036854775807]"
        self._t_state = value

    @builtins.property
    def t_input(self):
        """Message field 't_input'."""
        return self._t_input

    @t_input.setter
    def t_input(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 't_input' field must be of type 'int'"
            assert value >= -9223372036854775808 and value < 9223372036854775808, \
                "The 't_input' field must be an integer in [-9223372036854775808, 9223372036854775807]"
        self._t_input = value

    @builtins.property
    def input_desired(self):
        """Message field 'input_desired'."""
        return self._input_desired

    @input_desired.setter
    def input_desired(self, value):
        if isinstance(value, array.array):
            assert value.typecode == 'd', \
                "The 'input_desired' array.array() must have the type code of 'd'"
            self._input_desired = value
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
                "The 'input_desired' field must be a set or sequence and each value of type 'float' and each double in [-179769313486231570814527423731704356798070567525844996598917476803157260780028538760589558632766878171540458953514382464234321326889464182768467546703537516986049910576551282076245490090389328944075868508455133942304583236903222948165808559332123348274797826204144723168738177180919299881250404026184124858368.000000, 179769313486231570814527423731704356798070567525844996598917476803157260780028538760589558632766878171540458953514382464234321326889464182768467546703537516986049910576551282076245490090389328944075868508455133942304583236903222948165808559332123348274797826204144723168738177180919299881250404026184124858368.000000]"
        self._input_desired = array.array('d', value)

    @builtins.property
    def input_actual(self):
        """Message field 'input_actual'."""
        return self._input_actual

    @input_actual.setter
    def input_actual(self, value):
        if isinstance(value, array.array):
            assert value.typecode == 'd', \
                "The 'input_actual' array.array() must have the type code of 'd'"
            self._input_actual = value
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
                "The 'input_actual' field must be a set or sequence and each value of type 'float' and each double in [-179769313486231570814527423731704356798070567525844996598917476803157260780028538760589558632766878171540458953514382464234321326889464182768467546703537516986049910576551282076245490090389328944075868508455133942304583236903222948165808559332123348274797826204144723168738177180919299881250404026184124858368.000000, 179769313486231570814527423731704356798070567525844996598917476803157260780028538760589558632766878171540458953514382464234321326889464182768467546703537516986049910576551282076245490090389328944075868508455133942304583236903222948165808559332123348274797826204144723168738177180919299881250404026184124858368.000000]"
        self._input_actual = array.array('d', value)

    @builtins.property
    def input_failsafe(self):
        """Message field 'input_failsafe'."""
        return self._input_failsafe

    @input_failsafe.setter
    def input_failsafe(self, value):
        if isinstance(value, array.array):
            assert value.typecode == 'd', \
                "The 'input_failsafe' array.array() must have the type code of 'd'"
            self._input_failsafe = value
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
                "The 'input_failsafe' field must be a set or sequence and each value of type 'float' and each double in [-179769313486231570814527423731704356798070567525844996598917476803157260780028538760589558632766878171540458953514382464234321326889464182768467546703537516986049910576551282076245490090389328944075868508455133942304583236903222948165808559332123348274797826204144723168738177180919299881250404026184124858368.000000, 179769313486231570814527423731704356798070567525844996598917476803157260780028538760589558632766878171540458953514382464234321326889464182768467546703537516986049910576551282076245490090389328944075868508455133942304583236903222948165808559332123348274797826204144723168738177180919299881250404026184124858368.000000]"
        self._input_failsafe = array.array('d', value)

    @builtins.property
    def h_distance_current(self):
        """Message field 'h_distance_current'."""
        return self._h_distance_current

    @h_distance_current.setter
    def h_distance_current(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'h_distance_current' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'h_distance_current' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._h_distance_current = value

    @builtins.property
    def h_current(self):
        """Message field 'h_current'."""
        return self._h_current

    @h_current.setter
    def h_current(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'h_current' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'h_current' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._h_current = value

    @builtins.property
    def h_predicted(self):
        """Message field 'h_predicted'."""
        return self._h_predicted

    @h_predicted.setter
    def h_predicted(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'h_predicted' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'h_predicted' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._h_predicted = value

    @builtins.property
    def input_modification(self):
        """Message field 'input_modification'."""
        return self._input_modification

    @input_modification.setter
    def input_modification(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'input_modification' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'input_modification' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._input_modification = value

    @builtins.property
    def regulation_map_size(self):
        """Message field 'regulation_map_size'."""
        return self._regulation_map_size

    @regulation_map_size.setter
    def regulation_map_size(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'regulation_map_size' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'regulation_map_size' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._regulation_map_size = value

    @builtins.property
    def generation_extras(self):
        """Message field 'generation_extras'."""
        return self._generation_extras

    @generation_extras.setter
    def generation_extras(self, value):
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
                 all(isinstance(v, str) for v in value) and
                 True), \
                "The 'generation_extras' field must be a set or sequence and each value of type 'str'"
        self._generation_extras = value

    @builtins.property
    def filtering_extras(self):
        """Message field 'filtering_extras'."""
        return self._filtering_extras

    @filtering_extras.setter
    def filtering_extras(self, value):
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
                 all(isinstance(v, str) for v in value) and
                 True), \
                "The 'filtering_extras' field must be a set or sequence and each value of type 'str'"
        self._filtering_extras = value
