
#include "stdafx.h"

#include <iostream>
#include"Cat.h"
using namespace std;

int main()
{
	cout << "Starting program..." << endl;

	{
		Cat bob; //instantiating Cat object bob 
		bob.speak();
	}//destroy cat object bob // memory will be dellocated // else it will be destroyed at the end of main function



	cout << "Ending program..." << endl;

	return 0;
}


