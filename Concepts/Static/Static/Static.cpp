// Static.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

using namespace std;


//.h header file
class Test
{
public: // it is common to define static const that are public because they can't be changed
	static const int MAX = 99;

private:
	int id;
	// declaring a method or variable as static means it will be associated with class, but not object
	static int count;	 // if you declare a variable static, it means theres one variable that will be showed in all the object
							//static means this variable will be shared in all instance of this class and subclass object
								// normally memory will be allocated when you declare a variable
									//but for static variable, you have declare it elsewhere again to initialise it
										// otherwise , if object will its own seperate instance variable
public:
	Test() { id = count++; }//if you put ++ after, count will be assigned to id first, then incremented. if you put ++ at the start , count will be incremented first before assigned to id}; // static int counts number of objects declared
	int getID() { return id; };
	static void showInfo() { cout << count << endl; }


};
//.cpp source //normally we would initialise static variable in the other cpp file
int Test::count = 0;


int main()
{
	//we don't need object to associate we the static variable , because it is accessible from anywhere // you need :: to access static variables from specific class without using object
	cout << Test::MAX << endl;
	Test::showInfo();

	Test test1;
	cout << "Object1 ID: " << test1.getID() << endl;


	Test test2;
	cout << "Object2 ID: " << test2.getID() << endl;


	Test::showInfo();



	return 0;
}

