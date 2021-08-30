cmake_minimum_required(VERSION 3.1)

# set the project name
project(egater LANGUAGES CXX)

# add subdirectories
add_subdirectory(gates)
add_subdirectory(utilities)

# add the executable
add_executable(demo tester.cpp)

target_link_libraries(demo gatesLib utilitiesLib)

target_include_directories(demo PRIVATE include)