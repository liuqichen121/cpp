
cmake_minimum_required(VERSION 4.5.0)

set(CMAKE_CXX_STANDARD 20)

project(HelloWorld)

message("TheFirstSetingIsOK\n")

aux_source_directory(. ALL_CXX)

list(REMOVE_ITEM ALL_CXX ./a+b.cpp)

list(JOIN ALL_CXX XXX THEFIRST)

set(ls 000 111 222 333 444 555 673)

list(INSERT ls 1 GIAO 3 GIAOGIAO 673 111)

message(${ls})

list(REMOVE_DUPLICATES ls)

message(${ls})

add_executable(app ${ALL_CXX})