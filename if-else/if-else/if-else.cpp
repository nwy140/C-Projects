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

	if (value < 3) {
		cout << "Insufficient priviledges to use these menu options." << endl;
	}
	else {
		cout << "Priviledge level sufficient." << endl;
	}
	if (value == 5) {
		cout << "Application quitting" << endl;
	}
	else {
		cout << "Not quitting" << endl;
	}





	return 0;////
}