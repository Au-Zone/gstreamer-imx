#
# Gstreamer 1.0 Plugins for i.MX6 Platform
#

cmake_minimum_required(VERSION 2.8)
project(gstreamer-imx C)

add_definitions(-std=gnu99)

include(FindPkgConfig)

pkg_check_modules(GStreamer gstreamer-1.0)
pkg_check_modules(GStreamer_Video gstreamer-video-1.0)

if ("${KERNEL_HEADERS}" STREQUAL "")
	set(KERNEL_HEADERS /usr/src/linux-headers-${CMAKE_SYSTEM_VERSION})
endif()

message("Using kernel headers from ${KERNEL_HEADERS}")

configure_file(${CMAKE_SOURCE_DIR}/config.h.in ${CMAKE_BINARY_DIR}/config.h @ONLY)

include_directories(
	src/common
	${CMAKE_BINARY_DIR}
	${Kernel_INCLUDE_DIRS}
	${GStreamer_INCLUDE_DIRS}
	${GStreamer_Video_INCLUDE_DIRS}
)

add_subdirectory(src/common)
add_subdirectory(src/ipu)
add_subdirectory(src/vpu)
add_subdirectory(src/v4l2src)

