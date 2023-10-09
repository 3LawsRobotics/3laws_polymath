# generated from rosidl_generator_py/resource/_idl.py.em
# with input from lll_rdm_msgs:msg/SensorNoiseData.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_SensorNoiseData(type):
    """Metaclass of message 'SensorNoiseData'."""

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
                'lll_rdm_msgs.msg.SensorNoiseData')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__sensor_noise_data
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__sensor_noise_data
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__sensor_noise_data
            cls._TYPE_SUPPORT = module.type_support_msg__msg__sensor_noise_data
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__sensor_noise_data

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class SensorNoiseData(metaclass=Metaclass_SensorNoiseData):
    """Message class 'SensorNoiseData'."""

    __slots__ = [
        '_average_std_error',
        '_max_std_error',
        '_angle_max_error',
        '_percent_of_sigma',
        '_p_value',
        '_reject_model',
    ]

    _fields_and_field_types = {
        'average_std_error': 'double',
        'max_std_error': 'double',
        'angle_max_error': 'double',
        'percent_of_sigma': 'double',
        'p_value': 'double',
        'reject_model': 'boolean',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.average_std_error = kwargs.get('average_std_error', float())
        self.max_std_error = kwargs.get('max_std_error', float())
        self.angle_max_error = kwargs.get('angle_max_error', float())
        self.percent_of_sigma = kwargs.get('percent_of_sigma', float())
        self.p_value = kwargs.get('p_value', float())
        self.reject_model = kwargs.get('reject_model', bool())

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
        if self.average_std_error != other.average_std_error:
            return False
        if self.max_std_error != other.max_std_error:
            return False
        if self.angle_max_error != other.angle_max_error:
            return False
        if self.percent_of_sigma != other.percent_of_sigma:
            return False
        if self.p_value != other.p_value:
            return False
        if self.reject_model != other.reject_model:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def average_std_error(self):
        """Message field 'average_std_error'."""
        return self._average_std_error

    @average_std_error.setter
    def average_std_error(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'average_std_error' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'average_std_error' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._average_std_error = value

    @builtins.property
    def max_std_error(self):
        """Message field 'max_std_error'."""
        return self._max_std_error

    @max_std_error.setter
    def max_std_error(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'max_std_error' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'max_std_error' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._max_std_error = value

    @builtins.property
    def angle_max_error(self):
        """Message field 'angle_max_error'."""
        return self._angle_max_error

    @angle_max_error.setter
    def angle_max_error(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'angle_max_error' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'angle_max_error' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._angle_max_error = value

    @builtins.property
    def percent_of_sigma(self):
        """Message field 'percent_of_sigma'."""
        return self._percent_of_sigma

    @percent_of_sigma.setter
    def percent_of_sigma(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'percent_of_sigma' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'percent_of_sigma' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._percent_of_sigma = value

    @builtins.property
    def p_value(self):
        """Message field 'p_value'."""
        return self._p_value

    @p_value.setter
    def p_value(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'p_value' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'p_value' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._p_value = value

    @builtins.property
    def reject_model(self):
        """Message field 'reject_model'."""
        return self._reject_model

    @reject_model.setter
    def reject_model(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'reject_model' field must be of type 'bool'"
        self._reject_model = value
