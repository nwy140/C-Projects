// FloatingPointTypes.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iomanip> //for this header, fixed display float in a not rounded value, scientific display float as scientific notation 

#include <iostream>
using namespace std;

int main()
{
	float fValue = 123.456789;
	cout << "Size of float: " <<sizeof(float) << endl;
	cout << setprecision(20) << fixed << fValue << endl;  //cout can only output 7 digits for floating point , //use setprecision to decide number of digits to output

	double dValue = 123.456789;	// double gets more digits correct than float as it has less  garbage values stored, so double is more accurate
	cout << "Size of double: " << sizeof(dValue) << endl;
	cout << setprecision(20) << fixed << dValue << endl;

	long double lValue = 123.45678976543210; // but has better accuracyas it gets more digits right
	cout << "Size of long double: " << sizeof(lValue) << endl; // long double uses 16 bytes in most compilers , but long  double uses 8 bytes as same as double in visual C++, 
	cout << setprecision(20) << fixed << lValue << endl;





    return 0;
}

