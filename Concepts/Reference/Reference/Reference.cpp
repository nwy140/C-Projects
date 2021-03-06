// Reference.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

using namespace std;

void changeSomething(double &value) { // variable value at main function will also be changed according to the value in function
	value = 123.4;
}

int main()	
{
	int value1 = 8;
	int &value2 = value1; // value2 is just another name for value1//when declaring, using & means reference , changing a value referencing another value changes both value
	value2 = 10;

	cout << "Value1: " << value1 << endl;
	cout << "Value2: " << value2 << endl;

	double value = 4.321;
	changeSomething(value);
	cout << value << endl;


	return 0;
}

