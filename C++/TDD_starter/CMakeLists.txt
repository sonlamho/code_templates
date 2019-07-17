cmake_minimum_required(VERSION 2.8.2)

project(TDD_template)

##### copied from: https://github.com/google/googletest/tree/master/googletest ###
# Download and unpack googletest at configure time
configure_file(CMakeLists.txt.in googletest-download/CMakeLists.txt)
execute_process(COMMAND ${CMAKE_COMMAND} -G "${CMAKE_GENERATOR}" .
  RESULT_VARIABLE result
  WORKING_DIRECTORY ${CMAKE_CURRENT_BINARY_DIR}/googletest-download )
if(result)
  message(FATAL_ERROR "CMake step for googletest failed: ${result}")
endif()
execute_process(COMMAND ${CMAKE_COMMAND} --build .
  RESULT_VARIABLE result
  WORKING_DIRECTORY ${CMAKE_CURRENT_BINARY_DIR}/googletest-download )
if(result)
  message(FATAL_ERROR "Build step for googletest failed: ${result}")
endif()

# Prevent overriding the parent project's compiler/linker
# settings on Windows
set(gtest_force_shared_crt ON CACHE BOOL "" FORCE)

# Add googletest directly to our build. This defines
# the gtest and gtest_main targets.
add_subdirectory(${CMAKE_CURRENT_BINARY_DIR}/googletest-src
                 ${CMAKE_CURRENT_BINARY_DIR}/googletest-build
                 EXCLUDE_FROM_ALL)

# The gtest/gtest_main targets carry header search path
# dependencies automatically when using CMake 2.8.11 or
# later. Otherwise we have to add them here ourselves.
if (CMAKE_VERSION VERSION_LESS 2.8.11)
  include_directories("${gtest_SOURCE_DIR}/include")
endif()
#####

find_package(xtensor REQUIRED)
include_directories("${PROJECT_BINARY_DIR}")
include_directories("${PROJECT_SOURCE_DIR}")

# m0
add_library(m0 module0.cpp)
target_include_directories(m0 PUBLIC ${xtensor_INCLUDE_DIRS})
target_link_libraries(m0 PUBLIC xtensor)

# runTests
# link it with libaries we want to test, GTest, and pthread library
add_executable(runTests test_module0.cpp)
# target_include_directories(runTests PUBLIC ${GTEST_INCLUDE_DIRS})
target_link_libraries(runTests PUBLIC gtest_main pthread m0)

# runMain
# link it with dependencies
add_executable(a.out main.cpp)
target_link_libraries(a.out PUBLIC m0)
