// multidimensional-arrays.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

#include <string>
#include <iostream>
using namespace std;

int main()
{
	string animals[][3] = {	// IF YOU DON'T SPECIFY NUMBER OF ELEMENTS FOR ROWS  / COLUMNS, ANYTHING DECLARED IN {} WILL INITIALISE IT FOR YOU
		{"fox","dog","cat"}, // first row 
		{"mouse","squirrel","parrot"}  // second row
	} ; //[][] first [] is rows, second [] is column	

	for (int i = 0; i < 2; i++) {
		for (int j = 0; j < 3; j++) {
			cout << animals[i][j] <<  " " ;
		}
		cout << endl;
	}

	cout << endl << "Multiplication tables 0 to 12" << endl;

	int multiplyTable[13][13];


	for (int i = 0; i < 13; i++) {

	//	cout << i << " Multiplication Table" << endl;
		for (int j = 0; j < 13; j++) {
			multiplyTable[i][j] = i*j;
			cout << multiplyTable[i][j] << " " << flush;



		}
		cout << endl;



	}















    return 0;
}

