# For `tests` folder

# runTests
# link it with libaries we want to test, GTest, and pthread library
add_executable(runTests "test_module0.cpp")
target_link_libraries(runTests PUBLIC m0 pthread gtest_main)
