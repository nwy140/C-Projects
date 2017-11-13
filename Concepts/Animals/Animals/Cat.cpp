#include "stdafx.h"
#include "Cat.h"

#include<iostream>

namespace caveofprogramming {
	void saySomething() {
		std::cout << "Hello there!!!" << std::endl;
	}

	Cat::Cat()
	{

	}

	void Cat::speak() {
		std::cout << "Meoww" << std::endl;
	}

	Cat::~Cat()
	{
	}
}