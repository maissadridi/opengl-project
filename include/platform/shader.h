#ifndef SHADER_H
#define SHADER_H

#include "C:\Users\Maissa\Source\Repos\projet-computer-graphic\libs\glad\glad.h"
#include <string>
#include <iostream>

class Shader {
public:
    unsigned int ID;
    Shader(const char* vertexPath, const char* fragmentPath);
    void use();
    void setMat4(const std::string& name, const glm::mat4& mat);
};

#endif
