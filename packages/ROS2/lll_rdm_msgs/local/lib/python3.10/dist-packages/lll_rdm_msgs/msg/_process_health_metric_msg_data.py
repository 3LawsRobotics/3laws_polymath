# generated from rosidl_generator_py/resource/_idl.py.em
# with input from lll_rdm_msgs:msg/ProcessHealthMetricMsgData.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_ProcessHealthMetricMsgData(type):
    """Metaclass of message 'ProcessHealthMetricMsgData'."""

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
                'lll_rdm_msgs.msg.ProcessHealthMetricMsgData')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__process_health_metric_msg_data
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__process_health_metric_msg_data
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__process_health_metric_msg_data
            cls._TYPE_SUPPORT = module.type_support_msg__msg__process_health_metric_msg_data
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__process_health_metric_msg_data

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class ProcessHealthMetricMsgData(metaclass=Metaclass_ProcessHealthMetricMsgData):
    """Message class 'ProcessHealthMetricMsgData'."""

    __slots__ = [
        '_cpu_usage',
        '_cpu_usage_total',
        '_ram_usage',
        '_n_threads',
        '_process_up_time',
        '_process_run_time',
        '_io_total_read',
        '_io_total_write',
        '_io_disk_read',
        '_io_disk_write',
    ]

    _fields_and_field_types = {
        'cpu_usage': 'double',
        'cpu_usage_total': 'double',
        'ram_usage': 'uint64',
        'n_threads': 'uint64',
        'process_up_time': 'double',
        'process_run_time': 'double',
        'io_total_read': 'uint64',
        'io_total_write': 'uint64',
        'io_disk_read': 'uint64',
        'io_disk_write': 'uint64',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint64'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint64'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint64'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint64'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint64'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint64'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.cpu_usage = kwargs.get('cpu_usage', float())
        self.cpu_usage_total = kwargs.get('cpu_usage_total', float())
        self.ram_usage = kwargs.get('ram_usage', int())
        self.n_threads = kwargs.get('n_threads', int())
        self.process_up_time = kwargs.get('process_up_time', float())
        self.process_run_time = kwargs.get('process_run_time', float())
        self.io_total_read = kwargs.get('io_total_read', int())
        self.io_total_write = kwargs.get('io_total_write', int())
        self.io_disk_read = kwargs.get('io_disk_read', int())
        self.io_disk_write = kwargs.get('io_disk_write', int())

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
        if self.cpu_usage != other.cpu_usage:
            return False
        if self.cpu_usage_total != other.cpu_usage_total:
            return False
        if self.ram_usage != other.ram_usage:
            return False
        if self.n_threads != other.n_threads:
            return False
        if self.process_up_time != other.process_up_time:
            return False
        if self.process_run_time != other.process_run_time:
            return False
        if self.io_total_read != other.io_total_read:
            return False
        if self.io_total_write != other.io_total_write:
            return False
        if self.io_disk_read != other.io_disk_read:
            return False
        if self.io_disk_write != other.io_disk_write:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def cpu_usage(self):
        """Message field 'cpu_usage'."""
        return self._cpu_usage

    @cpu_usage.setter
    def cpu_usage(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'cpu_usage' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'cpu_usage' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._cpu_usage = value

    @builtins.property
    def cpu_usage_total(self):
        """Message field 'cpu_usage_total'."""
        return self._cpu_usage_total

    @cpu_usage_total.setter
    def cpu_usage_total(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'cpu_usage_total' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'cpu_usage_total' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._cpu_usage_total = value

    @builtins.property
    def ram_usage(self):
        """Message field 'ram_usage'."""
        return self._ram_usage

    @ram_usage.setter
    def ram_usage(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'ram_usage' field must be of type 'int'"
            assert value >= 0 and value < 18446744073709551616, \
                "The 'ram_usage' field must be an unsigned integer in [0, 18446744073709551615]"
        self._ram_usage = value

    @builtins.property
    def n_threads(self):
        """Message field 'n_threads'."""
        return self._n_threads

    @n_threads.setter
    def n_threads(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'n_threads' field must be of type 'int'"
            assert value >= 0 and value < 18446744073709551616, \
                "The 'n_threads' field must be an unsigned integer in [0, 18446744073709551615]"
        self._n_threads = value

    @builtins.property
    def process_up_time(self):
        """Message field 'process_up_time'."""
        return self._process_up_time

    @process_up_time.setter
    def process_up_time(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'process_up_time' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'process_up_time' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._process_up_time = value

    @builtins.property
    def process_run_time(self):
        """Message field 'process_run_time'."""
        return self._process_run_time

    @process_run_time.setter
    def process_run_time(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'process_run_time' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'process_run_time' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._process_run_time = value

    @builtins.property
    def io_total_read(self):
        """Message field 'io_total_read'."""
        return self._io_total_read

    @io_total_read.setter
    def io_total_read(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'io_total_read' field must be of type 'int'"
            assert value >= 0 and value < 18446744073709551616, \
                "The 'io_total_read' field must be an unsigned integer in [0, 18446744073709551615]"
        self._io_total_read = value

    @builtins.property
    def io_total_write(self):
        """Message field 'io_total_write'."""
        return self._io_total_write

    @io_total_write.setter
    def io_total_write(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'io_total_write' field must be of type 'int'"
            assert value >= 0 and value < 18446744073709551616, \
                "The 'io_total_write' field must be an unsigned integer in [0, 18446744073709551615]"
        self._io_total_write = value

    @builtins.property
    def io_disk_read(self):
        """Message field 'io_disk_read'."""
        return self._io_disk_read

    @io_disk_read.setter
    def io_disk_read(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'io_disk_read' field must be of type 'int'"
            assert value >= 0 and value < 18446744073709551616, \
                "The 'io_disk_read' field must be an unsigned integer in [0, 18446744073709551615]"
        self._io_disk_read = value

    @builtins.property
    def io_disk_write(self):
        """Message field 'io_disk_write'."""
        return self._io_disk_write

    @io_disk_write.setter
    def io_disk_write(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'io_disk_write' field must be of type 'int'"
            assert value >= 0 and value < 18446744073709551616, \
                "The 'io_disk_write' field must be an unsigned integer in [0, 18446744073709551615]"
        self._io_disk_write = value
