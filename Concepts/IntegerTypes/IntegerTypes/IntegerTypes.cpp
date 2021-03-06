// IntegerTypes.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <limits>

#include <iostream>
using namespace std;

int main()
{
	int value = 94834823874973289; // if you put a too big value as an int type, it will overflow and become garbage value
	cout << value << endl;		 // include <limit> library to see max and min value for the type you use

	cout <<"Max int value: "<< INT_MAX << endl;
	cout << "Min int value: " << INT_MIN << endl;

	long int lValue = 295458688;//Long int has higher max and min values than int; // most compilers accepts long type as long int as a short form
	cout << lValue << endl;

	short int sValue = 5934;// short int has smaller  max and min values than int; // most compilers accepts long type as long int as a short form
	cout << sValue << endl;

	cout << "Size of int: " << sizeof(int)<<endl; //sizeof operator display output as 4 bytes, 4 bytes is 32 bits
	cout << "Size of short int: " << sizeof(short int) << endl;

	unsigned int uValue= 32320; //unsigned int only accepts positive values therefore can store bigger values than default int, default int is signed int
	cout << uValue << endl;

    return 0;
}

