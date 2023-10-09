# generated from rosidl_generator_py/resource/_idl.py.em
# with input from lll_supervisor_msgs:msg/InputConstraints.idl
# generated code does not contain a copyright notice


# Import statements for member types

# Member 'lb'
# Member 'm'
# Member 'ub'
import array  # noqa: E402, I100

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_InputConstraints(type):
    """Metaclass of message 'InputConstraints'."""

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
                'lll_supervisor_msgs.msg.InputConstraints')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__input_constraints
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__input_constraints
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__input_constraints
            cls._TYPE_SUPPORT = module.type_support_msg__msg__input_constraints
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__input_constraints

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class InputConstraints(metaclass=Metaclass_InputConstraints):
    """Message class 'InputConstraints'."""

    __slots__ = [
        '_nu',
        '_n_cstr',
        '_lb',
        '_m',
        '_ub',
    ]

    _fields_and_field_types = {
        'nu': 'uint64',
        'n_cstr': 'uint64',
        'lb': 'sequence<double>',
        'm': 'sequence<double>',
        'ub': 'sequence<double>',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('uint64'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint64'),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('double')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('double')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('double')),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.nu = kwargs.get('nu', int())
        self.n_cstr = kwargs.get('n_cstr', int())
        self.lb = array.array('d', kwargs.get('lb', []))
        self.m = array.array('d', kwargs.get('m', []))
        self.ub = array.array('d', kwargs.get('ub', []))

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
        if self.nu != other.nu:
            return False
        if self.n_cstr != other.n_cstr:
            return False
        if self.lb != other.lb:
            return False
        if self.m != other.m:
            return False
        if self.ub != other.ub:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

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
    def n_cstr(self):
        """Message field 'n_cstr'."""
        return self._n_cstr

    @n_cstr.setter
    def n_cstr(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'n_cstr' field must be of type 'int'"
            assert value >= 0 and value < 18446744073709551616, \
                "The 'n_cstr' field must be an unsigned integer in [0, 18446744073709551615]"
        self._n_cstr = value

    @builtins.property
    def lb(self):
        """Message field 'lb'."""
        return self._lb

    @lb.setter
    def lb(self, value):
        if isinstance(value, array.array):
            assert value.typecode == 'd', \
                "The 'lb' array.array() must have the type code of 'd'"
            self._lb = value
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
                "The 'lb' field must be a set or sequence and each value of type 'float' and each double in [-179769313486231570814527423731704356798070567525844996598917476803157260780028538760589558632766878171540458953514382464234321326889464182768467546703537516986049910576551282076245490090389328944075868508455133942304583236903222948165808559332123348274797826204144723168738177180919299881250404026184124858368.000000, 179769313486231570814527423731704356798070567525844996598917476803157260780028538760589558632766878171540458953514382464234321326889464182768467546703537516986049910576551282076245490090389328944075868508455133942304583236903222948165808559332123348274797826204144723168738177180919299881250404026184124858368.000000]"
        self._lb = array.array('d', value)

    @builtins.property
    def m(self):
        """Message field 'm'."""
        return self._m

    @m.setter
    def m(self, value):
        if isinstance(value, array.array):
            assert value.typecode == 'd', \
                "The 'm' array.array() must have the type code of 'd'"
            self._m = value
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
                "The 'm' field must be a set or sequence and each value of type 'float' and each double in [-179769313486231570814527423731704356798070567525844996598917476803157260780028538760589558632766878171540458953514382464234321326889464182768467546703537516986049910576551282076245490090389328944075868508455133942304583236903222948165808559332123348274797826204144723168738177180919299881250404026184124858368.000000, 179769313486231570814527423731704356798070567525844996598917476803157260780028538760589558632766878171540458953514382464234321326889464182768467546703537516986049910576551282076245490090389328944075868508455133942304583236903222948165808559332123348274797826204144723168738177180919299881250404026184124858368.000000]"
        self._m = array.array('d', value)

    @builtins.property
    def ub(self):
        """Message field 'ub'."""
        return self._ub

    @ub.setter
    def ub(self, value):
        if isinstance(value, array.array):
            assert value.typecode == 'd', \
                "The 'ub' array.array() must have the type code of 'd'"
            self._ub = value
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
                "The 'ub' field must be a set or sequence and each value of type 'float' and each double in [-179769313486231570814527423731704356798070567525844996598917476803157260780028538760589558632766878171540458953514382464234321326889464182768467546703537516986049910576551282076245490090389328944075868508455133942304583236903222948165808559332123348274797826204144723168738177180919299881250404026184124858368.000000, 179769313486231570814527423731704356798070567525844996598917476803157260780028538760589558632766878171540458953514382464234321326889464182768467546703537516986049910576551282076245490090389328944075868508455133942304583236903222948165808559332123348274797826204144723168738177180919299881250404026184124858368.000000]"
        self._ub = array.array('d', value)
