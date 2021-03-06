// Encapsulation.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <string>

using namespace std;

class Frog {
private:
	string name = "Freddy";
private: // it is common declare your private method in a seperate private section so visually , you won't	mixing up methods with instance data
	string getName() { return name; };

public:
	Frog(string name) :name(name) {}; // since constructor is called outside class, it has to be public
	void info() { cout << "My name is: " << getName() << endl; };
};
//Encapsulation means when we encapsulate , we hide away the instance varsiables so no one can mess with them outside class//this is an example of encapsulation
	//if we don't encapsulate, we can end up with different objects which set each other's instance variables
		//if you can, try and make as methods of your class private as possible, to avoid calling them outside class when you don't need to
int main()
{
	Frog frog("Freddy");

	frog.info();

	return 0;
}

