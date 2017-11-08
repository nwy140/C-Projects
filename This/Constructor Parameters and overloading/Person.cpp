#include "stdafx.h"

#include "Person.h"
#include <string>
#include <iostream>
#include <sstream>	 

using namespace std;
Person::Person()
{
	name = "undefined";
	age = 0;
}

Person::Person(string name, int age) {  // how to differentiate between variables in class and variables in constructor parameter 
	this->name = name;// to refer to variables in class rather than the ones passed in constructor parameter, use this->
//class variable = constructor variable
	this->age = age; // this-> contains memory location of each individual objects instantiated

	cout << "Memory location of object: " << this << endl;
};


string Person::toString() {
	stringstream ss;

	ss << "Name: ";
	ss << name;
	ss << "; age: ";
	ss << age;

	return ss.str();
}




Person::~Person()
{
}
