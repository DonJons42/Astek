// Generated by gencpp from file urg_node/Status.msg
// DO NOT EDIT!


#ifndef URG_NODE_MESSAGE_STATUS_H
#define URG_NODE_MESSAGE_STATUS_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace urg_node
{
template <class ContainerAllocator>
struct Status_
{
  typedef Status_<ContainerAllocator> Type;

  Status_()
    : operating_mode(0)
    , area_number(0)
    , error_status(false)
    , error_code(0)
    , lockout_status(false)
    , distance(0)
    , angle(0.0)  {
    }
  Status_(const ContainerAllocator& _alloc)
    : operating_mode(0)
    , area_number(0)
    , error_status(false)
    , error_code(0)
    , lockout_status(false)
    , distance(0)
    , angle(0.0)  {
  (void)_alloc;
    }



   typedef uint16_t _operating_mode_type;
  _operating_mode_type operating_mode;

   typedef uint16_t _area_number_type;
  _area_number_type area_number;

   typedef uint8_t _error_status_type;
  _error_status_type error_status;

   typedef uint16_t _error_code_type;
  _error_code_type error_code;

   typedef uint8_t _lockout_status_type;
  _lockout_status_type lockout_status;

   typedef uint16_t _distance_type;
  _distance_type distance;

   typedef float _angle_type;
  _angle_type angle;



  enum {
    NORMAL = 0u,
    SETTING = 1u,
  };


  typedef boost::shared_ptr< ::urg_node::Status_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::urg_node::Status_<ContainerAllocator> const> ConstPtr;

}; // struct Status_

typedef ::urg_node::Status_<std::allocator<void> > Status;

typedef boost::shared_ptr< ::urg_node::Status > StatusPtr;
typedef boost::shared_ptr< ::urg_node::Status const> StatusConstPtr;

// constants requiring out of line definition

   

   



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::urg_node::Status_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::urg_node::Status_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace urg_node

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': True, 'IsMessage': True, 'HasHeader': False}
// {'std_msgs': ['/opt/ros/kinetic/share/std_msgs/cmake/../msg'], 'urg_node': ['/home/stagiaire019/astek_ws/src/urg_node/msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::urg_node::Status_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::urg_node::Status_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::urg_node::Status_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::urg_node::Status_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::urg_node::Status_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::urg_node::Status_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::urg_node::Status_<ContainerAllocator> >
{
  static const char* value()
  {
    return "b393072b65230b373302bfe803e80784";
  }

  static const char* value(const ::urg_node::Status_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xb393072b65230b37ULL;
  static const uint64_t static_value2 = 0x3302bfe803e80784ULL;
};

template<class ContainerAllocator>
struct DataType< ::urg_node::Status_<ContainerAllocator> >
{
  static const char* value()
  {
    return "urg_node/Status";
  }

  static const char* value(const ::urg_node::Status_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::urg_node::Status_<ContainerAllocator> >
{
  static const char* value()
  {
    return "# Normal vs setting in the UAM manual.\n\
uint16 NORMAL=0\n\
uint16 SETTING=1\n\
uint16 operating_mode\n\
\n\
# The configured area number the stop occurred in.\n\
uint16 area_number\n\
# If the laser is reporting an error or not.\n\
bool error_status\n\
# The error code the laser is reporting.\n\
uint16 error_code\n\
# Does the laser report that it is locked out.\n\
bool lockout_status\n\
# Distance in mm the stop was reported at.\n\
uint16 distance\n\
# The reported angle of the stop in deg.\n\
float32 angle\n\
";
  }

  static const char* value(const ::urg_node::Status_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::urg_node::Status_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.operating_mode);
      stream.next(m.area_number);
      stream.next(m.error_status);
      stream.next(m.error_code);
      stream.next(m.lockout_status);
      stream.next(m.distance);
      stream.next(m.angle);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct Status_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::urg_node::Status_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::urg_node::Status_<ContainerAllocator>& v)
  {
    s << indent << "operating_mode: ";
    Printer<uint16_t>::stream(s, indent + "  ", v.operating_mode);
    s << indent << "area_number: ";
    Printer<uint16_t>::stream(s, indent + "  ", v.area_number);
    s << indent << "error_status: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.error_status);
    s << indent << "error_code: ";
    Printer<uint16_t>::stream(s, indent + "  ", v.error_code);
    s << indent << "lockout_status: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.lockout_status);
    s << indent << "distance: ";
    Printer<uint16_t>::stream(s, indent + "  ", v.distance);
    s << indent << "angle: ";
    Printer<float>::stream(s, indent + "  ", v.angle);
  }
};

} // namespace message_operations
} // namespace ros

#endif // URG_NODE_MESSAGE_STATUS_H
