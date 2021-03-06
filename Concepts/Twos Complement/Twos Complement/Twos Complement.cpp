// Twos Complement.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>



using namespace std;

int main()
{
char value = 127;

	cout << (int)value << endl;

	value++;
	
	cout << (int)value << endl;
	char value = 127; // when you put the maximum value or above in a primitive type, c++ compiler won't warn you
	cout << (int)value << endl;

	value++;

	cout << (int)value << endl;


 
	return 0;
}

/*
  3 - bit system :
111 = 7 = (2 to the power of 3) - 1 = (2x2x2) - 1 = 7
11111111 = (2 pow 8) - 1 = 255

000 = 0
001 = 1
010 = 2
011 = 3
100 = -0
101 = -1
110 = -2
111 = -3

001 (1) +
101 (-1) =
110 (-2) wrong answer!

One’s Complement
000 = 0
001 = 1
010 = 2
011 = 3
100 = -3
101 = -2
110 = -1
111 = -0

001 (1) +
110 (-1) =
111 (-0 = 0) right answer

0011 (3) +
0101 (-2) =
1000
add overflow bit to right : 000 + 1 = 001
001 (right answer)

Two’s Complement
000 = 0
001 = 1
010 = 2
011 = 3
100 = -4
101 = -3
110 = -2
111 = -1

0010 (2) +
0110 (-2) =
1000->discard overflow bit -> 000 (right answer!)

010 (2) +
101 (-3)
111 (-1) (right answer)
*/








