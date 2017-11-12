#include "stdafx.h"
#include <iostream>

#include "Cat.h"
using namespace std;

void Cat::speak() // when declaring methods from a class, you can access private variables and other methods
{
	if (happy ) {
		cout << "Meow!" << endl;
	}
	else {
		cout << "Sssssss!" << endl;
	}
}

void Cat::makeHappy() {
	happy = true;
}

void Cat::makeSad() {
	happy = false;
}



