#pragma once
#include <iostream>;
#include <string.h>
using namespace std;

namespace cats {
	const string CATNAME = "Tails";
	class Cat
	{
	public:
		Cat();
		~Cat();
		void speak();
	};

}
