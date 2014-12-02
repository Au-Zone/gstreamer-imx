project(gstimxvpu C)

file(GLOB_RECURSE SOURCES "*.c")
file(GLOB_RECURSE HEADERS "*.h")

find_path(VPU_INCLUDE_DIR vpu_wrapper.h PATH_SUFFIXES imx-mm/vpu)

include_directories(${VPU_INCLUDE_DIR})

add_library(gstimxvpu SHARED ${SOURCES} ${HEADERS})

