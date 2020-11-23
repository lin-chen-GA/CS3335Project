file(GLOB_RECURSE test_files *c)
 
add_executable(my_unit_test ${test_files} ${PROJECT_SOURCE_DIR}/src/hello.c ${PROJECT_SOURCE_DIR}/src/util.c)
find_library(TEST_LIBRARY cunit HINTS /usr/include/)
target_link_libraries(my_unit_test ${TEST_LIBRARY})
 
add_test(NAME Test_A COMMAND my_unit_test)
 
enable_testing()
