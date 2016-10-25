#include <iostream>
#include <GL\glew.h>
#include "display.h"
#include "mesh.h"

#undef main

int main(int argc, char* argv[])
{
	Display display(800, 600, "lol");

	Vertex vertices[] = {Vertex(glm::vec3(-0.5, -0.5, 0)),
						 Vertex(glm::vec3(0, 0.5, 0)), 
						 Vertex(glm::vec3(0.5, -0.5, 0))};

	Mesh mesh(vertices, sizeof(vertices) / sizeof(vertices[0]));

	while (!display.IsClosed())
	{
		glClearColor(0.05f, 0.66f, 0.55f, 1.0f);
		glClear(GL_COLOR_BUFFER_BIT);

		display.Update();
	}

	return 0;
}