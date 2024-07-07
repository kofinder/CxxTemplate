# set(LIBRARY_SOURCES "my_lib.cc")
# set(LIBRARY_HEADERS "my_lib.h")

set(EXE_SOURCES "my_lib.cc")

# Set Libs
add_library(${LIBRARY_NAME} STATIC ${EXE_SOURCES})

target_include_directories(${LIBRARY_NAME} PUBLIC "./" "${CMAKE_BINARY_DIR}/configured_files/include")