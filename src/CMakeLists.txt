file( GLOB SRC_CHAP_02 Chapter_02/*.cpp )
file( GLOB SRC_CHAP_03 Chapter_03/*.cpp )
file( GLOB SRC_CHAP_04 Chapter_04/*.cpp )
file( GLOB SRC_CHAP_05 Chapter_05/*.cpp )
file( GLOB SRC_CHAP_06 Chapter_06/*.cpp )
file( GLOB SRC_CHAP_07 Chapter_07/*.cpp )
#TODO add loop over chapters
add_library(exslib
${SRC_CHAP_02}
${SRC_CHAP_03}
${SRC_CHAP_04}
${SRC_CHAP_05}
${SRC_CHAP_06}
${SRC_CHAP_07}
)