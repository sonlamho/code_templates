# For `tests` folder

# runTests
# link it with libaries we want to test, GTest, and pthread library
add_executable(test_module0 "test_module0.cpp")
target_link_libraries(test_module0 PUBLIC m0 pthread gtest_main)
