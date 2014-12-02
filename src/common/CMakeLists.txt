project(gstimxcommon C)

file(GLOB SOURCES "*.c")
file(GLOB HEADERS "*.h")

add_library(gstimxcommon SHARED ${SOURCES} ${HEADERS})

install(TARGETS gstimxcommon LIBRARY DESTINATION lib)

