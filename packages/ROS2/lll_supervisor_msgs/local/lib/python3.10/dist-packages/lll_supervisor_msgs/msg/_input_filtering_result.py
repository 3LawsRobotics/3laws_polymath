# generated from rosidl_generator_py/resource/_idl.py.em
# with input from lll_supervisor_msgs:msg/InputFilteringResult.idl
# generated code does not contain a copyright notice


# Import statements for member types

# Member 'input_desired'
# Member 'input_filtered'
# Member 'input_failsafe'
import array  # noqa: E402, I100

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_InputFilteringResult(type):
    """Metaclass of message 'InputFilteringResult'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
        'RC_OK': 1,
        'RC_ERROR': -1,
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
                'lll_supervisor_msgs.msg.InputFilteringResult')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__input_filtering_result
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__input_filtering_result
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__input_filtering_result
            cls._TYPE_SUPPORT = module.type_support_msg__msg__input_filtering_result
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__input_filtering_result

            from std_msgs.msg import Header
            if Header.__class__._TYPE_SUPPORT is None:
                Header.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
            'RC_OK': cls.__constants['RC_OK'],
            'RC_ERROR': cls.__constants['RC_ERROR'],
        }

    @property
    def RC_OK(self):
        """Message constant 'RC_OK'."""
        return Metaclass_InputFilteringResult.__constants['RC_OK']

    @property
    def RC_ERROR(self):
        """Message constant 'RC_ERROR'."""
        return Metaclass_InputFilteringResult.__constants['RC_ERROR']


class InputFilteringResult(metaclass=Metaclass_InputFilteringResult):
    """
    Message class 'InputFilteringResult'.

    Constants:
      RC_OK
      RC_ERROR
    """

    __slots__ = [
        '_header',
        '_t_input_desired',
        '_t_regulation_data',
        '_nu',
        '_return_code',
        '_input_desired',
        '_input_filtered',
        '_input_failsafe',
    ]

    _fields_and_field_types = {
        'header': 'std_msgs/Header',
        't_input_desired': 'int64',
        't_regulation_data': 'int64',
        'nu': 'uint64',
        'return_code': 'int32',
        'input_desired': 'sequence<double>',
        'input_filtered': 'sequence<double>',
        'input_failsafe': 'sequence<double>',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['std_msgs', 'msg'], 'Header'),  # noqa: E501
        rosidl_parser.definition.BasicType('int64'),  # noqa: E501
        rosidl_parser.definition.BasicType('int64'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint64'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('double')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('double')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('double')),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from std_msgs.msg import Header
        self.header = kwargs.get('header', Header())
        self.t_input_desired = kwargs.get('t_input_desired', int())
        self.t_regulation_data = kwargs.get('t_regulation_data', int())
        self.nu = kwargs.get('nu', int())
        self.return_code = kwargs.get('return_code', int())
        self.input_desired = array.array('d', kwargs.get('input_desired', []))
        self.input_filtered = array.array('d', kwargs.get('input_filtered', []))
        self.input_failsafe = array.array('d', kwargs.get('input_failsafe', []))

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
        if self.t_input_desired != other.t_input_desired:
            return False
        if self.t_regulation_data != other.t_regulation_data:
            return False
        if self.nu != other.nu:
            return False
        if self.return_code != other.return_code:
            return False
        if self.input_desired != other.input_desired:
            return False
        if self.input_filtered != other.input_filtered:
            return False
        if self.input_failsafe != other.input_failsafe:
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
    def t_input_desired(self):
        """Message field 't_input_desired'."""
        return self._t_input_desired

    @t_input_desired.setter
    def t_input_desired(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 't_input_desired' field must be of type 'int'"
            assert value >= -9223372036854775808 and value < 9223372036854775808, \
                "The 't_input_desired' field must be an integer in [-9223372036854775808, 9223372036854775807]"
        self._t_input_desired = value

    @builtins.property
    def t_regulation_data(self):
        """Message field 't_regulation_data'."""
        return self._t_regulation_data

    @t_regulation_data.setter
    def t_regulation_data(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 't_regulation_data' field must be of type 'int'"
            assert value >= -9223372036854775808 and value < 9223372036854775808, \
                "The 't_regulation_data' field must be an integer in [-9223372036854775808, 9223372036854775807]"
        self._t_regulation_data = value

    @builtins.property
    def nu(self):
        """Message field 'nu'."""
        return self._nu

    @nu.setter
    def nu(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'nu' field must be of type 'int'"
            assert value >= 0 and value < 18446744073709551616, \
                "The 'nu' field must be an unsigned integer in [0, 18446744073709551615]"
        self._nu = value

    @builtins.property
    def return_code(self):
        """Message field 'return_code'."""
        return self._return_code

    @return_code.setter
    def return_code(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'return_code' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'return_code' field must be an integer in [-2147483648, 2147483647]"
        self._return_code = value

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
    def input_filtered(self):
        """Message field 'input_filtered'."""
        return self._input_filtered

    @input_filtered.setter
    def input_filtered(self, value):
        if isinstance(value, array.array):
            assert value.typecode == 'd', \
                "The 'input_filtered' array.array() must have the type code of 'd'"
            self._input_filtered = value
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
                "The 'input_filtered' field must be a set or sequence and each value of type 'float' and each double in [-179769313486231570814527423731704356798070567525844996598917476803157260780028538760589558632766878171540458953514382464234321326889464182768467546703537516986049910576551282076245490090389328944075868508455133942304583236903222948165808559332123348274797826204144723168738177180919299881250404026184124858368.000000, 179769313486231570814527423731704356798070567525844996598917476803157260780028538760589558632766878171540458953514382464234321326889464182768467546703537516986049910576551282076245490090389328944075868508455133942304583236903222948165808559332123348274797826204144723168738177180919299881250404026184124858368.000000]"
        self._input_filtered = array.array('d', value)

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
