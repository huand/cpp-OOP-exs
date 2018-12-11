cmake_minimum_required (VERSION 3.0)
set(CXXFLAGS = -std=c++17 -Wconversion -Wall -Werror -Wextra -pedantic)
include_directories ("${CMAKE_SOURCE_DIR}/include/Classe_headers")
file( GLOB myHEADERS include/Classe_headers/*.h)
file( GLOB myCLASSES src/Classes/*.cpp)
file( GLOB SRC_CHAP_02 src/Chapters/Chapter_02/*.cpp )
file( GLOB SRC_CHAP_03 src/Chapters/Chapter_03/*.cpp )
file( GLOB SRC_CHAP_04 src/Chapters/Chapter_04/*.cpp )
file( GLOB SRC_CHAP_05 src/Chapters/Chapter_05/*.cpp )
file( GLOB SRC_CHAP_06 src/Chapters/Chapter_06/*.cpp )
file( GLOB SRC_CHAP_07 src/Chapters/Chapter_07/*.cpp )
file( GLOB SRC_CHAP_08 src/Chapters/Chapter_08/*.cpp )
file( GLOB SRC_CHAP_09 src/Chapters/Chapter_09/*.cpp )
file( GLOB SRC_CHAP_10 src/Chapters/Chapter_10/*.cpp )
file( GLOB SRC_CHAP_14 src/Chapters/Chapter_14/*.cpp )
#TODO add loop over chapters
add_library(exslib
${SRC_CHAP_02}
${SRC_CHAP_03}
${SRC_CHAP_04}
${SRC_CHAP_05}
${SRC_CHAP_06}
${SRC_CHAP_07}
${SRC_CHAP_08}
${SRC_CHAP_09}
${SRC_CHAP_10}
${SRC_CHAP_14}
${myCLASSES}
)




project (oopcppexs)
include_directories (
    "${PROJECT_SOURCE_DIR}/include"
    "${PROJECT_SOURCE_DIR}/include/Chapt_headers"
    )
# add_subdirectory (src) 
 
# add the executable
add_executable (exe app/testexs.cpp)
target_link_libraries (exe exslib)