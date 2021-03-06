// Arrays.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <string>

#include <iostream>
using namespace std;

int main()
{
	cout << "Arrays of integers" << endl;
	cout << "==================" << endl;


	int values[3]; // put number of items in [] brackets for array, if you put 3 , it means array has 3 elements. 
					// by default, if an element is initialised, it stores garbage values
	values[0] = 88; //first element starts counting from 0
	values[1] = 123; // c++ will not stop you from accessing elements that don't exist, accesing elements that don't exist gives garbage values as output
	values[2] = 7;
	
	// cout << values[3] << endl;

	cout << values[0] << endl;
	cout << values[1] << endl;
	cout << values[2] << endl;

	cout << endl << "Arrays of doubles" << endl;
	cout << "==================" << endl;

	double numbers[4] = { 4.5,	2.3,	7.2,	8.1 };

	for (int i = 0; i < 4; i++) {
				
		cout << "Elements at index " << i << ": " << numbers[i] << endl;
	}

	cout << endl << "Initializing with zero values" << endl;
	cout << "==================" << endl;

	int numberArray[8] = {}; // if {} is empty, elements will be set to 0 by default

	for (int i = 0; i < 8; i++) {
		//	numberArray[i] = 0;
		cout << "Elements at index " <<i<<": " << numberArray[i] << endl;
	}



	cout << endl << "Initializing with strings" << endl;
	cout << "==================" << endl;


	// Array of strings
	string text[] = { "apple","banana","orange" }; // if you don't set number of elements in array, the number of elements you initialized in {} will be number of elements in array
	
	for (int i = 0; i < 3; i++) {
		//	numberArray[i] = 0;
		cout << "Elements at index " << i << ": " << text[i] << endl;
	}


	cout << endl << "12 Times Table" << endl;
	cout << "==================" << endl;


	// Array of 12timestable
	//int timesTable[12];
	
	for (int i = 1; i < 13; i++) {

		try {
		/* Bug error  Stack error around timesTable array is corrupted
		timesTable[i] = i * 12;

		cout << timesTable[i] << endl;
		*/
			int timesDisplay = i * 12;
			cout << timesDisplay << endl;




		}
		catch (exception) { cout << "Program quitting" << endl; }


	}










	return 0;
}

