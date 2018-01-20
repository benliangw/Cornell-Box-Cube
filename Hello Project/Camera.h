#ifndef CAMERA
#define CAMERA

#include <glm.hpp>
#include <gtc/matrix_transform.hpp>

class Camera {
	float field_of_view = 1.57f;
	float aspect_ratio = 4.0f / 3.0f;
	float near_plane = 30.0f;
	float far_plane = 3000.0f;
public:
	glm::mat4 view_matrix;
	glm::mat4 projection_matrix = glm::perspective(field_of_view, aspect_ratio, near_plane, far_plane);

	glm::vec3 position = glm::vec3(278, 273, -800);
	glm::vec3 direction = glm::vec3(0, 0, -1);
	glm::vec3 right = glm::vec3(1, 0, 0);
	glm::vec3 up = glm::vec3(0, 1, 0);

	Camera();

	float yaw = 3.14f;
	float pitch = 0.0f;

	void updateViewMatrix();
};
#endif