
#include<iostream>
#include <string>
using namespace std;


class Person
{
private:
	string name;
public:
	Person();
	~Person();
	string toString();
	void setName(string NewName); //setter // can be good , if you want to change the implementation variables later, which you can do without altering this method
	string getName(); //getter // return values of private variable in class to be called outside class
};

