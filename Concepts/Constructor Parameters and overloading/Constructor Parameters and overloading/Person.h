#pragma once


#include <iostream>
using namespace std;

class Person
{
private:
	string name;
	int age;
public:
	Person();
	Person(string newName) { name = newName; age = 0; }; // you don't need to define the implementation {} here, but since you have very little code at cpp constructor , you can do it here.
	Person(string newName, int newAge);
	~Person();
	
	string toString();

};

