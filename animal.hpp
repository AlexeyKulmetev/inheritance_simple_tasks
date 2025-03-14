#ifndef ANIMAL
#define ANIMAL

#include <iostream>

class Animal {
public:
	void eat() {
		std::cout << "Animail is eating";
	}
protected:
	void sleep() {
		std::cout << "Animal is sleaping";
	}
private:
	void breathe() {
		std::cout << "Animal is breathing";
	}
	friend int main();
};

class Dog : private Animal {
public:
	void bark() {
		std::cout << "Dog is barking";
	}
	//friend int main();
private:
	void run() {
		std::cout << "Dog is running";
	}
};



#endif // !ANIMAL