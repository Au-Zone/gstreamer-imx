project(gstimxcommon C)

file(GLOB SOURCES "*.c")
file(GLOB HEADERS "*.h")

add_library(gstimxcommon SHARED ${SOURCES} ${HEADERS})

target_link_libraries(
	gstimxcommon
	${GStreamer_LIBRARIES}
	${GStreamer_Video_LIBRARIES}
)

install(TARGETS gstimxcommon LIBRARY DESTINATION lib)

