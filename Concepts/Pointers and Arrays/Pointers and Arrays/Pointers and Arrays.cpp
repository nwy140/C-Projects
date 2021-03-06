// Pointers and Arrays.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

#include <iostream>
#include <string>

using namespace std;


//Loop through an array using a pointer, with array element reference syntax
//try loop through an array by incrementing pointer to array
//loop through an array , stopping by comparing two pointers


int main()
{
	string texts[] = { "one" ,"two","three" }; //an array knows how much data	

	cout << sizeof(texts) / sizeof(string) << endl;
							// array variables and pointers are extremely similar
								// the only difference is array knows how much data it is pointing at	 
									// while a pointer doesn't know how much pointer it is pointing at, it only knows size of the first block of element
	string *pTexts = texts; 

	for (int i = 0; i < sizeof(texts) / sizeof(string); i++) {
		/*cout << texts[i] <<" "<< flush;*/
		cout << pTexts[i] << " " << flush;
	}

	cout << endl;

	for (int i = 0; i < sizeof(texts) / sizeof(string); i++,pTexts++) { // you can have multples increase at the end of for loop , if you use commas 
		cout << *pTexts << " " << flush	;
	
		//pTexts++; // by adding 1, c++ knows that you are pointing to the next block of data
	}

	cout << endl;

	string *pElement =  &texts[0];//point to first string in array   	//   =&texts[0] is the same as =texts // = texts points to the first element in array//*texts[0] points to address of first element in array
	string *pEnd = &texts[2]; // point to address of element at the end of array

	while (true) {
		cout << *pElement << " " << flush;


		if (pElement == pEnd) {
			break;
		}

		pElement++;

	
	}



	//Loop through an array using a pointer, with array element reference syntax
	//try loop through an array by incrementing pointer to array
	//loop through an array , stopping by comparing two pointers
	
	cout << endl;

	//Loop through an array using a pointer, with array element reference syntax

	string arrays[] = { "ichi","ni","san","shi","go","roku","shiji","hachi","kyouku","ju" };
	string *pArrays = arrays; //point to first element in array

	for (int i = 0; i < sizeof(arrays) / sizeof(string); i++) {

		cout << pArrays[i]/*memory of where array is*//*use [] to select element in array*/ << " " << flush;

	}

	//try loop through an array by incrementing pointer to array

	cout << endl;
	for (int i = 0; i < sizeof(arrays) / sizeof(string); i++) {

		cout << *pArrays << " " << flush;
		pArrays++;
	}

	//loop through an array , stopping by comparing two pointers
	
	cout << endl;

	string *pStart = &arrays[0];
	string *pLast = &arrays[(sizeof(arrays) / sizeof(string) )- 1];  

	while (true) {
		
		cout << *pStart <<" "<<flush;
		
		if (pStart == pLast) {
			break;
		}
		pStart++;
	
	}


		return 0;
}

