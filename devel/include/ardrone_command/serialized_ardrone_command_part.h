// Generated by gencpp from file ardrone_command/serialized_ardrone_command_part.msg
// DO NOT EDIT!


#ifndef ARDRONE_COMMAND_MESSAGE_SERIALIZED_ARDRONE_COMMAND_PART_H
#define ARDRONE_COMMAND_MESSAGE_SERIALIZED_ARDRONE_COMMAND_PART_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace ardrone_command
{
template <class ContainerAllocator>
struct serialized_ardrone_command_part_
{
  typedef serialized_ardrone_command_part_<ContainerAllocator> Type;

  serialized_ardrone_command_part_()
    : type(0)
    , strings()
    , doubles()
    , integers()
    , flightAnimations()
    , ledAnimations()  {
    }
  serialized_ardrone_command_part_(const ContainerAllocator& _alloc)
    : type(0)
    , strings(_alloc)
    , doubles(_alloc)
    , integers(_alloc)
    , flightAnimations(_alloc)
    , ledAnimations(_alloc)  {
    }



   typedef uint32_t _type_type;
  _type_type type;

   typedef std::vector<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > , typename ContainerAllocator::template rebind<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::other >  _strings_type;
  _strings_type strings;

   typedef std::vector<double, typename ContainerAllocator::template rebind<double>::other >  _doubles_type;
  _doubles_type doubles;

   typedef std::vector<int64_t, typename ContainerAllocator::template rebind<int64_t>::other >  _integers_type;
  _integers_type integers;

   typedef std::vector<uint32_t, typename ContainerAllocator::template rebind<uint32_t>::other >  _flightAnimations_type;
  _flightAnimations_type flightAnimations;

   typedef std::vector<uint32_t, typename ContainerAllocator::template rebind<uint32_t>::other >  _ledAnimations_type;
  _ledAnimations_type ledAnimations;




  typedef boost::shared_ptr< ::ardrone_command::serialized_ardrone_command_part_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::ardrone_command::serialized_ardrone_command_part_<ContainerAllocator> const> ConstPtr;

}; // struct serialized_ardrone_command_part_

typedef ::ardrone_command::serialized_ardrone_command_part_<std::allocator<void> > serialized_ardrone_command_part;

typedef boost::shared_ptr< ::ardrone_command::serialized_ardrone_command_part > serialized_ardrone_command_partPtr;
typedef boost::shared_ptr< ::ardrone_command::serialized_ardrone_command_part const> serialized_ardrone_command_partConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::ardrone_command::serialized_ardrone_command_part_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::ardrone_command::serialized_ardrone_command_part_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace ardrone_command

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': False, 'IsMessage': True, 'HasHeader': False}
// {'std_msgs': ['/opt/ros/indigo/share/std_msgs/cmake/../msg'], 'geometry_msgs': ['/opt/ros/indigo/share/geometry_msgs/cmake/../msg'], 'ardrone_command': ['/home/hewhosurvives/c++/randomProjects/ros/catkin_ws/src/ardrone_command/msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::ardrone_command::serialized_ardrone_command_part_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::ardrone_command::serialized_ardrone_command_part_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::ardrone_command::serialized_ardrone_command_part_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::ardrone_command::serialized_ardrone_command_part_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::ardrone_command::serialized_ardrone_command_part_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::ardrone_command::serialized_ardrone_command_part_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::ardrone_command::serialized_ardrone_command_part_<ContainerAllocator> >
{
  static const char* value()
  {
    return "4fd5faf50e589f44a1020975650359a8";
  }

  static const char* value(const ::ardrone_command::serialized_ardrone_command_part_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x4fd5faf50e589f44ULL;
  static const uint64_t static_value2 = 0xa1020975650359a8ULL;
};

template<class ContainerAllocator>
struct DataType< ::ardrone_command::serialized_ardrone_command_part_<ContainerAllocator> >
{
  static const char* value()
  {
    return "ardrone_command/serialized_ardrone_command_part";
  }

  static const char* value(const ::ardrone_command::serialized_ardrone_command_part_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::ardrone_command::serialized_ardrone_command_part_<ContainerAllocator> >
{
  static const char* value()
  {
    return "uint32 type\n\
string[] strings\n\
float64[] doubles\n\
int64[] integers\n\
uint32[] flightAnimations\n\
uint32[] ledAnimations\n\
";
  }

  static const char* value(const ::ardrone_command::serialized_ardrone_command_part_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::ardrone_command::serialized_ardrone_command_part_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.type);
      stream.next(m.strings);
      stream.next(m.doubles);
      stream.next(m.integers);
      stream.next(m.flightAnimations);
      stream.next(m.ledAnimations);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER;
  }; // struct serialized_ardrone_command_part_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::ardrone_command::serialized_ardrone_command_part_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::ardrone_command::serialized_ardrone_command_part_<ContainerAllocator>& v)
  {
    s << indent << "type: ";
    Printer<uint32_t>::stream(s, indent + "  ", v.type);
    s << indent << "strings[]" << std::endl;
    for (size_t i = 0; i < v.strings.size(); ++i)
    {
      s << indent << "  strings[" << i << "]: ";
      Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.strings[i]);
    }
    s << indent << "doubles[]" << std::endl;
    for (size_t i = 0; i < v.doubles.size(); ++i)
    {
      s << indent << "  doubles[" << i << "]: ";
      Printer<double>::stream(s, indent + "  ", v.doubles[i]);
    }
    s << indent << "integers[]" << std::endl;
    for (size_t i = 0; i < v.integers.size(); ++i)
    {
      s << indent << "  integers[" << i << "]: ";
      Printer<int64_t>::stream(s, indent + "  ", v.integers[i]);
    }
    s << indent << "flightAnimations[]" << std::endl;
    for (size_t i = 0; i < v.flightAnimations.size(); ++i)
    {
      s << indent << "  flightAnimations[" << i << "]: ";
      Printer<uint32_t>::stream(s, indent + "  ", v.flightAnimations[i]);
    }
    s << indent << "ledAnimations[]" << std::endl;
    for (size_t i = 0; i < v.ledAnimations.size(); ++i)
    {
      s << indent << "  ledAnimations[" << i << "]: ";
      Printer<uint32_t>::stream(s, indent + "  ", v.ledAnimations[i]);
    }
  }
};

} // namespace message_operations
} // namespace ros

#endif // ARDRONE_COMMAND_MESSAGE_SERIALIZED_ARDRONE_COMMAND_PART_H