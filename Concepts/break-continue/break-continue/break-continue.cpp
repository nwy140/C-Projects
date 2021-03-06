// break-continue.cpp : Defines the entry point for the console application.
//
#include "stdafx.h"
#include <iostream>

#include <string>

using namespace std;



int main()
{
	/*
	for (int i=0; i < 5; i++) {
	cout << "i is" << i << endl;

	if (i == 3) {
	break; // breaks entire loop , don't need to reassign i to do it
	}
	cout << "Looping..." << endl;

	}

	*/ //break

	
	/*
	for (int i=0; i < 5; i++) {
		cout << "i is " << i << endl;

		if (i == 3) {
			continue; //breaks current iteration of loop
		}
		cout << "Looping..." << endl;

	}
*/
	
	const string password = "hello"; //const prevents object variable from being reassigned, similar to val in kotlin and swift
	string input;

	do {
		cout << "Enter your password >" << flush;

		cin >> input;
		if (input == password) {
			break;
		} else{
			cout << "Access Denied" << endl;
		}
	} while (true);
	cout << "Access Granted" << endl;


	cout << "Program quitting ..." << endl;

    return 0;
}

