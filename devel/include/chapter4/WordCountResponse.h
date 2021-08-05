// Generated by gencpp from file chapter4/WordCountResponse.msg
// DO NOT EDIT!


#ifndef CHAPTER4_MESSAGE_WORDCOUNTRESPONSE_H
#define CHAPTER4_MESSAGE_WORDCOUNTRESPONSE_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace chapter4
{
template <class ContainerAllocator>
struct WordCountResponse_
{
  typedef WordCountResponse_<ContainerAllocator> Type;

  WordCountResponse_()
    : count(0)  {
    }
  WordCountResponse_(const ContainerAllocator& _alloc)
    : count(0)  {
  (void)_alloc;
    }



   typedef uint32_t _count_type;
  _count_type count;




  typedef boost::shared_ptr< ::chapter4::WordCountResponse_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::chapter4::WordCountResponse_<ContainerAllocator> const> ConstPtr;

}; // struct WordCountResponse_

typedef ::chapter4::WordCountResponse_<std::allocator<void> > WordCountResponse;

typedef boost::shared_ptr< ::chapter4::WordCountResponse > WordCountResponsePtr;
typedef boost::shared_ptr< ::chapter4::WordCountResponse const> WordCountResponseConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::chapter4::WordCountResponse_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::chapter4::WordCountResponse_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace chapter4

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': True, 'IsMessage': True, 'HasHeader': False}
// {'std_msgs': ['/opt/ros/indigo/share/std_msgs/cmake/../msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::chapter4::WordCountResponse_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::chapter4::WordCountResponse_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::chapter4::WordCountResponse_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::chapter4::WordCountResponse_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::chapter4::WordCountResponse_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::chapter4::WordCountResponse_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::chapter4::WordCountResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "ac8b22eb02c1f433e0a55ee9aac59a18";
  }

  static const char* value(const ::chapter4::WordCountResponse_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xac8b22eb02c1f433ULL;
  static const uint64_t static_value2 = 0xe0a55ee9aac59a18ULL;
};

template<class ContainerAllocator>
struct DataType< ::chapter4::WordCountResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "chapter4/WordCountResponse";
  }

  static const char* value(const ::chapter4::WordCountResponse_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::chapter4::WordCountResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "uint32 count\n\
";
  }

  static const char* value(const ::chapter4::WordCountResponse_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::chapter4::WordCountResponse_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.count);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct WordCountResponse_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::chapter4::WordCountResponse_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::chapter4::WordCountResponse_<ContainerAllocator>& v)
  {
    s << indent << "count: ";
    Printer<uint32_t>::stream(s, indent + "  ", v.count);
  }
};

} // namespace message_operations
} // namespace ros

#endif // CHAPTER4_MESSAGE_WORDCOUNTRESPONSE_H
