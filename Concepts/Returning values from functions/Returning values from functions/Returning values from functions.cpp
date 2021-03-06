
x
#include "stdafx.h"
#include <iostream>
using namespace std;

void showMenu() { //void means returns no data , don't need a return value
	cout << "1. Search" << endl; //C++ compilers reads code downwards, so functions must be declared on top of where they are called
	cout << "2. View Record" << endl;
	cout << "3. Quit" << endl;
}

int processSelection() {

	cout << "Enter selection: " << endl;

	int input;
	cin >> input;

	return input;
}

int main()
{
	showMenu();
	int selection = processSelection();
	
	
	switch ( selection/*input*/) { //input variable object does not exist in main function, so to get it, we return input at processSelection function and declare it as selection, change void to int and return input
	case 1:
		cout << "Searching..." << endl;
		break;
	case 2:
		cout << "Viewing..." << endl;
		break;
	case 3:
		cout << "Quitting..." << endl;

		break;
	default:
		cout << "Please select an item from the menu" << endl;
		}

	return 0;
}

