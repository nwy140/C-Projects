// Arrays and Functions.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <string>

using namespace std;
// could declare variables here string numbers[] = { "ichi","ni","san","shi","go","roku","shiji","hachi","kyoku","ju" };



void show1(const int nElements,string text[]) {

//	cout << sizeof(text) << endl; // sizeof(text) will only return size of pointer, if won't return the real size
									// so it is a common thing to do to pass the number of elements in a function along with the array

	for (int i = 0; i < nElements/sizeof(string); i++) {
		cout << text[i] << endl;
	}

}

void show2(const int nElements, string *text) {

	//	cout << sizeof(text) << endl; // sizeof(text) will only return size of pointer, if won't return the real size
	// so it is a common thing to do to pass the number of elements in a function along with the array

	for (int i = 0; i < nElements / sizeof(string); i++) {
		cout << text[i] << endl;
	}

}

void show3(string (&text)[10]) { // you have to put round brackets , because we are not passing an array of references, but a reference of an array
		
	//	cout << sizeof(text) << endl; // sizeof(text) will only return size of pointer, if won't return the real size
	// so it is a common thing to do to pass the number of elements in a function along with the array

	for (int i = 0; i < sizeof(text)	 / sizeof(string); i++) {
		cout << text[i] << endl;
	}

}

//string *getArray() {
//
////Don't return pointers to local variables 	string text[] = { "ichi","ni","san","shi","go","roku","shiji","hachi","kyoku","ju" };
//		// because that pointer will point to something that no longer exist once the function ends
//	return numbers;
//}

char *getMemory() {
	char *pMem = new char[100];
	return pMem;	
}


void freeMemory(char *pMem) {
	delete[] pMem; // delete deallocate memory while new type allocates memory
}

int main()
{
	string text[] = { "ichi","ni","san","shi","go","roku","shiji","hachi","kyoku","ju" };

	

	show3( text);

	char *pMemory = getMemory(); 
	//delete [] pMemory;
	freeMemory(pMemory);

    return 0;
}

