project(gstimxvpu C)

file(GLOB_RECURSE SOURCES "*.c")
file(GLOB_RECURSE HEADERS "*.h")

pkg_check_modules(VPU libfslvpuwrap)

include_directories(${VPU_INCLUDE_DIRS})

add_library(gstimxvpu SHARED ${SOURCES} ${HEADERS})
target_link_libraries(gstimxvpu gstimxcommon ${VPU_LIBRARIES})

install(TARGETS gstimxvpu LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}/gstreamer-1.0)

