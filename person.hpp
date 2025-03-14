#ifndef PERSON
#define PERSON

#include <iostream>

class Person {
public:
	void introduce() {
		std::cout << "I am a person";
	}
protected:
	void think() {
		std::cout << "I am thinking";
	}
private:
	void secret() {
		std::cout << "This is a secret";
	}
};

class Student : private Person {
public:
	void study() {
		think();
	}
};

//class CollageStudent : public Student {
//public:
//	void attendLecture() {
//		think();
//	}
//};

//class GraduateStudent : public Student {
//public:
//	void graduate() {
//		introduce(); // unaccessible;
//	}
//};

#endif // !PERSON
