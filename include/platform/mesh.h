#ifndef MESH_H
#define MESH_H

#include <vector>
#include "../../thirdparty/glm/glm/glm.hpp"
#include "../../thirdparty/glad/include/glad/glad.h"
#include <string>
#include "../../thirdparty/tinyobjloader/include/tiny_obj_loader.h"
struct Vertex {
    glm::vec3 Position;
    glm::vec3 Normal;
    glm::vec2 TexCoords;
};

class Mesh {
public:
    std::vector<Vertex> vertices;
    std::vector<unsigned int> indices;
    unsigned int VAO;

    Mesh(std::vector<Vertex> vertices, std::vector<unsigned int> indices);
    void Draw(unsigned int shaderProgram);

private:
    unsigned int VBO, EBO;
    void setupMesh();
};

// Function to load a 3D model from an .obj file
Mesh loadModel(const std::string& path);

#endif