# Specific CMake version
cmake_minimum_required(VERSION 3.16.3)

# Identified Project version
project(CxxTemplate VERSION 1.0.0 LANGUAGES C CXX)

# Declar Variable BOOLEAN & STRING
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

set(LIBRARY_NAME Library)
set(EXECUTABLE_NAME Executable)

# option(COMPILE_EXECUTABLE "Wheter to comple the executable" OFF)

# Defined sub cmake directory
add_subdirectory(configured)
add_subdirectory(src)
add_subdirectory(app)



# Control statement
# if(COMPILE_EXECUTABLE) 
#     add_subdirectory(app)
# else()
#     message("W/o exe. compling")
# endif()
