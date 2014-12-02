project(gstimxv4l2src C)

file(GLOB SOURCES "*.c")
file(GLOB HEADERS "*.h")

add_library(gstimxv4l2src SHARED ${SOURCES} ${HEADERS})

