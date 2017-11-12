#pragma once
#include <iostream>;

#include <string>
using namespace std;



namespace sws{ // namespaces are used to differentiate calling methods and attributes from different classes of the same name
	const string CAtNAME = "Freddy";
	
	class Cat	
	{
	public:
		Cat();
		~Cat();
		void speak();
	};
}

