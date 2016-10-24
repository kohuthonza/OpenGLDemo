#include<string>
#include<SDL2/SDL.h>

class Display
{
public:
	Display(int width, int height, const std::string &title);

	void Update();
	bool IsClosed();

	~Display();
private:
	SDL_Window *window;
	SDL_GLContext context;
	bool isClosed;

};

