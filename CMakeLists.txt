# CMakeList.txt : CMake project for KGPL, include source and define
# project specific logic here.
#
cmake_minimum_required (VERSION 3.8)

project ("example")

add_subdirectory ("ext/glfw")
add_subdirectory ("ext/glm")
add_subdirectory ("src/")

find_package (OpenGL REQUIRED)

add_executable (example "example.cpp")

target_link_libraries (example glfw)
target_link_libraries (example glm)
target_link_libraries (example KGPL)
target_link_libraries (example ${OPENGL_gl_LIBRARY})

if (CMAKE_VERSION VERSION_GREATER 3.12)
  set_property(TARGET example PROPERTY CXX_STANDARD 20)
endif()
