// TestLibrary.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <Cat.h> //included header via project properties

using namespace std;

int main()
{
	caveofprogramming::saySomething();

	caveofprogramming::Cat bob;

	bob.speak();

    return 0;
}

