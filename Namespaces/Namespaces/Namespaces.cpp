// Namespaces.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "Cat.h"
#include "Catw.h"

#include <iostream>
using namespace std;
using namespace sws;

int main()
{
	Cat cat;
	cat.speak();

	sws::Cat cat2;
	cat2.speak();

	cats::Cat cat3;
	cat3.speak();

	cout << sws::CAtNAME << endl;
	cout << cats::CATNAME << endl;


	return 0;
}

