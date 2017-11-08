// prototypes and include.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

#include <iostream>
#include"utils.h"


using namespace std;

//void doSomething(); // create a prototype by calling the function at the top and place a semicolon rather than a{}
			// compiler reads this, and when prototype function is called, compiler will read lower until it finds the function and call it
			// you can include this in header file so you don't have to call prototype in your cpp file and tge time
			// all you need to do is include your header file to access your prototypes

int main()
{
	doSomething();


    return 0;
}

//when function is placed below where it is called, there is error because compiler haven't read the function as it reads from top to down line by line
void doSomething() { // to fix this , create a prototype by calling the function at the top and place a semicolon rather than a {}   
	cout << "Hello" << endl;	
}




