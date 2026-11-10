cmake_minimum_required(VERSION 4.5.0)

set(CMAKE_CXX_STANDARD 20)

project(TheHead)

aux_source_directory(. DIR_LIB)

add_library(TheHead ${DIR_LIB})