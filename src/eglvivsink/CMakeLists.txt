project(gstimxeglvivsink C)

file(GLOB SOURCES "*.c")
file(GLOB HEADERS "*.h")

add_library(gstimxeglvivsink SHARED ${SOURCES} ${HEADERS})

target_link_libraries(gstimxeglvivsink gstimxcommon)

install(TARGETS gstimxeglvivsink LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}/gstreamer-1.0)

