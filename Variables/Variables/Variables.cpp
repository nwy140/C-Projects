// Variables.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>


int main()
{
	int number_cats = 5; // don't use underscore, they makes declaring variables ugly, use camelCasing instead

	int numberCats = 5; //camelCasing 
	int numberDogs = 7;
	int numberAnimals = numberCats + numberDogs;

	std::cout << "Hello" << std::endl;
	std::cout << "Number of cats: " << numberCats << std::endl;
	std::cout << "Number of dogs: " << numberDogs << std::endl;

	std::cout << "Total number of animals = " << numberAnimals << std::endl;

	std::cout << "New dog acquired" << std::endl;

	numberDogs++;

	std::cout << "New number of dogs: "<<numberDogs << std::endl;

    return 0;
}

