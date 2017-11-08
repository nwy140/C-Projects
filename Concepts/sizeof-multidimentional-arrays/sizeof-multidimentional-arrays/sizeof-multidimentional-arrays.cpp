// sizeof-multidimentional-arrays.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <string>
#include <iostream>
using namespace std;

int main()
{
	string animals[][3] = {
		{"fox","dog","cat"},
		{"mouse","squirrel","parrot"}
	};

	//cout << sizeof(string) << endl; // string takes up 28 bytes in visual c++		
	//cout << sizeof(animals) << endl;
	//cout << sizeof(animals[0]) / sizeof(string) << endl;

	for (
		
		unsigned int i = 0; i < sizeof(animals) / sizeof(animals[0]); i++) { // sizeof total /sizeof 1 row = number of rows in array
		for (int j = 0; j < sizeof(animals[0]) / sizeof(string); j++) { // sizeof 1 row / sizeof 1 cell = number of column in current row
			cout << animals[i][j] << " " << flush;
		}
		cout << endl;
	}




















	return 0;
}


