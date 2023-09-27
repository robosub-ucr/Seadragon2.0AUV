// Generated by gencpp from file uuv_world_ros_plugins_msgs/TransformFromSphericalCoord.msg
// DO NOT EDIT!


#ifndef UUV_WORLD_ROS_PLUGINS_MSGS_MESSAGE_TRANSFORMFROMSPHERICALCOORD_H
#define UUV_WORLD_ROS_PLUGINS_MSGS_MESSAGE_TRANSFORMFROMSPHERICALCOORD_H

#include <ros/service_traits.h>


#include <uuv_world_ros_plugins_msgs/TransformFromSphericalCoordRequest.h>
#include <uuv_world_ros_plugins_msgs/TransformFromSphericalCoordResponse.h>


namespace uuv_world_ros_plugins_msgs
{

struct TransformFromSphericalCoord
{

typedef TransformFromSphericalCoordRequest Request;
typedef TransformFromSphericalCoordResponse Response;
Request request;
Response response;

typedef Request RequestType;
typedef Response ResponseType;

}; // struct TransformFromSphericalCoord
} // namespace uuv_world_ros_plugins_msgs


namespace ros
{
namespace service_traits
{


template<>
struct MD5Sum< ::uuv_world_ros_plugins_msgs::TransformFromSphericalCoord > {
  static const char* value()
  {
    return "7a7b547d22a150426bbc278358d5fb7e";
  }

  static const char* value(const ::uuv_world_ros_plugins_msgs::TransformFromSphericalCoord&) { return value(); }
};

template<>
struct DataType< ::uuv_world_ros_plugins_msgs::TransformFromSphericalCoord > {
  static const char* value()
  {
    return "uuv_world_ros_plugins_msgs/TransformFromSphericalCoord";
  }

  static const char* value(const ::uuv_world_ros_plugins_msgs::TransformFromSphericalCoord&) { return value(); }
};


// service_traits::MD5Sum< ::uuv_world_ros_plugins_msgs::TransformFromSphericalCoordRequest> should match
// service_traits::MD5Sum< ::uuv_world_ros_plugins_msgs::TransformFromSphericalCoord >
template<>
struct MD5Sum< ::uuv_world_ros_plugins_msgs::TransformFromSphericalCoordRequest>
{
  static const char* value()
  {
    return MD5Sum< ::uuv_world_ros_plugins_msgs::TransformFromSphericalCoord >::value();
  }
  static const char* value(const ::uuv_world_ros_plugins_msgs::TransformFromSphericalCoordRequest&)
  {
    return value();
  }
};

// service_traits::DataType< ::uuv_world_ros_plugins_msgs::TransformFromSphericalCoordRequest> should match
// service_traits::DataType< ::uuv_world_ros_plugins_msgs::TransformFromSphericalCoord >
template<>
struct DataType< ::uuv_world_ros_plugins_msgs::TransformFromSphericalCoordRequest>
{
  static const char* value()
  {
    return DataType< ::uuv_world_ros_plugins_msgs::TransformFromSphericalCoord >::value();
  }
  static const char* value(const ::uuv_world_ros_plugins_msgs::TransformFromSphericalCoordRequest&)
  {
    return value();
  }
};

// service_traits::MD5Sum< ::uuv_world_ros_plugins_msgs::TransformFromSphericalCoordResponse> should match
// service_traits::MD5Sum< ::uuv_world_ros_plugins_msgs::TransformFromSphericalCoord >
template<>
struct MD5Sum< ::uuv_world_ros_plugins_msgs::TransformFromSphericalCoordResponse>
{
  static const char* value()
  {
    return MD5Sum< ::uuv_world_ros_plugins_msgs::TransformFromSphericalCoord >::value();
  }
  static const char* value(const ::uuv_world_ros_plugins_msgs::TransformFromSphericalCoordResponse&)
  {
    return value();
  }
};

// service_traits::DataType< ::uuv_world_ros_plugins_msgs::TransformFromSphericalCoordResponse> should match
// service_traits::DataType< ::uuv_world_ros_plugins_msgs::TransformFromSphericalCoord >
template<>
struct DataType< ::uuv_world_ros_plugins_msgs::TransformFromSphericalCoordResponse>
{
  static const char* value()
  {
    return DataType< ::uuv_world_ros_plugins_msgs::TransformFromSphericalCoord >::value();
  }
  static const char* value(const ::uuv_world_ros_plugins_msgs::TransformFromSphericalCoordResponse&)
  {
    return value();
  }
};

} // namespace service_traits
} // namespace ros

#endif // UUV_WORLD_ROS_PLUGINS_MSGS_MESSAGE_TRANSFORMFROMSPHERICALCOORD_H