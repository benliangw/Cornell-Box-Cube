#ifndef VIEW
#define VIEW

#include "SDL.h"
#include "Model.h"
#include "glew.h"
#include "Camera.h"
#include <fstream>
#include <string>
#include <iostream>
#include <glm.hpp>
#include <gtc/matrix_transform.hpp>

class View {
private:
	GLuint mvp_uniform_attribute;
	GLuint triangle_settings;
	GLuint triangle_buffer;
	GLuint color_buffer;
	GLuint shader_program;
	GLuint vertex_shader;
	GLuint fragment_shader;
	GLuint element_buffer;

	Model& model;
public:
	View(Model& model);
	Camera camera;
	void render(SDL_Window* window);
};


//
//Utilities
//
GLuint LoadShader(std::string shader_file_name, GLenum shader_type);
void CheckLinkStatus(GLuint& shader_program);

#endif