// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from turtlesim_catch_interfaces:msg/Turtleinfoarray.idl
// generated code does not contain a copyright notice

#ifndef TURTLESIM_CATCH_INTERFACES__MSG__DETAIL__TURTLEINFOARRAY__TRAITS_HPP_
#define TURTLESIM_CATCH_INTERFACES__MSG__DETAIL__TURTLEINFOARRAY__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "turtlesim_catch_interfaces/msg/detail/turtleinfoarray__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'turtles'
#include "turtlesim_catch_interfaces/msg/detail/turtleinfo__traits.hpp"

namespace turtlesim_catch_interfaces
{

namespace msg
{

inline void to_flow_style_yaml(
  const Turtleinfoarray & msg,
  std::ostream & out)
{
  out << "{";
  // member: turtles
  {
    if (msg.turtles.size() == 0) {
      out << "turtles: []";
    } else {
      out << "turtles: [";
      size_t pending_items = msg.turtles.size();
      for (auto item : msg.turtles) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Turtleinfoarray & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: turtles
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.turtles.size() == 0) {
      out << "turtles: []\n";
    } else {
      out << "turtles:\n";
      for (auto item : msg.turtles) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Turtleinfoarray & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace msg

}  // namespace turtlesim_catch_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use turtlesim_catch_interfaces::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const turtlesim_catch_interfaces::msg::Turtleinfoarray & msg,
  std::ostream & out, size_t indentation = 0)
{
  turtlesim_catch_interfaces::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use turtlesim_catch_interfaces::msg::to_yaml() instead")]]
inline std::string to_yaml(const turtlesim_catch_interfaces::msg::Turtleinfoarray & msg)
{
  return turtlesim_catch_interfaces::msg::to_yaml(msg);
}

template<>
inline const char * data_type<turtlesim_catch_interfaces::msg::Turtleinfoarray>()
{
  return "turtlesim_catch_interfaces::msg::Turtleinfoarray";
}

template<>
inline const char * name<turtlesim_catch_interfaces::msg::Turtleinfoarray>()
{
  return "turtlesim_catch_interfaces/msg/Turtleinfoarray";
}

template<>
struct has_fixed_size<turtlesim_catch_interfaces::msg::Turtleinfoarray>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<turtlesim_catch_interfaces::msg::Turtleinfoarray>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<turtlesim_catch_interfaces::msg::Turtleinfoarray>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // TURTLESIM_CATCH_INTERFACES__MSG__DETAIL__TURTLEINFOARRAY__TRAITS_HPP_
