# include(Catch)

# find_package(Catch)

set(TEST_MAIN "unit_tests")
set(TEST_SOURCES "main.cc")
set(TEST_INCLUDEs "./")

add_executable(${TEST_MAIN} ${TEST_SOURCES})
target_include_directories(${TEST_MAIN} PUBLIC ${TEST_INCLUDES})
target_link_libraries(${TEST_MAIN} PUBLIC ${LIBRARY_NAME} Catch2::Catch2)

# catch_discover_tests(${TEST_MAIN})