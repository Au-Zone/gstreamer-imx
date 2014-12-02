project(gstimxv4l2src C)

file(GLOB SOURCES "*.c")
file(GLOB HEADERS "*.h")

add_library(gstimxv4l2src SHARED ${SOURCES} ${HEADERS})
target_link_libraries(gstimxv4l2src gstimxcommon)

install(TARGETS gstimxv4l2src LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}/gstreamer-1.0)

