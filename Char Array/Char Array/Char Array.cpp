// Char Array.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

using namespace std;

//Create a char string and output it
//Output all the chars in the for loop
//Output all the chars with a while(true) loop

int main()
{
    //char text[] = {'h','e','l','l','o'} //string is an array of chars
	char text[] = "hello";
		 
	for (int i = 0; i < sizeof(text) /* /sizeof(char) don't need to div, because char is 1 byte*/; i++) {
		cout << i << ": " << text[i] << endl; // prints  6 characters, final character is null string terminator , which lets program knows when the string ends	

	}

	int k = 0;

	while (true) {
		if (text[k] == 0 /*NULL*/) {
			break;
		}

		cout << text[k] << flush;
		k++;		
	}

	cout << endl;


	char input[] = "string is an array of char";
	for (int i = 0; i < sizeof(input); i++) {
		cout << i << ": " << input[i] << endl;
	}
	
	int L = 0;

	while (true) {
		if (input[L] == 0) {
			break;
		}

		cout << input[L] << flush; //C++╠╠╠╠╠╠╠╠╠
		L++;


	}







	cout << endl;

    return 0;
}

