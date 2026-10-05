cmake_minimum_required(VERSION 3.23)	

project(engine-learning)

add_executable(hello main.cpp)
add_library(mathlib add.cpp)

target_link_libraries(hello PRIVATE mathlib)