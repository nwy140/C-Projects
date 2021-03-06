// Allocating Memory.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <string>

using namespace std;

class Animal {
private:
	string name;
public:
	Animal() { cout << "Animal created" << endl; };
	Animal(const Animal& other) :name(other.name) { /*name = other.name;other.speak();*/ cout << "Animal created by copying" << endl; }; //copy constructor
																																		 // other means object being copied to instatiating object																																		 // since this is const, you can only call const method in copy constructor instatiated objects		
	~Animal() { cout << "Destructor called" << endl; }; //memory of object will be deallocated and destructor will be called at}
	void setname(string name) { this->name = name; }
	void speak() const { cout << "My name is : " << name << endl; } // adding const to method in class prevents you from changing instance variable in method for object instatiated
};
class Alphabets {
private:
	char alphabet;
public:
	Alphabets() { cout << "Alphabet created" << endl; };
	~Alphabets() { cout << "Alphabet destroyed" << endl; };
	void setChar(char a) { this->alphabet = a; };
	void speak() { cout << alphabet << flush; };
};

int main()
{
	int *pInt = new int;

	*pInt = 8;
	cout << *pInt << endl;

	delete pInt;

	Animal *pAnimal = new Animal[10]; // allocating memory for object and instatiating object
										//[10] instantiate 10 Animal objects
	pAnimal[5].setname("George");
	pAnimal[5].speak();

	delete [] pAnimal;  //adding [] after delete makes sure delete will delete all instances of that object pointed by pAnimal
		 
	char *pMem = new char[1000];
	delete [] pMem;

	char c = 'a';
	c++;
	string name(5, c); // create a string with 5 character 'a'	
	cout << name << endl;

	cout << "==================" << endl;

	Alphabets *alpha = new Alphabets[26];
	char upCharacter = 'a'-1;

	for (int i = 0; i < 26; i++) {
		upCharacter++;
		alpha[i].setChar(upCharacter);
			alpha[i].speak();
	}
	return 0;
}

