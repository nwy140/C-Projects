// Copy Constructors.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <string>

using namespace std;
// there are 2 areas in a memory
	// stack and heap
	// stack is where  memory associated with variables are put on top of each others, and also address of memory to be called on the stack
		// if you call a function over and over again too many times, you can end up with a stackoverflow by exceeding the amount of memory you got int the stack
	// heap is basically all the memory available to your computer
		// when you do new ,  you are actually allocating memory on the heap


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

Animal *instatiateObject() {
	Animal *object = new Animal();
	object->setname("Marcus");
	return object;

}
	//remember , new makes it easier to manage memory, as object will be destroyed when it reaches }, you have to manually call delete 
Animal *createAnimal() { 
	Animal *pAnimal = new Animal(); // use a pointer rather than instatiating an object because object will be destroyed at the end of function
	pAnimal->setname("Barnie");
	return pAnimal; //when you return an object , c++ will normally create a temporary object just to return that object
						// since this points to a new Animal Object,  it returns the pointer and copied only about 8 bytes rather than the entire object,
							// returning pointer of an object is more efficient than returning the object itself as the object has a larger size
}



int main()
{
	Animal *pFrog =createAnimal(); // instantiating object frog will copy returned temporary object from function // another copy will occur
									// this can be inefficient if compiler is not optimized for this	
	pFrog->speak();
			
	delete pFrog;

	cout << "========================" << endl;
	Animal *Dog = instatiateObject();
	Dog->speak();
	delete Dog;



	return 0;
}
