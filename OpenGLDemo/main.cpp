#include <iostream>
#include <GL\glew.h>
#include "display.h"

int main(int argc, char* argv[])
{
	Display display(800, 600, "lol");

	while (!display.IsClosed())
	{
		glClearColor(0.05f, 0.66f, 0.55f, 1.0f);
		glClear(GL_COLOR_BUFFER_BIT);

		display.Update();
	}

	return 0;
}