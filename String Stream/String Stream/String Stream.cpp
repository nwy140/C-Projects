// String Stream.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <string>
#include <sstream>

using namespace std;

int main()
{
	string name = "Bob";
	int age = 32;
												   //concatonate means +
	//string info = "Name: " + name + "; age" + age; // you can't concatonate a string with an int
												

	stringstream ss;	// if you want to, you need to include <sstream> and declare it as type stringstream and use << to replace +
							
						  // to print it , convert it to string before printing, use str(); // ss.str(); 
								// or just store it in a string variable by converting it to string and then print that string variable

	ss << "Name is: "; //must be seperate lines
	ss << name;
	ss << "; Age is: ";
	ss << age;
	string info = ss.str();

	cout << info << endl; 

	//cout << ss.str() << endl;



	

    return 0;
}

