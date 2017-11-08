#include "stdafx.h"

#include "Person.h"
#include <string>
#include <iostream>
#include <sstream>	 

using namespace std;
//Person::Person():name("unnamed"),age(0) 
//{
////			name = "undefined";
////	age = 0;
//}

//Person::Person(string name, int age):name(name),age(age) {  // constructor initialization list
//								// classvar(constructor var)
//	//rather than using this->name = name; 
//					//  classvar = constructor var
//
//	//cout << "Memory location of object: " << this << endl;
//};


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
