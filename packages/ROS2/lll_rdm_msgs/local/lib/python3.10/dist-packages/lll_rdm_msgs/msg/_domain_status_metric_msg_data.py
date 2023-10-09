# generated from rosidl_generator_py/resource/_idl.py.em
# with input from lll_rdm_msgs:msg/DomainStatusMetricMsgData.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_DomainStatusMetricMsgData(type):
    """Metaclass of message 'DomainStatusMetricMsgData'."""

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
                'lll_rdm_msgs.msg.DomainStatusMetricMsgData')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__domain_status_metric_msg_data
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__domain_status_metric_msg_data
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__domain_status_metric_msg_data
            cls._TYPE_SUPPORT = module.type_support_msg__msg__domain_status_metric_msg_data
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__domain_status_metric_msg_data

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class DomainStatusMetricMsgData(metaclass=Metaclass_DomainStatusMetricMsgData):
    """Message class 'DomainStatusMetricMsgData'."""

    __slots__ = [
        '_system_status',
        '_behavior_status',
        '_hardware_status',
        '_perception_status',
        '_control_status',
    ]

    _fields_and_field_types = {
        'system_status': 'string',
        'behavior_status': 'string',
        'hardware_status': 'string',
        'perception_status': 'string',
        'control_status': 'string',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.system_status = kwargs.get('system_status', str())
        self.behavior_status = kwargs.get('behavior_status', str())
        self.hardware_status = kwargs.get('hardware_status', str())
        self.perception_status = kwargs.get('perception_status', str())
        self.control_status = kwargs.get('control_status', str())

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
        if self.system_status != other.system_status:
            return False
        if self.behavior_status != other.behavior_status:
            return False
        if self.hardware_status != other.hardware_status:
            return False
        if self.perception_status != other.perception_status:
            return False
        if self.control_status != other.control_status:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def system_status(self):
        """Message field 'system_status'."""
        return self._system_status

    @system_status.setter
    def system_status(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'system_status' field must be of type 'str'"
        self._system_status = value

    @builtins.property
    def behavior_status(self):
        """Message field 'behavior_status'."""
        return self._behavior_status

    @behavior_status.setter
    def behavior_status(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'behavior_status' field must be of type 'str'"
        self._behavior_status = value

    @builtins.property
    def hardware_status(self):
        """Message field 'hardware_status'."""
        return self._hardware_status

    @hardware_status.setter
    def hardware_status(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'hardware_status' field must be of type 'str'"
        self._hardware_status = value

    @builtins.property
    def perception_status(self):
        """Message field 'perception_status'."""
        return self._perception_status

    @perception_status.setter
    def perception_status(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'perception_status' field must be of type 'str'"
        self._perception_status = value

    @builtins.property
    def control_status(self):
        """Message field 'control_status'."""
        return self._control_status

    @control_status.setter
    def control_status(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'control_status' field must be of type 'str'"
        self._control_status = value
