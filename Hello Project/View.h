#ifndef VIEW
#define VIEW

#include "SDL.h"
#include "Model.h"
#include "glew.h"

class View {
private:
	Model& model;
public:
	View(Model& model);
	void render(SDL_Window* window);
};

#endif