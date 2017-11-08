#include "stdafx.h"
#include "Person.h"


Person::Person()
{
	name = "George";
}

string Person::toString() {
	return "Person's name is: " + name;
}

string Person::getName() {
	return name;
}

void Person::setName(string newName) { 
	name = newName; //setting new value of name
}


Person::~Person()
{
}
