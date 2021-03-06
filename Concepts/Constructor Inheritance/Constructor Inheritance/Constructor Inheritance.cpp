// Constructor Inheritance.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

using namespace std;

class Machine {
private:
	int id;
public:
	Machine() :id(0) { cout << "Machine no arguement constructor called." << endl; };
	Machine(int id) :id(id) { cout << "Machine parameterised constructor called." << endl; };
	void info() { cout << "ID: " << id << endl; };
};
class Vehicle : public Machine {
public:
	Vehicle() { cout << "Vehicle  no arguement constructor called." << endl; };
	Vehicle(int id) :Machine(id) { cout << "Vehicle parameterised constructor called." << endl; };
	// In Vehicle sub class, we can't refer to ID at all, it is private to Machine super class only
	// We can output id using a method from super class ,but we can't do it with new methods in sub class
};

class Car :public Vehicle { //Car is now a subclass of machine, and an indirect subclass of Machine
public:
	Car() { cout << "Car no arguement constructor called." << endl; };
	Car(int id) :Vehicle(id) { cout << "Car parameterised constructor called."<<endl; };// we can also specify car constructor to call Vehicle constructor to get the id

	//Car(int id) :Machine(id) { cout << "Car parameterised constructor called." << endl; };		
			// we can only call 1 super class above a subclass , we can't call 2 or more super class above a subclass in subclass
			
};


int main()
{
	Machine machine(123);  // you can initialise id private variable by passing value to constructor parameter and using initialization list
	machine.info();			//but you can't do it with subclasses because they can't access the private variable from super class
								// To solve this, you can specify subclass constructor to pass id to  superclass constructor 's parameter using initialization list
	Vehicle vehicle(2001);
	vehicle.info();


	//Vehicle vehicle; // c++ will call super class before it calls sub class when instatiating objects
	//					// so you will see both constructors of super class and sub class		
	//vehicle.info();



	Car car(2010);  // constructor of all super classes will be called together with current class constructor
	car.info();
	return 0;
}

