
# cmake_minimum_required(VERSION 4.5.0)

# project(TheHead)

# set(CMAKE_CXX_STANDARD 20)


aux_source_directory(. DIR_LIB)

add_library(TheHead ${DIR_LIB})

# add_library(TheHead STATIC ${DIR_LIB})

