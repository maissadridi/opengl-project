cmake_minimum_required(VERSION 3.1)
project(tinyobjloader)

add_library(tinyobjloader STATIC src/tiny_obj_loader.cc)
target_include_directories(tinyobjloader INTERFACE include "${CMAKE_CURRENT_SOURCE_DIR}/")



