#include "animal.hpp"
#include "person.hpp"
#include "point.hpp"


int main() {

	//Dog dog;
	//dog.eat();
	//dog.sleep();
	//dog.bark();

	//Student student;
	// student.introduce();
	//student.study();

	//CollageStudent collageStudent;
	//collageStudent.attendLecture();
	
	Point2D p1(4, 6);
	p1.display();
	std::cout << "\n";
	Point2D p2(2, 1);
	p2.display();
	std::cout << "\n";
	p2 += p1;
	p2.display();
	std::cout << "\n";

	Point3D p3(2, 5, 1);
	p3.display();
	std::cout << "\n";
	Point3D p4(3, 2, 4);
	p4.display();
	std::cout << "\n";
	p3 += p4;
	p3.display();

	return 0;
}