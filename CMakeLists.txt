cmake_minimum_required (VERSION 3.0)
project (oopcppexs)
include_directories (
    "${PROJECT_SOURCE_DIR}/include"
    "${PROJECT_SOURCE_DIR}/include/Chapt_headers"
    )
add_subdirectory (src) 
 
# add the executable
add_executable (exe app/testexs.cpp)
target_link_libraries (exe exslib)