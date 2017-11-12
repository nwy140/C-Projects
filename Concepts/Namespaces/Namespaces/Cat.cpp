#include "stdafx.h"
#include "Cat.h"

#include <iostream>
using namespace std;

namespace cats { // you need to put namespace around implementation of your class methods
	Cat::Cat()
	{
	}


	Cat::~Cat()
	{
	}

	void Cat::speak() {
		cout << "Meow!" << endl;
	}
}