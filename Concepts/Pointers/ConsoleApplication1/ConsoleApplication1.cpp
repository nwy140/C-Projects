// ConsoleApplication1.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>


//summary
/*
* int value = 10 ; // storage of value at random memory address
	cout<<value <<endl; //output:10
* int *pvalue = &value // pointer pvalue points to memory address of value 
* cout<<pvalue<<endl; //output: 0x8137F9283 Random memory address of value
* cout<<*pvalue<<endl; //output: 10 // *pvalue is dereference , it means  pointer's memory address' storage of value
* // when passing value in a parameter of a function ,value is copied in function 
* // if another variable declares itself as parameter's value , and then changed itself, original value will not change
* // to change original value, you need to pass value as pointer to parameter of function, then make another variable in function to equal dereferenced pointer
*/
//keywords 
//		   initialized variable : when initialized, creates a random memory address storing variable //int pointto
//		   pointer : memory address to go to						  // int * pointer // declare
//		   memory address: where storage of variable is stored		  //&pointto
//		   dereferenced pointer: storage of variable stored in memory //*pointer


using namespace std;

void manipulate(double *pvalue) {
	cout << "2. Value of int in manipulate: " << *pvalue << endl;
	*pvalue = 10.0 ; // change value of pointer's memory address storage
	cout << "3. Value of int in manipulate: " << *pvalue << endl;
}


int main()
{
	int nValue = 8; // you can think of nValue as a bucket we put a value into
						// amount of memory allocated is controlled by type assigned , in this case it is int, thus allocate 4 bytes of memory
	//nValue = 9; // you can actually crete a variable that stores the address of int nValue  rather than the value itself

	int *pnValue = &nValue; //int* is a pointer to an int // pointer to an int = address of nValue // & means memory address of variable
								//memory address off nValue is stored in pointer to an int // pointer is used to store memory address of an object variable
									

	cout << "Int value: " << nValue << endl;
	cout << "Pointer to an address: " << pnValue << endl;
	cout << "Int value via pointer: " << *pnValue << endl; // *variable is used to dereference a pointer after declaring
															//this gets the value stored at address the pointer refers to 
																
	cout << "=====================" << endl;
	double dValue = 123.4;

	cout << "1. dValue: " << dValue << endl;
	manipulate(&dValue); // copy value by passing variable as parameter into function// when you pass a value into a function, its like pouring value from 1 bucket to another
	cout << "4. dValue: " << dValue << endl; //since value copied to function is stored in another variabe that is changed is the function, original value passed into parameter of function is not changed at all
												// to change original value, pass memory address of value as pointer into parameter of function
													


	return 0;
}

