#pragma once

//Creating a class at solution explorer will automatically generate a cpp and header file with the class in header, and declaring methods from class in cpp
class Cat // functions in a class are called methods , variables are used to define states/attributes of an object of a class
{
private: //cannot be accessed outside of class , unless you are accessing from a method declared for this class
	bool happy; // every cat, every seperate object will have its copy of boolean variable
public: // can be accessed outside of class
	void makeHappy();
	void makeSad();	
	void speak();
};

