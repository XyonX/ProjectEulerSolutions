cmake_minimum_required(VERSION 3.10)
project(Project_Name)

file(GLOB_RECURSE SOURCES "Source/src/*.cpp")
file(GLOB_RECURSE HEADERS "Source/include/*.h")

add_executable(MyAPP ${SOURCES} ${HEADERS})
add_executable(Problem04 "Source/src/Problem_04.cpp" )
add_executable(Problem05 "Source/src/Problem_05.cpp" )
add_executable(Problem06 "Source/src/Problem_06.cpp" )
add_executable(Problem07 "Source/src/Problem_07.cpp" )
target_include_directories(MyAPP PRIVATE "Source/include")

set(CMAKE_PREFIX_PATH "C:/Libraries/vcpkg/installed")