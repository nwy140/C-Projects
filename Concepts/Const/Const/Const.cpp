// Const.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <string>

using namespace std;

class Animal {
private:
	string name;
public:
	void setname(string name) { this->name = name; }
	void speak() const { cout << "My name is : " << name << endl; } // adding const to method in class prevents you from changing instance variable in method for object instatiated
};

int main()
{
	const int PI =3.141592; //it is common to name your const uppercase

	cout << PI << endl;

	Animal animal;
	animal.setname("Freddy");
	animal.speak();

	int value = 8;
	value = 9;
	//const int *pValue = &value; // cannot change dereferenced value *pValue
	int const *pValue = &value; // cannot change memory address pointer is pointing to
	//const int const *pValue =&value //cannot change dereferenced value and memory address pointer points to	


	cout << *pValue << endl;

	int number = 11;	 
	pValue = &number;

	cout << *pValue << endl;




    return 0;
}

