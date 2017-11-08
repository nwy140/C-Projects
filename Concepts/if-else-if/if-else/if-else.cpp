// if-else.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;

int main()
{
	cout << "1.\tAdd new record" << endl; // use \t to add tab , to add " in a "" , use \"
	cout << "2.\tDelete record" << endl;
	cout << "3.\tView record" << endl;
	cout << "4.\tSearch record" << endl;
	cout << "5.\tQuit" << endl;

	cout << "Enter your selection >" << flush;

	int value;
	cin >> value;

	if (value == 1) {
		cout << "Adding records" << endl;
	}
	else if (value == 2) {
		cout << "Deleting records" << endl;
	}
	else if (value == 3) {
		cout << "Viewing records" << endl;
	}
	else if (value == 4) {
		cout << "Searching records" << endl;
	}
	else if (value == 5) {
		cout << "Application quitting" << endl;
	}
	else {
		cout << "Invalid option" << endl;
	}

	return 0;
}