# generated from rosidl_generator_py/resource/_idl.py.em
# with input from lll_rdm_msgs:msg/SystemResourcesInputMsgData.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_SystemResourcesInputMsgData(type):
    """Metaclass of message 'SystemResourcesInputMsgData'."""

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
                'lll_rdm_msgs.msg.SystemResourcesInputMsgData')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__system_resources_input_msg_data
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__system_resources_input_msg_data
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__system_resources_input_msg_data
            cls._TYPE_SUPPORT = module.type_support_msg__msg__system_resources_input_msg_data
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__system_resources_input_msg_data

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class SystemResourcesInputMsgData(metaclass=Metaclass_SystemResourcesInputMsgData):
    """Message class 'SystemResourcesInputMsgData'."""

    __slots__ = [
        '_system_id',
        '_cpu_load',
        '_ram_usage',
        '_disk_usage',
        '_network_read',
        '_network_write',
        '_cpu_nb',
        '_procs_nb',
    ]

    _fields_and_field_types = {
        'system_id': 'string',
        'cpu_load': 'double',
        'ram_usage': 'double',
        'disk_usage': 'double',
        'network_read': 'double',
        'network_write': 'double',
        'cpu_nb': 'uint32',
        'procs_nb': 'uint32',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.system_id = kwargs.get('system_id', str())
        self.cpu_load = kwargs.get('cpu_load', float())
        self.ram_usage = kwargs.get('ram_usage', float())
        self.disk_usage = kwargs.get('disk_usage', float())
        self.network_read = kwargs.get('network_read', float())
        self.network_write = kwargs.get('network_write', float())
        self.cpu_nb = kwargs.get('cpu_nb', int())
        self.procs_nb = kwargs.get('procs_nb', int())

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
        if self.system_id != other.system_id:
            return False
        if self.cpu_load != other.cpu_load:
            return False
        if self.ram_usage != other.ram_usage:
            return False
        if self.disk_usage != other.disk_usage:
            return False
        if self.network_read != other.network_read:
            return False
        if self.network_write != other.network_write:
            return False
        if self.cpu_nb != other.cpu_nb:
            return False
        if self.procs_nb != other.procs_nb:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def system_id(self):
        """Message field 'system_id'."""
        return self._system_id

    @system_id.setter
    def system_id(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'system_id' field must be of type 'str'"
        self._system_id = value

    @builtins.property
    def cpu_load(self):
        """Message field 'cpu_load'."""
        return self._cpu_load

    @cpu_load.setter
    def cpu_load(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'cpu_load' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'cpu_load' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._cpu_load = value

    @builtins.property
    def ram_usage(self):
        """Message field 'ram_usage'."""
        return self._ram_usage

    @ram_usage.setter
    def ram_usage(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'ram_usage' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'ram_usage' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._ram_usage = value

    @builtins.property
    def disk_usage(self):
        """Message field 'disk_usage'."""
        return self._disk_usage

    @disk_usage.setter
    def disk_usage(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'disk_usage' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'disk_usage' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._disk_usage = value

    @builtins.property
    def network_read(self):
        """Message field 'network_read'."""
        return self._network_read

    @network_read.setter
    def network_read(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'network_read' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'network_read' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._network_read = value

    @builtins.property
    def network_write(self):
        """Message field 'network_write'."""
        return self._network_write

    @network_write.setter
    def network_write(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'network_write' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'network_write' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._network_write = value

    @builtins.property
    def cpu_nb(self):
        """Message field 'cpu_nb'."""
        return self._cpu_nb

    @cpu_nb.setter
    def cpu_nb(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'cpu_nb' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'cpu_nb' field must be an unsigned integer in [0, 4294967295]"
        self._cpu_nb = value

    @builtins.property
    def procs_nb(self):
        """Message field 'procs_nb'."""
        return self._procs_nb

    @procs_nb.setter
    def procs_nb(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'procs_nb' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'procs_nb' field must be an unsigned integer in [0, 4294967295]"
        self._procs_nb = value
