// Copy Constructors.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <string>

using namespace std;


class Animal {
private:
	string name;
public:
	Animal() { cout << "Animal created" << endl; };
	Animal(const Animal& other) :name(other.name) { /*name = other.name;other.speak();*/ cout << "Animal created by copying" << endl; }; //copy constructor
					// other means object being copied to instatiating object
						// since this is const, you can only call const method in copy constructor instatiated objects		
	void setname(string name) { this->name = name; }
	void speak() const { cout << "My name is : " << name << endl; } // adding const to method in class prevents you from changing instance variable in method for object instatiated
};



int main()
{
	Animal animal1;
	animal1.setname("Freddy");
	//animal1.speak();

	// it is best that when you copy one class object to a new instatiating object, you use copy constructors to 
	//copy their current variables into your new instantiating object, or else the variables will be null; // copy constructor is CLASSNAME(const CLASSNAME & other);
	Animal animal2 = animal1;  //animal created only output only shows when animal1 is instantiated, but not when animal2 is instantiated 
							// calling copy constructor
	animal2.speak(); // name is null because of copy constructor, unless you  pass other.name as name to bring name from other to animal2.name 
	animal2.setname("Bob");
	
	animal1.speak();
	animal2.speak();

	Animal animal3(animal1); //this is  a way to using copy constructor directly
	animal3.speak();



    return 0;
}

