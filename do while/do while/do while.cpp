// do while.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <string>

#include <iostream>
using namespace std;

int main()
{
	const string password = "hello"; //const prevents object variable from being reassigned, similar to val in kotlin and swift

	
	string input;
	
	
	do {
		cout << "Enter your password >" << flush;

		cin >> input;
		if (input == password) {
			cout << "Access Granted" << endl;
		}
		else {
			cout << "Access Denied" << endl;
		}
	} while (input != password);


		return 0;
}

