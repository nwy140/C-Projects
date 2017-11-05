// OtherTypes.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;


int main()
{
	bool bValue = true;
	cout << bValue << endl; //output is 1 if true output is 0 if false

	char cValue = '7';   //you can declare char as ASCII value or '' single characters 
	cout << (int)cValue << endl; // to see the actual ascii of a char, put (int) before the variable object, this is casting
	cout << "Size of char: "<<sizeof(char) << endl; //char only takes 1 bytes because it only stores 1 character


	wchar_t wValue = 'i'; // wchar_t 
	cout << (char)wValue << endl; //output is ASCII value
	cout << "Size of w_char_t: " << sizeof(wchar_t) << endl; // wchar_t  takes more bytes than char





    return 0;
}

