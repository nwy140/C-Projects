// switch.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

using namespace std;

int main()
{
	int value = 4;

	switch(value) { //pass the variable object to switch on as parameter
		case 4:      // run code if value is 4 // you are not allowed to have variable as cases	, but only if they are const val, 
			cout << "Value is 4" << endl;
			break;  //break out of switch method
		case 5:      // run code if value is 5
			cout << "Value is 5" << endl;
			break;
		case 100:
			cout << "Value is 100" << endl;
			break;
		default:   // run code if no cases are match, this is just like else, having multiple cases are like else if
			cout << "Unrecognised Value" << endl;
	}
	return 0;
}

