// ComparingFloats.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iomanip>

#include <iostream>
using namespace std;


int main()
{
	float value1 = 1.1;	

	if (value1 < 1.11 && value1>1.10 ) { // value1 will never be exactly == 1.1, because floating points are never exact, so use < or > conditions to compare instead
		cout << "equals" << endl;
	}
	else {
		cout << "not equals" << endl;
	}

	cout << setprecision(10) << value1 << endl; 
	
	return 0;
}

