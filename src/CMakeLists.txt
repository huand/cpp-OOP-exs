file( GLOB SRC_CHAP_02 Chapter_02/*.cpp )
file( GLOB SRC_CHAP_03 Chapter_03/*.cpp )
file( GLOB SRC_CHAP_03 Chapter_04/*.cpp )
#TODO add loop over chapters
add_library(exslib ${SRC_CHAP_02}
${SRC_CHAP_03}
${SRC_CHAP_04})