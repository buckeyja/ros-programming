// Generated by gencpp from file chapter4/WordCount.msg
// DO NOT EDIT!


#ifndef CHAPTER4_MESSAGE_WORDCOUNT_H
#define CHAPTER4_MESSAGE_WORDCOUNT_H

#include <ros/service_traits.h>


#include <chapter4/WordCountRequest.h>
#include <chapter4/WordCountResponse.h>


namespace chapter4
{

struct WordCount
{

typedef WordCountRequest Request;
typedef WordCountResponse Response;
Request request;
Response response;

typedef Request RequestType;
typedef Response ResponseType;

}; // struct WordCount
} // namespace chapter4


namespace ros
{
namespace service_traits
{


template<>
struct MD5Sum< ::chapter4::WordCount > {
  static const char* value()
  {
    return "58903d21a3264f3408d79ba79e9f7c7e";
  }

  static const char* value(const ::chapter4::WordCount&) { return value(); }
};

template<>
struct DataType< ::chapter4::WordCount > {
  static const char* value()
  {
    return "chapter4/WordCount";
  }

  static const char* value(const ::chapter4::WordCount&) { return value(); }
};


// service_traits::MD5Sum< ::chapter4::WordCountRequest> should match 
// service_traits::MD5Sum< ::chapter4::WordCount > 
template<>
struct MD5Sum< ::chapter4::WordCountRequest>
{
  static const char* value()
  {
    return MD5Sum< ::chapter4::WordCount >::value();
  }
  static const char* value(const ::chapter4::WordCountRequest&)
  {
    return value();
  }
};

// service_traits::DataType< ::chapter4::WordCountRequest> should match 
// service_traits::DataType< ::chapter4::WordCount > 
template<>
struct DataType< ::chapter4::WordCountRequest>
{
  static const char* value()
  {
    return DataType< ::chapter4::WordCount >::value();
  }
  static const char* value(const ::chapter4::WordCountRequest&)
  {
    return value();
  }
};

// service_traits::MD5Sum< ::chapter4::WordCountResponse> should match 
// service_traits::MD5Sum< ::chapter4::WordCount > 
template<>
struct MD5Sum< ::chapter4::WordCountResponse>
{
  static const char* value()
  {
    return MD5Sum< ::chapter4::WordCount >::value();
  }
  static const char* value(const ::chapter4::WordCountResponse&)
  {
    return value();
  }
};

// service_traits::DataType< ::chapter4::WordCountResponse> should match 
// service_traits::DataType< ::chapter4::WordCount > 
template<>
struct DataType< ::chapter4::WordCountResponse>
{
  static const char* value()
  {
    return DataType< ::chapter4::WordCount >::value();
  }
  static const char* value(const ::chapter4::WordCountResponse&)
  {
    return value();
  }
};

} // namespace service_traits
} // namespace ros

#endif // CHAPTER4_MESSAGE_WORDCOUNT_H
