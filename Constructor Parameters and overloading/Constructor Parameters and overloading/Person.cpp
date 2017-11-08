#include "stdafx.h"

#include "Person.h"
#include <sstream>	 


Person::Person()
{
	name = "undefined";
	age = 0;
}
Person::Person(string newName, int newAge) { name = newName; age = newAge; }

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
