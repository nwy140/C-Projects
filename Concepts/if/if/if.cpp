// if.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <string>
using namespace std;

int main()
{
	string password = "74123";
	cout << "Enter your password >" << flush;
	
	string input;
	cin >> input;

	cout << "'" << input << "'" << endl;

	if (input == password) {
		cout << "Access granted" << endl;
	}
	if (input != password) {
		cout << "Access is denied" << endl;
	}



    return 0;
}

