// Classes.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;

#include "Cat.h"
// void speak(); //search for speak method where it is defined in another cpp file  or the current cpp file
			  // calling the method will work in another cpp file , especially calling it at the top and even anywhere in the file

int main()
{		
	//CLASSNAME objectname	// TO ACCESS methods inside a class, you need to create an object out the class, then use . to select methods you want to call after the objectname
	Cat cat1;	//Creating an object out a class, to easily access the methods and variables inside the class
				
	cat1.speak();
	cat1.jump();

	
	return 0;
}

