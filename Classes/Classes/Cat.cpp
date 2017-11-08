#include "stdafx.h"

#include<iostream>
using namespace std;

#include "Cat.h"

//--Common way of organising code
// it is common to put all your method in 1 file, then call them as prototypes in header file, then include 
// the header whenever you want to call these methods easily . 
	
   //CLASSNAME::methodname // functions in a  class are known as methods
void Cat::speak() { // these methods belongs to Cat class // once the methods are in a class, use must use CLASSNAME::methodname to declare method outside class
	cout << "Meow!!" << endl;
}

void Cat::jump() {
	cout << "Jumping to top of bookcase" << endl;
}