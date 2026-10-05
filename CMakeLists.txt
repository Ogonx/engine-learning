cmake_minimum_required(VERSION 3.23)	
project(engine-learning)

include(FetchContent)
FetchContent_Declare(
	Catch2
	GIT_REPOSITORY https://github.com/catchorg/Catch2.git
	GIT_TAG v3.16.0
)
FetchContent_MakeAvailable(Catch2)

add_executable(hello main.cpp)
add_executable(tests tests.cpp)
add_library(mathlib add.cpp)

target_link_libraries(hello PRIVATE mathlib)
target_link_libraries(tests PRIVATE mathlib Catch2::Catch2WithMain)
