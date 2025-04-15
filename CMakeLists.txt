cmake_minimum_required(VERSION 3.10)
project(SimpleCalculator)

# Set C++ standard
set(CMAKE_CXX_STANDARD 17)

# Include directories
include_directories(include)

# Main executable (optional)
add_executable(calculator src/calculator.cpp src/main.cpp)

# Google Test setup
find_package(GTest REQUIRED)
include(GoogleTest)
enable_testing()  # <-- Important


# Test executable
add_executable(calculator_test tests/test_calculator.cpp src/calculator.cpp)
target_link_libraries(calculator_test GTest::GTest GTest::Main)
# add_test(
#   NAME AllTests
#   COMMAND calculator_test
# )
# Discover tests
 gtest_discover_tests(calculator_test)
# Instead of gtest_discover_tests(), try:
