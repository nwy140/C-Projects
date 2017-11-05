// Input.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <string>
#include <iostream>
using namespace std;

int main()
{

	cout << "Enter your name: " << flush; //save buffer by clearing text after printing in using flush
	string input;
	cin >> input;  // is extraction operator, for extracting information from an object like cin
	cout << "You entered: " << input << endl;

	cout << "Enter a number: " << flush; //save buffer by clearing text after printing in using flush
	int value;
	cin >> value;  // is extraction operator, for extracting information from an object like cin
	cout << "You entered: " << value << endl;


	//Binary  1011    (1x2^3) (0x2^2) (1x2^1) (1x1) = 11   // 1011 = 11	 in binary numbers

	//4 bits = 1 byte
	//32 bits = 8 bytes

    return 0;
}

