#include "stdafx.h"
#include <iostream>

#include "Cat.h"
using namespace std;

Cat::Cat() //defining constructor //runs when class object is instantiated 
{
	cout << "Cat is created" << endl;
	happy = true;
}
Cat::~Cat() //defining destructor //runs when class object is destroyed // all objects are destroyed when main function reaches } and ends , unless you have already destroyed them
{				// you can add custom curly brackets to delocate memory and destroy objects before the end of the actual program
	cout << "Cat destroyed" << endl;
}

void Cat::speak() // when declaring methods from a class, you can access private variables and other methods
{				
	if (happy )	{ // if not initialized garbage value of bool happy variable is not 0, thus printing out meow as it is true;
		cout << "Meow!" << endl;
	}
	else {
		cout << "Sssssss!" << endl;
	}
}
