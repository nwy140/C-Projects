// Strings.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <string> //you need to include string if you are using visual studio , damn you iwyu 
using namespace std;


int main()
{
	string text1 = "Hello "; // technically, string is a class , the variable is considered an object, 
											//  whereas int is a primitive type, variable declared as int is still considered variable
	string text2 = "Fred";

	string text3 = text1 + text2;


	cout << text1 << text2 << endl;
	cout << text3 << endl;
	return 0;
}

