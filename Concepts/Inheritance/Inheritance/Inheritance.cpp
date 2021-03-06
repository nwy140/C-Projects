// Inheritance.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;

class Animals {
public:
	void speak() { cout << "Grr..." << endl; };
};

//we take a class, and create sub classes, sub classes are a type of what the super class is . Super class the class sub class inherited from

// Class that Inherits is similar to the super class, its just that it has a few things changed compared to the old class

class Cat :public Animals { // create sub class inheriting Animal class // all methods and attributes from super is basically duplicaed into sub class
public:
	void jump() { cout << "Cat jumping" << endl; }; //create new methods , that are not available in super class but only in sub class	
};

class Tiger :public Cat // Tiger is know a sub class of Cat // Cat is super class of sub class Tiger
{
public:
	void attackAntelope() { cout << "Attacking!" << endl; }
};


int main()
{
	Animals a;
	a.speak();

	Cat cat;
	cat.speak();
	cat.jump();

	Tiger tiger;
	tiger.speak();
	tiger.jump();
	tiger.attackAntelope();

	return 0;
}

