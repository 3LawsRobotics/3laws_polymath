# generated from rosidl_generator_py/resource/_idl.py.em
# with input from lll_supervisor_msgs:msg/RegulationData.idl
# generated code does not contain a copyright notice


# Import statements for member types

# Member 'lfh'
# Member 'lgh'
# Member 'dh_dt'
# Member 'safety_val'
# Member 'failsafe_input'
import array  # noqa: E402, I100

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_RegulationData(type):
    """Metaclass of message 'RegulationData'."""

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
                'lll_supervisor_msgs.msg.RegulationData')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__regulation_data
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__regulation_data
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__regulation_data
            cls._TYPE_SUPPORT = module.type_support_msg__msg__regulation_data
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__regulation_data

            from lll_supervisor_msgs.msg import InputConstraints
            if InputConstraints.__class__._TYPE_SUPPORT is None:
                InputConstraints.__class__.__import_type_support__()

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


class RegulationData(metaclass=Metaclass_RegulationData):
    """Message class 'RegulationData'."""

    __slots__ = [
        '_header',
        '_t',
        '_nu',
        '_n_safety_cstr',
        '_n_failsafes',
        '_input_cstr',
        '_lfh',
        '_lgh',
        '_dh_dt',
        '_safety_val',
        '_failsafe_input',
    ]

    _fields_and_field_types = {
        'header': 'std_msgs/Header',
        't': 'int64',
        'nu': 'uint64',
        'n_safety_cstr': 'uint64',
        'n_failsafes': 'uint64',
        'input_cstr': 'lll_supervisor_msgs/InputConstraints',
        'lfh': 'sequence<double>',
        'lgh': 'sequence<double>',
        'dh_dt': 'sequence<double>',
        'safety_val': 'sequence<double>',
        'failsafe_input': 'sequence<double>',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['std_msgs', 'msg'], 'Header'),  # noqa: E501
        rosidl_parser.definition.BasicType('int64'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint64'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint64'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint64'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['lll_supervisor_msgs', 'msg'], 'InputConstraints'),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('double')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('double')),  # noqa: E501
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
        self.t = kwargs.get('t', int())
        self.nu = kwargs.get('nu', int())
        self.n_safety_cstr = kwargs.get('n_safety_cstr', int())
        self.n_failsafes = kwargs.get('n_failsafes', int())
        from lll_supervisor_msgs.msg import InputConstraints
        self.input_cstr = kwargs.get('input_cstr', InputConstraints())
        self.lfh = array.array('d', kwargs.get('lfh', []))
        self.lgh = array.array('d', kwargs.get('lgh', []))
        self.dh_dt = array.array('d', kwargs.get('dh_dt', []))
        self.safety_val = array.array('d', kwargs.get('safety_val', []))
        self.failsafe_input = array.array('d', kwargs.get('failsafe_input', []))

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
        if self.t != other.t:
            return False
        if self.nu != other.nu:
            return False
        if self.n_safety_cstr != other.n_safety_cstr:
            return False
        if self.n_failsafes != other.n_failsafes:
            return False
        if self.input_cstr != other.input_cstr:
            return False
        if self.lfh != other.lfh:
            return False
        if self.lgh != other.lgh:
            return False
        if self.dh_dt != other.dh_dt:
            return False
        if self.safety_val != other.safety_val:
            return False
        if self.failsafe_input != other.failsafe_input:
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
    def t(self):
        """Message field 't'."""
        return self._t

    @t.setter
    def t(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 't' field must be of type 'int'"
            assert value >= -9223372036854775808 and value < 9223372036854775808, \
                "The 't' field must be an integer in [-9223372036854775808, 9223372036854775807]"
        self._t = value

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
    def n_safety_cstr(self):
        """Message field 'n_safety_cstr'."""
        return self._n_safety_cstr

    @n_safety_cstr.setter
    def n_safety_cstr(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'n_safety_cstr' field must be of type 'int'"
            assert value >= 0 and value < 18446744073709551616, \
                "The 'n_safety_cstr' field must be an unsigned integer in [0, 18446744073709551615]"
        self._n_safety_cstr = value

    @builtins.property
    def n_failsafes(self):
        """Message field 'n_failsafes'."""
        return self._n_failsafes

    @n_failsafes.setter
    def n_failsafes(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'n_failsafes' field must be of type 'int'"
            assert value >= 0 and value < 18446744073709551616, \
                "The 'n_failsafes' field must be an unsigned integer in [0, 18446744073709551615]"
        self._n_failsafes = value

    @builtins.property
    def input_cstr(self):
        """Message field 'input_cstr'."""
        return self._input_cstr

    @input_cstr.setter
    def input_cstr(self, value):
        if __debug__:
            from lll_supervisor_msgs.msg import InputConstraints
            assert \
                isinstance(value, InputConstraints), \
                "The 'input_cstr' field must be a sub message of type 'InputConstraints'"
        self._input_cstr = value

    @builtins.property
    def lfh(self):
        """Message field 'lfh'."""
        return self._lfh

    @lfh.setter
    def lfh(self, value):
        if isinstance(value, array.array):
            assert value.typecode == 'd', \
                "The 'lfh' array.array() must have the type code of 'd'"
            self._lfh = value
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
                "The 'lfh' field must be a set or sequence and each value of type 'float' and each double in [-179769313486231570814527423731704356798070567525844996598917476803157260780028538760589558632766878171540458953514382464234321326889464182768467546703537516986049910576551282076245490090389328944075868508455133942304583236903222948165808559332123348274797826204144723168738177180919299881250404026184124858368.000000, 179769313486231570814527423731704356798070567525844996598917476803157260780028538760589558632766878171540458953514382464234321326889464182768467546703537516986049910576551282076245490090389328944075868508455133942304583236903222948165808559332123348274797826204144723168738177180919299881250404026184124858368.000000]"
        self._lfh = array.array('d', value)

    @builtins.property
    def lgh(self):
        """Message field 'lgh'."""
        return self._lgh

    @lgh.setter
    def lgh(self, value):
        if isinstance(value, array.array):
            assert value.typecode == 'd', \
                "The 'lgh' array.array() must have the type code of 'd'"
            self._lgh = value
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
                "The 'lgh' field must be a set or sequence and each value of type 'float' and each double in [-179769313486231570814527423731704356798070567525844996598917476803157260780028538760589558632766878171540458953514382464234321326889464182768467546703537516986049910576551282076245490090389328944075868508455133942304583236903222948165808559332123348274797826204144723168738177180919299881250404026184124858368.000000, 179769313486231570814527423731704356798070567525844996598917476803157260780028538760589558632766878171540458953514382464234321326889464182768467546703537516986049910576551282076245490090389328944075868508455133942304583236903222948165808559332123348274797826204144723168738177180919299881250404026184124858368.000000]"
        self._lgh = array.array('d', value)

    @builtins.property
    def dh_dt(self):
        """Message field 'dh_dt'."""
        return self._dh_dt

    @dh_dt.setter
    def dh_dt(self, value):
        if isinstance(value, array.array):
            assert value.typecode == 'd', \
                "The 'dh_dt' array.array() must have the type code of 'd'"
            self._dh_dt = value
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
                "The 'dh_dt' field must be a set or sequence and each value of type 'float' and each double in [-179769313486231570814527423731704356798070567525844996598917476803157260780028538760589558632766878171540458953514382464234321326889464182768467546703537516986049910576551282076245490090389328944075868508455133942304583236903222948165808559332123348274797826204144723168738177180919299881250404026184124858368.000000, 179769313486231570814527423731704356798070567525844996598917476803157260780028538760589558632766878171540458953514382464234321326889464182768467546703537516986049910576551282076245490090389328944075868508455133942304583236903222948165808559332123348274797826204144723168738177180919299881250404026184124858368.000000]"
        self._dh_dt = array.array('d', value)

    @builtins.property
    def safety_val(self):
        """Message field 'safety_val'."""
        return self._safety_val

    @safety_val.setter
    def safety_val(self, value):
        if isinstance(value, array.array):
            assert value.typecode == 'd', \
                "The 'safety_val' array.array() must have the type code of 'd'"
            self._safety_val = value
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
                "The 'safety_val' field must be a set or sequence and each value of type 'float' and each double in [-179769313486231570814527423731704356798070567525844996598917476803157260780028538760589558632766878171540458953514382464234321326889464182768467546703537516986049910576551282076245490090389328944075868508455133942304583236903222948165808559332123348274797826204144723168738177180919299881250404026184124858368.000000, 179769313486231570814527423731704356798070567525844996598917476803157260780028538760589558632766878171540458953514382464234321326889464182768467546703537516986049910576551282076245490090389328944075868508455133942304583236903222948165808559332123348274797826204144723168738177180919299881250404026184124858368.000000]"
        self._safety_val = array.array('d', value)

    @builtins.property
    def failsafe_input(self):
        """Message field 'failsafe_input'."""
        return self._failsafe_input

    @failsafe_input.setter
    def failsafe_input(self, value):
        if isinstance(value, array.array):
            assert value.typecode == 'd', \
                "The 'failsafe_input' array.array() must have the type code of 'd'"
            self._failsafe_input = value
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
                "The 'failsafe_input' field must be a set or sequence and each value of type 'float' and each double in [-179769313486231570814527423731704356798070567525844996598917476803157260780028538760589558632766878171540458953514382464234321326889464182768467546703537516986049910576551282076245490090389328944075868508455133942304583236903222948165808559332123348274797826204144723168738177180919299881250404026184124858368.000000, 179769313486231570814527423731704356798070567525844996598917476803157260780028538760589558632766878171540458953514382464234321326889464182768467546703537516986049910576551282076245490090389328944075868508455133942304583236903222948165808559332123348274797826204144723168738177180919299881250404026184124858368.000000]"
        self._failsafe_input = array.array('d', value)
