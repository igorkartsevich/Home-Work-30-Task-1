cmake_minimum_required (VERSION 3.8)

add_executable (CMakeProject1 "CMakeProject1.cpp" "CMakeProject1.h")
target_link_libraries(CMakeProject1 PRIVATE cpr::cpr)