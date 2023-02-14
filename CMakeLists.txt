cmake_minimum_required(VERSION 3.10)
project(Project_Name)

file(GLOB_RECURSE SOURCES "Source/src/*.cpp")
file(GLOB_RECURSE HEADERS "Source/include/*.h")


function(add_executable_with_includes name)
  add_executable(${name} "Source/src/${name}.cpp")
  target_include_directories(${name} PRIVATE "Source/include")
endfunction()

add_executable_with_includes(Problem_01)
add_executable_with_includes(Problem_02)
add_executable_with_includes(Problem_03)
add_executable_with_includes(Problem_04)
add_executable_with_includes(Problem_05)
add_executable_with_includes(Problem_06)
add_executable_with_includes(Problem_07)
add_executable_with_includes(Problem_08)
add_executable_with_includes(Problem_09)



set(CMAKE_PREFIX_PATH "C:/Libraries/vcpkg/installed")