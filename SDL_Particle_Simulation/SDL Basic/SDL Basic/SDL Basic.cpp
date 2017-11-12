// SDL Basic.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

#include <SDL.h>

using namespace std;

int main(int argc, char ** argv)
{

	if (SDL_Init(SDL_INIT_VIDEO) < 0) {

		cout << "SDL init failed";
		return 1;
	}

	cout << "SDL Init succeeded" << endl;
	SDL_Quit(); // if   you want to know more about this, search for allegro tutorial 


	return 0;
}








