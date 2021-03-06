// Pointer Arithmetic.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <string>

using namespace std;

int main()
{

	const int NSTRINGS = 10; // naming convention all capitals for const variables 

	string text[NSTRINGS] = { "ichi","ni","san","shi","go","roku","shiji","hachi","kyoku","ju" };

	string *pText = text;

	pText += 3;
	cout << *pText << endl;

	pText -= 2;

	cout << *pText << endl;

	string *pEnd = &text[NSTRINGS ];
	pText = text; 

	while (pText!=pEnd) {
		
		cout << *pText << endl;

		if (pText == pEnd) {
			break;
		}
		pText++;

	}

	//Set pTextbacktoStart
	pText = &text[0];

	long elements = (long)(pEnd - pText);


	cout << elements << endl;  //total elements

	//Set pTextbacktoStart
	pText = &text[0];

	pText += NSTRINGS/2; 

	cout << *pText << endl;	 //middle of element

	return 0;
}

