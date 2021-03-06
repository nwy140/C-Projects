// sizeof.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

#include <string>

#include <iostream>
using namespace std;


int main()
{
	int value[] = { 4,232,34,52 };

	cout << sizeof(value) << endl; // it is 16 bytes because each int in element takes 4 bytes
	cout << sizeof(int) << endl;	
	
	for (unsigned int i = 0; i < sizeof(value)/sizeof(int); i++) { // sizeof() always return an unsigned int, so it is better to initialise for loop with unsigned
		cout << value[i] << " " <<flush;
		//cout << sizeof(value) << endl;
	}


    return 0;
}

