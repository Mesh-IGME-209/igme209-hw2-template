// HW2-GravityGame.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#define _CRTDBG_MAP_ALLOC
#include <cstdlib>
#include <crtdbg.h>

#include <iostream>
#include <Box2D/Box2D.h>
#include "game.h"

int main()
{
	// Do NOT put your entire game loop here. Break things apart into functions in game.h/cpp
	// in a useful, readable manner!


	std::cout << "Welcome to the Gravity Game!" << std::endl;



	// Keep this at the end of main!
	if (_CrtDumpMemoryLeaks())
	{
		std::cout << "Possible memory leaks detected!" << std::endl;
	}
	else
	{
		std::cout << "No memory leaks detected." << std::endl;
	}
}
