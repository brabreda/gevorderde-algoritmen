cmake_minimum_required(VERSION 3.15)
project(mongoose C)


add_library(mongoose STATIC mongoose.c)
target_include_directories(mongoose PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})