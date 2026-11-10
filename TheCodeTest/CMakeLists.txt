
cmake_minimum_required(VERSION 4.5.0)

set(CMAKE_CXX_STANDARD 20)

project(TheCodeTest)

set(LIB_PATH ${CMAKE_CURRENT_SOURCE_DIR}/lib)

set(EXEC_PATH ${CMAKE_CURRENT_SOURCE_DIR}/bin)

set(HEAD_PATH ${CMAKE_CURRENT_SOURCE_DIR}/include)

set(HEAD_NAME liuqichen121)

set(TestRun TestRun)

add_subdirectory(liuqichen121)

add_subdirectory(test)