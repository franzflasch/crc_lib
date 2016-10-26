cmake_minimum_required(VERSION 2.8.9)
project(crc_lib)

set(CMAKE_C_FLAGS "${CMAKE_C_FLAGS} -Wall -Werror")

set(LIB_SRCS crc.c)

add_library(crc SHARED ${LIB_SRCS})
include_directories(.)
set_target_properties(crc PROPERTIES PUBLIC_HEADER crc.h)
set_target_properties(crc PROPERTIES SOVERSION "1")

install(TARGETS crc DESTINATION lib PUBLIC_HEADER DESTINATION inc COMPONENT dev)

### Debian Package generation
set(CPACK_GENERATOR "DEB")
set(CPACK_PACKAGE_VERSION "0.1.0")
set(CPACK_DEBIAN_PACKAGE_MAINTAINER "Franz Flasch") #required
include(CPack)
