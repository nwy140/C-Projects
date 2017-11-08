#pragma once


#include <iostream>
#include <string.h>
using namespace std;

class Person
{
private:
	string name;
	int age; 

public:
	Person() :name("unamed"), age(0) {};
	Person(string name, int age) :name(name), age(age) {};
	
	~Person();
	
	string toString();

};

