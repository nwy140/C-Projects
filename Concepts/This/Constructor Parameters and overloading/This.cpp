// Constructor Parameters and overloading.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "Person.h"
#include <iostream>

#include<string>

using namespace std;
int main()
{
	Person person1;
	Person person2("Bob", 42);
	Person person3("Sue", 29);

	cout << person2.toString() << "; memory location: " << &person2 << endl; // & is memory location of an object or variable
	cout << person3.toString() << "; memory location: " << &person3 << endl; // this-> when accessed in a method is the same as &objectName




	return 0;
}

