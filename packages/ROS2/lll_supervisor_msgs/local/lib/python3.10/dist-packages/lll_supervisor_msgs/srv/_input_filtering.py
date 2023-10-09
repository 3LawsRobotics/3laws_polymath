# generated from rosidl_generator_py/resource/_idl.py.em
# with input from lll_supervisor_msgs:srv/InputFiltering.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_InputFiltering_Request(type):
    """Metaclass of message 'InputFiltering_Request'."""

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
                'lll_supervisor_msgs.srv.InputFiltering_Request')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__input_filtering__request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__input_filtering__request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__input_filtering__request
            cls._TYPE_SUPPORT = module.type_support_msg__srv__input_filtering__request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__input_filtering__request

            from lll_msgs.msg import Float64VectorStamped
            if Float64VectorStamped.__class__._TYPE_SUPPORT is None:
                Float64VectorStamped.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class InputFiltering_Request(metaclass=Metaclass_InputFiltering_Request):
    """Message class 'InputFiltering_Request'."""

    __slots__ = [
        '_input_desired',
    ]

    _fields_and_field_types = {
        'input_desired': 'lll_msgs/Float64VectorStamped',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['lll_msgs', 'msg'], 'Float64VectorStamped'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from lll_msgs.msg import Float64VectorStamped
        self.input_desired = kwargs.get('input_desired', Float64VectorStamped())

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
        if self.input_desired != other.input_desired:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def input_desired(self):
        """Message field 'input_desired'."""
        return self._input_desired

    @input_desired.setter
    def input_desired(self, value):
        if __debug__:
            from lll_msgs.msg import Float64VectorStamped
            assert \
                isinstance(value, Float64VectorStamped), \
                "The 'input_desired' field must be a sub message of type 'Float64VectorStamped'"
        self._input_desired = value


# Import statements for member types

# already imported above
# import builtins

# already imported above
# import rosidl_parser.definition


class Metaclass_InputFiltering_Response(type):
    """Metaclass of message 'InputFiltering_Response'."""

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
                'lll_supervisor_msgs.srv.InputFiltering_Response')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__input_filtering__response
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__input_filtering__response
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__input_filtering__response
            cls._TYPE_SUPPORT = module.type_support_msg__srv__input_filtering__response
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__input_filtering__response

            from lll_supervisor_msgs.msg import InputFilteringResult
            if InputFilteringResult.__class__._TYPE_SUPPORT is None:
                InputFilteringResult.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class InputFiltering_Response(metaclass=Metaclass_InputFiltering_Response):
    """Message class 'InputFiltering_Response'."""

    __slots__ = [
        '_ready',
        '_res',
    ]

    _fields_and_field_types = {
        'ready': 'boolean',
        'res': 'lll_supervisor_msgs/InputFilteringResult',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['lll_supervisor_msgs', 'msg'], 'InputFilteringResult'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.ready = kwargs.get('ready', bool())
        from lll_supervisor_msgs.msg import InputFilteringResult
        self.res = kwargs.get('res', InputFilteringResult())

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
        if self.ready != other.ready:
            return False
        if self.res != other.res:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def ready(self):
        """Message field 'ready'."""
        return self._ready

    @ready.setter
    def ready(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'ready' field must be of type 'bool'"
        self._ready = value

    @builtins.property
    def res(self):
        """Message field 'res'."""
        return self._res

    @res.setter
    def res(self, value):
        if __debug__:
            from lll_supervisor_msgs.msg import InputFilteringResult
            assert \
                isinstance(value, InputFilteringResult), \
                "The 'res' field must be a sub message of type 'InputFilteringResult'"
        self._res = value


class Metaclass_InputFiltering(type):
    """Metaclass of service 'InputFiltering'."""

    _TYPE_SUPPORT = None

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('lll_supervisor_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'lll_supervisor_msgs.srv.InputFiltering')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv__srv__input_filtering

            from lll_supervisor_msgs.srv import _input_filtering
            if _input_filtering.Metaclass_InputFiltering_Request._TYPE_SUPPORT is None:
                _input_filtering.Metaclass_InputFiltering_Request.__import_type_support__()
            if _input_filtering.Metaclass_InputFiltering_Response._TYPE_SUPPORT is None:
                _input_filtering.Metaclass_InputFiltering_Response.__import_type_support__()


class InputFiltering(metaclass=Metaclass_InputFiltering):
    from lll_supervisor_msgs.srv._input_filtering import InputFiltering_Request as Request
    from lll_supervisor_msgs.srv._input_filtering import InputFiltering_Response as Response

    def __init__(self):
        raise NotImplementedError('Service classes can not be instantiated')
