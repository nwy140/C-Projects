// FunctionTemplates.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

template<class T> // Templates are used to create a type that can work for anything
T GetMax(T a, T b) { // (max,min)
	if (a > b) {
		return a;
	} 
	else
	{
		return b;
	}
}

template<class T>
T AddThree(T a, T b, T c){
	return a + b + c;
}

/* // We are only changing the types, so why declare the method again? Thus, the Templates was created to solves this.
float GetMax(float a, float b) { // (max,min)
	if (a > b) {
		return a;
	}
	else
	{
		return b;
	}
}
*/

int main()
{
	std::cout << GetMax(1.3, 2.2) << std::endl;
	std::cout << GetMax(1, 2) << std::endl;
	std::cout << GetMax("hello","world") << std::endl;
	std::cout << GetMax((float)1.3, (float) 2.2) << std::endl;
	std::cout << AddThree(1, 2, 3) << std::endl;
	std::cout << AddThree(1.1, 2.2, 3.1) << std::endl;

	return 0;
}

