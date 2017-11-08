// Constructor Parameters and overloading.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "Person.h"
#include <iostream>

#include<string>

using namespace std;
int main()
{
				//person1 has no change in name or age variables attributes
	Person person1; // to change variables inside instantiated object class, you can use getters and setters
						// or use constructors	
	
	Person person2("Bob"); //constructor parameter is passed , and implemented by {newName = name}

	Person person3("Robber", 29); // passing name and age in constructor

	cout << person1.toString() << endl;
	cout << person2.toString() << endl;
	cout << person3.toString() << endl;




    return 0;
}

