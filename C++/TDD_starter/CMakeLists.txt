cmake_minimum_required(VERSION 2.8)

project(TDD_template)

find_package(GTest REQUIRED)
find_package(xtensor REQUIRED)
include_directories("${PROJECT_BINARY_DIR}")
include_directories("${PROJECT_SOURCE_DIR}")
# include_directories(${GTEST_INCLUDE_DIRS})
# include_directories(${xtensor_INCLUDE_DIRS})

# m0
add_library(m0 module0.cpp)
target_include_directories(m0 PUBLIC ${xtensor_INCLUDE_DIRS})
target_link_libraries(m0 PUBLIC xtensor)

# runTests
# link it with libaries we want to test, GTest, and pthread library
add_executable(runTests test_module0.cpp)
target_include_directories(runTests PUBLIC ${GTEST_INCLUDE_DIRS})
target_link_libraries(runTests PUBLIC ${GTEST_LIBRARIES} pthread m0)

# runMain
# link it with dependencies
add_executable(a.out main.cpp)
target_link_libraries(a.out PUBLIC m0)
