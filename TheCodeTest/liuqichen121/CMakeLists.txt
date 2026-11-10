
project(liuqichen121LIB)

aux_source_directory(. ALL_CXX)

include_directories(${HEAD_PATH})

set(LIBRARY_OUTPUT_PATH ${LIB_PATH})

add_library(${HEAD_NAME} STATIC ${ALL_CXX})