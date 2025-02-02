add_library(tinyobjloader STATIC src/platform/tiny_obj_loader.cc)
target_link_libraries(mygame PRIVATE tinyobjloader)
