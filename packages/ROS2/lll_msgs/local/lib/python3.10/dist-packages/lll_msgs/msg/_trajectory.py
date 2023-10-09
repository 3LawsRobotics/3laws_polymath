# generated from rosidl_generator_py/resource/_idl.py.em
# with input from lll_msgs:msg/Trajectory.idl
# generated code does not contain a copyright notice


# Import statements for member types

# Member 'times'
# Member 'states'
# Member 'inputs'
import array  # noqa: E402, I100

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_Trajectory(type):
    """Metaclass of message 'Trajectory'."""

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
            module = import_type_support('lll_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'lll_msgs.msg.Trajectory')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__trajectory
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__trajectory
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__trajectory
            cls._TYPE_SUPPORT = module.type_support_msg__msg__trajectory
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__trajectory

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


class Trajectory(metaclass=Metaclass_Trajectory):
    """Message class 'Trajectory'."""

    __slots__ = [
        '_header',
        '_nx',
        '_nu',
        '_length',
        '_times',
        '_states',
        '_inputs',
    ]

    _fields_and_field_types = {
        'header': 'std_msgs/Header',
        'nx': 'uint64',
        'nu': 'uint64',
        'length': 'uint64',
        'times': 'sequence<int64>',
        'states': 'sequence<double>',
        'inputs': 'sequence<double>',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['std_msgs', 'msg'], 'Header'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint64'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint64'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint64'),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('int64')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('double')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('double')),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from std_msgs.msg import Header
        self.header = kwargs.get('header', Header())
        self.nx = kwargs.get('nx', int())
        self.nu = kwargs.get('nu', int())
        self.length = kwargs.get('length', int())
        self.times = array.array('q', kwargs.get('times', []))
        self.states = array.array('d', kwargs.get('states', []))
        self.inputs = array.array('d', kwargs.get('inputs', []))

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
        if self.nx != other.nx:
            return False
        if self.nu != other.nu:
            return False
        if self.length != other.length:
            return False
        if self.times != other.times:
            return False
        if self.states != other.states:
            return False
        if self.inputs != other.inputs:
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
    def nx(self):
        """Message field 'nx'."""
        return self._nx

    @nx.setter
    def nx(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'nx' field must be of type 'int'"
            assert value >= 0 and value < 18446744073709551616, \
                "The 'nx' field must be an unsigned integer in [0, 18446744073709551615]"
        self._nx = value

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
    def length(self):
        """Message field 'length'."""
        return self._length

    @length.setter
    def length(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'length' field must be of type 'int'"
            assert value >= 0 and value < 18446744073709551616, \
                "The 'length' field must be an unsigned integer in [0, 18446744073709551615]"
        self._length = value

    @builtins.property
    def times(self):
        """Message field 'times'."""
        return self._times

    @times.setter
    def times(self, value):
        if isinstance(value, array.array):
            assert value.typecode == 'q', \
                "The 'times' array.array() must have the type code of 'q'"
            self._times = value
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
                 all(isinstance(v, int) for v in value) and
                 all(val >= -9223372036854775808 and val < 9223372036854775808 for val in value)), \
                "The 'times' field must be a set or sequence and each value of type 'int' and each integer in [-9223372036854775808, 9223372036854775807]"
        self._times = array.array('q', value)

    @builtins.property
    def states(self):
        """Message field 'states'."""
        return self._states

    @states.setter
    def states(self, value):
        if isinstance(value, array.array):
            assert value.typecode == 'd', \
                "The 'states' array.array() must have the type code of 'd'"
            self._states = value
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
                "The 'states' field must be a set or sequence and each value of type 'float' and each double in [-179769313486231570814527423731704356798070567525844996598917476803157260780028538760589558632766878171540458953514382464234321326889464182768467546703537516986049910576551282076245490090389328944075868508455133942304583236903222948165808559332123348274797826204144723168738177180919299881250404026184124858368.000000, 179769313486231570814527423731704356798070567525844996598917476803157260780028538760589558632766878171540458953514382464234321326889464182768467546703537516986049910576551282076245490090389328944075868508455133942304583236903222948165808559332123348274797826204144723168738177180919299881250404026184124858368.000000]"
        self._states = array.array('d', value)

    @builtins.property
    def inputs(self):
        """Message field 'inputs'."""
        return self._inputs

    @inputs.setter
    def inputs(self, value):
        if isinstance(value, array.array):
            assert value.typecode == 'd', \
                "The 'inputs' array.array() must have the type code of 'd'"
            self._inputs = value
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
                "The 'inputs' field must be a set or sequence and each value of type 'float' and each double in [-179769313486231570814527423731704356798070567525844996598917476803157260780028538760589558632766878171540458953514382464234321326889464182768467546703537516986049910576551282076245490090389328944075868508455133942304583236903222948165808559332123348274797826204144723168738177180919299881250404026184124858368.000000, 179769313486231570814527423731704356798070567525844996598917476803157260780028538760589558632766878171540458953514382464234321326889464182768467546703537516986049910576551282076245490090389328944075868508455133942304583236903222948165808559332123348274797826204144723168738177180919299881250404026184124858368.000000]"
        self._inputs = array.array('d', value)
