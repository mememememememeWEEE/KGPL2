# CMakeList.txt : CMake project for KGPL, include source and define
# project specific logic here.
#
cmake_minimum_required (VERSION 3.8)

project ("KGPL")

# Add source to this project's executable.
add_executable (KGPL "example.cpp" "src/KGPL.h" "src/KGPL_window.h" "src/KGPL_window.cpp")

if (CMAKE_VERSION VERSION_GREATER 3.12)
  set_property(TARGET KGPL PROPERTY CXX_STANDARD 20)
endif()

# TODO: Add tests and install targets if needed.
