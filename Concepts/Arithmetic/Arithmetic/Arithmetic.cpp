// Arithmetic.cpp : Defines the entry point for the console application.
	//

#include "stdafx.h"
#include <iostream>
#include <string>

using namespace std;

/*
* +
* -
* *
* /
* +=
* -=
* /=
* *=
* %
* %=
* precedence
*/

// Take large numbers of seconds and convert it to hours , minutes, and seconds
int main()
{
	double value1 = (double)7 / 2; // you still get 3 because it is an int or double type , 
							//whenever you divide integers in c++ , it will always discard its remainder
								// you must add decimal points to make sure it won't discard its remainder
									// or you can just cast them to double or float using (double) or (float) 

	cout << value1 << endl;

	int value2 = (int)7.3; // casting to int will ignore remainder

	cout << value2 << endl;

	int value3 = 8;
	value3 += 1; //same as value3 ++  or value3 = value3+1

	int value4 = 10;
	value4 /= 5; //same as value4 = value4/5
	cout << value4 << endl;

	int value5 = 12 % 5; //% gives remainder // % does not work with floating point or double, you must cast to int before use
	cout << value5 << endl;

	double equation = (((int)5.3 / 4) % 2) + (2.3 * 6); // always put () to make your expression clearer
	cout << equation << endl;


	string timeType;
	while (timeType != "hours" && timeType != "Hours"&&timeType != "minutes"&&timeType != "Minutes")
	{
		cout << "Convert to hours or minutes, " << "please type \"hours\" or \"minutes\" exactly : " << endl;

		cin >> timeType;
		cout << "You entered: " << timeType << endl;
	}


	cout << "Enter number of seconds to convert to: " << timeType << endl;

	int secondsInput;

	cin >> secondsInput;

	int multipliers;

	if (timeType == "hours" || timeType == "Hours") {
		int *multiplier = &multipliers;
		*multiplier = 60 * 60;
	}
	else {
		int *multiplier = &multipliers;
		*multiplier = 60;
	}
	int finalOutput = secondsInput / multipliers;

	cout << "Seconds: " << secondsInput << " converted to " << timeType << ": " << finalOutput <<" "<< timeType << endl;



	return 0;
}

