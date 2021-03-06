// Reversing a String.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

using namespace std;

//remeber, when dealing with pointers outside declaration
// with * with actual value
// without * means memory location pointing to

int main()
{
	char text[] = "hello"; // if you put this as okay, the whole application crash

	int nChar = sizeof(text) / sizeof(char) - 1;

	char* pStart = &text[0]; //points to first	 element of text
	char* pEnd = text + (nChar - 1);

	while (pStart < pEnd) //start points to a memory location smaller than end
	{

		char save = *pStart;
		*pStart = *pEnd;
		*pEnd = save;
		pStart++;
		pEnd--;
	}

	cout << text << endl;




	cout << "Reversing a string" << endl;
	
	
	
	char word[] = "okay";
	
	int wordLength = sizeof(word) - 1; // null terminator , not included
	
	char* wordStart = word; // first element
	char* wordEnd = word + (wordLength -1); // -1 because first element is added
	
	int i = 0;
	while (i<wordLength/2) {

		char save = *wordStart;
		
		*wordStart = *wordEnd;
		*wordEnd = save;

		wordStart++;
		wordEnd--;
		i++;
	}
	cout << word << endl;


	return 0;
}


