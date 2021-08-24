cmake_minimum_required(VERSION 3.1)

# set the project name
project(egater LANGUAGES CXX)

# add subdirectories
add_subdirectory(gates)

# add the executable
add_executable(e-gater tester.cpp)

target_link_libraries(e-gater gatesLib)