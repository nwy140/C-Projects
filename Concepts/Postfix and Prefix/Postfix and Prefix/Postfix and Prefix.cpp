// Postfix and Prefix.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include<iostream>

using namespace std;

int main()
{
	int value = 8;
	
	cout << value++ << endl;
	cout << value << endl; // value++ means use it then increment
								// ++value means increment it then use it

	int number = ++value;

	cout << "Number is: " << number << endl;
	cout << "Value is now: " << value << endl;


    return 0;
}

