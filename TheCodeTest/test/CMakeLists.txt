
project(test)

aux_source_directory(. ALL_CXX)

include_directories(${HEAD_PATH})

link_directories(${LIB_PATH})

link_libraries(${HEAD_NAME})

set(EXECUTABLE_OUTPUT_PATH ${EXEC_PATH})

add_executable(${TestRun} ${ALL_CXX})