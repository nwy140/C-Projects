// Data Members.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

#include <iostream>
#include"Cat.h"
using namespace std;

int main()
{
	Cat jim;
	//jim.happy = true; //only the objects themselves can directly access those variables of their object states  // we wanna encapsulate those variables so that we only use them in a class // we don't have to worry about default variable value of class, as we redefine the variable value of class 
	jim.makeHappy();
	jim.speak();

	Cat bob; // creating second cat object
	//bob.happy = false;
	bob.makeSad();
	bob.speak();


	return 0;
}

