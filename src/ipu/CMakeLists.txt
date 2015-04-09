project(gstimxipu C)

file(GLOB_RECURSE SOURCES "*.c")
file(GLOB_RECURSE HEADERS "*.h")

find_path(IPU_INCLUDE_DIRS include/uapi/linux/ipu.h HINTS ${KERNEL_HEADERS})

if (IPU_INCLUDE_DIRS)
    include_directories(${IPU_INCLUDE_DIRS})
else()
    include_directories(${KERNEL_HEADERS})
endif()

add_library(gstimxipu SHARED ${SOURCES} ${HEADERS})
target_link_libraries(gstimxipu gstimxcommon)

install(TARGETS gstimxipu LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}/gstreamer-1.0)

