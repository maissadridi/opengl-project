#ifndef CAMERA_H
#define CAMERA_H

#include "C:\Users\Maissa\Source\Repos\projet-computer-graphic\libs\glm\glm.hpp"
#include "C:\Users\Maissa\Source\Repos\projet-computer-graphic\libs\glm\gtc\matrix_transform.hpp"

class Camera {
public:
    glm::mat4 GetViewMatrix();
    void ProcessMouseMovement(float xoffset, float yoffset);
    void updateView(unsigned int shaderID);
};

#endif
