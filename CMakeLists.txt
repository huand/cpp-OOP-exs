cmake_minimum_required (VERSION 3.0)

include_directories ("${CMAKE_SOURCE_DIR}/include/Classe_headers")
file( GLOB myHEADERS include/Classe_headers/*.h)
file( GLOB myCLASSES src/Classes/*.cpp)
file( GLOB SRC_CHAP_02 src/Chapter_02/*.cpp )
file( GLOB SRC_CHAP_03 src/Chapter_03/*.cpp )
file( GLOB SRC_CHAP_04 src/Chapter_04/*.cpp )
file( GLOB SRC_CHAP_05 src/Chapter_05/*.cpp )
file( GLOB SRC_CHAP_06 src/Chapter_06/*.cpp )
file( GLOB SRC_CHAP_07 src/Chapter_07/*.cpp )
#TODO add loop over chapters
add_library(exslib
${SRC_CHAP_02}
${SRC_CHAP_03}
${SRC_CHAP_04}
${SRC_CHAP_05}
${SRC_CHAP_06}
${SRC_CHAP_07}
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