#pragma once

//Creating a class at solution explorer will automatically generate a cpp and header file with the class in header, and declaring methods from class in cpp
class Cat // functions in a class are called methods , variables are used to define states/attributes of an object of a class
{
private: //cannot be accessed outside of class , unless you are accessing from a method declared for this class
	bool happy;  // any variable in class header is not initialized, thus does have a random garbage value
				  // every cat, every seperate object will have its copy of boolean variable when initialized
public: // can be accessed outside of class
	void speak();
	Cat(); //constructor // don't have return type
	~Cat(); //destructor // destructor has a ~ before classname


};

