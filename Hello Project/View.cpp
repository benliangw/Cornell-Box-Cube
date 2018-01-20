#include "View.h"

View::View(Model& model) :model(model) {}

void View::render(SDL_Window* window) {
	glClearColor(model.background_color[0],
		model.background_color[1], model.background_color[2], model.background_color[3]);
	glClear(GL_COLOR_BUFFER_BIT);
	glFlush();

	SDL_GL_SwapWindow(window);
}