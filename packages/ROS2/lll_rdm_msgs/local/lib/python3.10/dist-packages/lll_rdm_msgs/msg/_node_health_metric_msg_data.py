# generated from rosidl_generator_py/resource/_idl.py.em
# with input from lll_rdm_msgs:msg/NodeHealthMetricMsgData.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_NodeHealthMetricMsgData(type):
    """Metaclass of message 'NodeHealthMetricMsgData'."""

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
                'lll_rdm_msgs.msg.NodeHealthMetricMsgData')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__node_health_metric_msg_data
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__node_health_metric_msg_data
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__node_health_metric_msg_data
            cls._TYPE_SUPPORT = module.type_support_msg__msg__node_health_metric_msg_data
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__node_health_metric_msg_data

            from lll_rdm_msgs.msg import NodeHealthMetricMsgTopicData
            if NodeHealthMetricMsgTopicData.__class__._TYPE_SUPPORT is None:
                NodeHealthMetricMsgTopicData.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class NodeHealthMetricMsgData(metaclass=Metaclass_NodeHealthMetricMsgData):
    """Message class 'NodeHealthMetricMsgData'."""

    __slots__ = [
        '_timeout',
        '_time_since_last_msg',
        '_ok',
        '_topics',
    ]

    _fields_and_field_types = {
        'timeout': 'boolean',
        'time_since_last_msg': 'int64',
        'ok': 'boolean',
        'topics': 'sequence<lll_rdm_msgs/NodeHealthMetricMsgTopicData>',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('int64'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.NamespacedType(['lll_rdm_msgs', 'msg'], 'NodeHealthMetricMsgTopicData')),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.timeout = kwargs.get('timeout', bool())
        self.time_since_last_msg = kwargs.get('time_since_last_msg', int())
        self.ok = kwargs.get('ok', bool())
        self.topics = kwargs.get('topics', [])

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
        if self.timeout != other.timeout:
            return False
        if self.time_since_last_msg != other.time_since_last_msg:
            return False
        if self.ok != other.ok:
            return False
        if self.topics != other.topics:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def timeout(self):
        """Message field 'timeout'."""
        return self._timeout

    @timeout.setter
    def timeout(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'timeout' field must be of type 'bool'"
        self._timeout = value

    @builtins.property
    def time_since_last_msg(self):
        """Message field 'time_since_last_msg'."""
        return self._time_since_last_msg

    @time_since_last_msg.setter
    def time_since_last_msg(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'time_since_last_msg' field must be of type 'int'"
            assert value >= -9223372036854775808 and value < 9223372036854775808, \
                "The 'time_since_last_msg' field must be an integer in [-9223372036854775808, 9223372036854775807]"
        self._time_since_last_msg = value

    @builtins.property
    def ok(self):
        """Message field 'ok'."""
        return self._ok

    @ok.setter
    def ok(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'ok' field must be of type 'bool'"
        self._ok = value

    @builtins.property
    def topics(self):
        """Message field 'topics'."""
        return self._topics

    @topics.setter
    def topics(self, value):
        if __debug__:
            from lll_rdm_msgs.msg import NodeHealthMetricMsgTopicData
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
                 all(isinstance(v, NodeHealthMetricMsgTopicData) for v in value) and
                 True), \
                "The 'topics' field must be a set or sequence and each value of type 'NodeHealthMetricMsgTopicData'"
        self._topics = value
