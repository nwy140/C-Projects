
#ifndef CAT_H_	 
#define CAT_H_

class Cat { //classes are like seperate programs where their code can easily be accessed and called from other programs
public: //public makes methods accesible outside purely of the class
		// to call methods from a class in a cpp file, CLASSNAME::methodname
	//moving method prototypes to class
	void speak(); // if you just call this in the header, and then include this header in any cpp file,
				  // you can easily call this method, as it will automatically look for where the method is defined beore calling it
	void jump();
};




#endif // !CAT_H_
