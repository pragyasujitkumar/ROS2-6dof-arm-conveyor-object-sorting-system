// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from conveyorbelt_msgs:srv/ConveyorBeltControl.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "conveyorbelt_msgs/srv/detail/conveyor_belt_control__rosidl_typesupport_introspection_c.h"
#include "conveyorbelt_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "conveyorbelt_msgs/srv/detail/conveyor_belt_control__functions.h"
#include "conveyorbelt_msgs/srv/detail/conveyor_belt_control__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void conveyorbelt_msgs__srv__ConveyorBeltControl_Request__rosidl_typesupport_introspection_c__ConveyorBeltControl_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  conveyorbelt_msgs__srv__ConveyorBeltControl_Request__init(message_memory);
}

void conveyorbelt_msgs__srv__ConveyorBeltControl_Request__rosidl_typesupport_introspection_c__ConveyorBeltControl_Request_fini_function(void * message_memory)
{
  conveyorbelt_msgs__srv__ConveyorBeltControl_Request__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember conveyorbelt_msgs__srv__ConveyorBeltControl_Request__rosidl_typesupport_introspection_c__ConveyorBeltControl_Request_message_member_array[1] = {
  {
    "power",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(conveyorbelt_msgs__srv__ConveyorBeltControl_Request, power),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers conveyorbelt_msgs__srv__ConveyorBeltControl_Request__rosidl_typesupport_introspection_c__ConveyorBeltControl_Request_message_members = {
  "conveyorbelt_msgs__srv",  // message namespace
  "ConveyorBeltControl_Request",  // message name
  1,  // number of fields
  sizeof(conveyorbelt_msgs__srv__ConveyorBeltControl_Request),
  conveyorbelt_msgs__srv__ConveyorBeltControl_Request__rosidl_typesupport_introspection_c__ConveyorBeltControl_Request_message_member_array,  // message members
  conveyorbelt_msgs__srv__ConveyorBeltControl_Request__rosidl_typesupport_introspection_c__ConveyorBeltControl_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  conveyorbelt_msgs__srv__ConveyorBeltControl_Request__rosidl_typesupport_introspection_c__ConveyorBeltControl_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t conveyorbelt_msgs__srv__ConveyorBeltControl_Request__rosidl_typesupport_introspection_c__ConveyorBeltControl_Request_message_type_support_handle = {
  0,
  &conveyorbelt_msgs__srv__ConveyorBeltControl_Request__rosidl_typesupport_introspection_c__ConveyorBeltControl_Request_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_conveyorbelt_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, conveyorbelt_msgs, srv, ConveyorBeltControl_Request)() {
  if (!conveyorbelt_msgs__srv__ConveyorBeltControl_Request__rosidl_typesupport_introspection_c__ConveyorBeltControl_Request_message_type_support_handle.typesupport_identifier) {
    conveyorbelt_msgs__srv__ConveyorBeltControl_Request__rosidl_typesupport_introspection_c__ConveyorBeltControl_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &conveyorbelt_msgs__srv__ConveyorBeltControl_Request__rosidl_typesupport_introspection_c__ConveyorBeltControl_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "conveyorbelt_msgs/srv/detail/conveyor_belt_control__rosidl_typesupport_introspection_c.h"
// already included above
// #include "conveyorbelt_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "conveyorbelt_msgs/srv/detail/conveyor_belt_control__functions.h"
// already included above
// #include "conveyorbelt_msgs/srv/detail/conveyor_belt_control__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void conveyorbelt_msgs__srv__ConveyorBeltControl_Response__rosidl_typesupport_introspection_c__ConveyorBeltControl_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  conveyorbelt_msgs__srv__ConveyorBeltControl_Response__init(message_memory);
}

void conveyorbelt_msgs__srv__ConveyorBeltControl_Response__rosidl_typesupport_introspection_c__ConveyorBeltControl_Response_fini_function(void * message_memory)
{
  conveyorbelt_msgs__srv__ConveyorBeltControl_Response__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember conveyorbelt_msgs__srv__ConveyorBeltControl_Response__rosidl_typesupport_introspection_c__ConveyorBeltControl_Response_message_member_array[1] = {
  {
    "success",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(conveyorbelt_msgs__srv__ConveyorBeltControl_Response, success),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers conveyorbelt_msgs__srv__ConveyorBeltControl_Response__rosidl_typesupport_introspection_c__ConveyorBeltControl_Response_message_members = {
  "conveyorbelt_msgs__srv",  // message namespace
  "ConveyorBeltControl_Response",  // message name
  1,  // number of fields
  sizeof(conveyorbelt_msgs__srv__ConveyorBeltControl_Response),
  conveyorbelt_msgs__srv__ConveyorBeltControl_Response__rosidl_typesupport_introspection_c__ConveyorBeltControl_Response_message_member_array,  // message members
  conveyorbelt_msgs__srv__ConveyorBeltControl_Response__rosidl_typesupport_introspection_c__ConveyorBeltControl_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  conveyorbelt_msgs__srv__ConveyorBeltControl_Response__rosidl_typesupport_introspection_c__ConveyorBeltControl_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t conveyorbelt_msgs__srv__ConveyorBeltControl_Response__rosidl_typesupport_introspection_c__ConveyorBeltControl_Response_message_type_support_handle = {
  0,
  &conveyorbelt_msgs__srv__ConveyorBeltControl_Response__rosidl_typesupport_introspection_c__ConveyorBeltControl_Response_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_conveyorbelt_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, conveyorbelt_msgs, srv, ConveyorBeltControl_Response)() {
  if (!conveyorbelt_msgs__srv__ConveyorBeltControl_Response__rosidl_typesupport_introspection_c__ConveyorBeltControl_Response_message_type_support_handle.typesupport_identifier) {
    conveyorbelt_msgs__srv__ConveyorBeltControl_Response__rosidl_typesupport_introspection_c__ConveyorBeltControl_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &conveyorbelt_msgs__srv__ConveyorBeltControl_Response__rosidl_typesupport_introspection_c__ConveyorBeltControl_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "conveyorbelt_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "conveyorbelt_msgs/srv/detail/conveyor_belt_control__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers conveyorbelt_msgs__srv__detail__conveyor_belt_control__rosidl_typesupport_introspection_c__ConveyorBeltControl_service_members = {
  "conveyorbelt_msgs__srv",  // service namespace
  "ConveyorBeltControl",  // service name
  // these two fields are initialized below on the first access
  NULL,  // request message
  // conveyorbelt_msgs__srv__detail__conveyor_belt_control__rosidl_typesupport_introspection_c__ConveyorBeltControl_Request_message_type_support_handle,
  NULL  // response message
  // conveyorbelt_msgs__srv__detail__conveyor_belt_control__rosidl_typesupport_introspection_c__ConveyorBeltControl_Response_message_type_support_handle
};

static rosidl_service_type_support_t conveyorbelt_msgs__srv__detail__conveyor_belt_control__rosidl_typesupport_introspection_c__ConveyorBeltControl_service_type_support_handle = {
  0,
  &conveyorbelt_msgs__srv__detail__conveyor_belt_control__rosidl_typesupport_introspection_c__ConveyorBeltControl_service_members,
  get_service_typesupport_handle_function,
};

// Forward declaration of request/response type support functions
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, conveyorbelt_msgs, srv, ConveyorBeltControl_Request)();

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, conveyorbelt_msgs, srv, ConveyorBeltControl_Response)();

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_conveyorbelt_msgs
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, conveyorbelt_msgs, srv, ConveyorBeltControl)() {
  if (!conveyorbelt_msgs__srv__detail__conveyor_belt_control__rosidl_typesupport_introspection_c__ConveyorBeltControl_service_type_support_handle.typesupport_identifier) {
    conveyorbelt_msgs__srv__detail__conveyor_belt_control__rosidl_typesupport_introspection_c__ConveyorBeltControl_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)conveyorbelt_msgs__srv__detail__conveyor_belt_control__rosidl_typesupport_introspection_c__ConveyorBeltControl_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, conveyorbelt_msgs, srv, ConveyorBeltControl_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, conveyorbelt_msgs, srv, ConveyorBeltControl_Response)()->data;
  }

  return &conveyorbelt_msgs__srv__detail__conveyor_belt_control__rosidl_typesupport_introspection_c__ConveyorBeltControl_service_type_support_handle;
}
