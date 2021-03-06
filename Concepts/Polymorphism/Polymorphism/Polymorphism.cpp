// Polymorphism.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include<iostream>

using namespace std;

class Animal {
public:
	virtual void speak() = 0; // this means that any subclass must have implementation of this method // this is called pure virtual method
								
		/*{ cout << "?????????" << endl; };*/
	virtual ~Animal() {}; // destructor should be virtual to	easily clean up memory from specific subclass
							// to make sure current class destructor will be called

};

class Cat:public Animal{
public:
	void speak() { cout << "RRRrrrrRRRR" << endl; };

	virtual ~Cat() {};
};

class HouseCat :public Animal {
public:
	void speak() { cout << "Meeouw" << endl; };
	virtual ~HouseCat() {};
};

int main()
{
	Animal *pAnimal = new HouseCat(); //polymorphism, you can use a derive class where a super class is expected
	pAnimal->speak();				// make superclass speak method virtual to  allow subclass overriding superclass method	
										//virtual creates a v table that lets compiler look up the right specific method from the right subclass/

	delete pAnimal;	




    return 0;
}

