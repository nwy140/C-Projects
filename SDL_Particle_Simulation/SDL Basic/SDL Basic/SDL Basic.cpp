// SDL Basic.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

#include <SDL.h>

using namespace std;
// as a programmer, you don't need to remeber APIs unless you are using it for months or years	

int main(int argc, char ** argv)
{
	const int SCREEN_WIDTH = 800;
	const int SCREEN_HEIGHT = 600;

	if (SDL_Init(SDL_INIT_VIDEO) < 0) {
		cout << "SDL init failed";
		return 1;
	}

	SDL_Window *window = SDL_CreateWindow("Particle Fire Explosion",
		SDL_WINDOWPOS_UNDEFINED, SDL_WINDOWPOS_UNDEFINED, SCREEN_WIDTH, SCREEN_HEIGHT, SDL_WINDOW_SHOWN);
	if (window == NULL) {
		printf("Could not create window %s\n", SDL_GetError());
		SDL_Quit();
		return 2;
	}
	bool quit = false;

	SDL_Event event;
	while (!quit) {
		//update particles
		//draw particles
		//Check for messages/events
		while (SDL_PollEvent(&event)) {
			if (event.type ==SDL_QUIT) {//SDL_QUIT event is raised when you click whatever closes the window
				quit = true;
			}
		}
	}


	SDL_DestroyWindow(window);
	SDL_Quit(); // if   you want to know more about this, search for allegro tutorial 


	return 0;
}








