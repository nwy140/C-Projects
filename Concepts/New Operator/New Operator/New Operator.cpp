// Copy Constructors.cpp : Defines the entry point for the console application.
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



int main()
{
	
	Animal *pCat1=new Animal()	;  //new operator allocates memory explicitly so that its memory that you actually managed yourself
	//(*pCat1).setname("Freddy"); // this won't work because . has more priority than *, so you need to place round brackets around dereferenced pointer value, or else compiler will misread your code
	//(*pCat1).speak();
	
	pCat1->setname("Freddy"); // this is used to call methods of *objects allocated with new class
	pCat1->speak();		//destructor is not called
						//when you allocate memory with new , you must remember to destroy the object
	delete pCat1; // destroy object to call destructor and save memory , always call delete if you instantiate object pointer with new
						// if you don't delete object ,you will cause memory leak // if you delete a pointer that isn't set to point to anything, your program will crash
					// if you subtract a pointer with another pointer, you will get a long 
	cout << sizeof(pCat1) << endl; // you might get 8 bytes depending on your plaftform. 4 bytes on visual C++


	cout << "===============================" << endl;

	Animal *pDog= new Animal();

	pDog->setname("GoofyDog");
	pDog->speak();

	delete pDog;













	return 0;
}

