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
	Person();
	Person(string name,int age);
	
	~Person();
	
	string toString();

};

