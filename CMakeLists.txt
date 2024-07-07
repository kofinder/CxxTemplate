#Specific cmake version
cmake_minimum_required(VERSION 3.16.3)

#Identified Project version
project(CxxTemplate VERSION 1.0.0 LANGUAGES C CXX)

# Defined sub cmake directory
add_subdirectory(src)
add_subdirectory(app)