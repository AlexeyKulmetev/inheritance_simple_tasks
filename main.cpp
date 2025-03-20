#include "animal.hpp"
#include "person.hpp"
#include "point.hpp"
#include "counter.hpp"
#include "complex.hpp"
#include "matrix.hpp"

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
	
	//Point2D p1(4, 6);
	//p1.display();
	//std::cout << "\n";
	//Point2D p2(2, 1);
	//p2.display();
	//std::cout << "\n";
	//p2 += p1;
	//p2.display();
	//std::cout << "\n";

	//Point3D p3(2, 5, 1);
	//p3.display();
	//std::cout << "\n";
	//Point3D p4(3, 2, 4);
	//p4.display();
	//std::cout << "\n";
	//p3 += p4;
	//p3.display();

	//Counter counter(0);
	//counter.display();
	//counter++;
	//counter.display();
	//++counter;
	//counter.display();
	//std::cout << "\n";
	//Timer timer;
	//timer++;
	//timer.display();
	//++timer;
	//timer.display();

	//Complex c1;
	//c1.display();
	//std::cout << "\n";
	//Complex c2(3.0, 2.74);
	//c2.display();
	//std::cout << "\n";
	//c1 += c2;
	//c1.display();
	//std::cout << "\n";
	//Complex c3 = c1 + c2;
	//c3.display();
	//std::cout << "\n";
	//PolarComplex pC1(2.6, 6.8);
	//pC1.displayPolar();
	//std::cout << "\n";
	//PolarComplex pC2(1.3, 2.5);
	//pC2.displayPolar();
	//std::cout << "\n";
	//PolarComplex pC3 = pC1 * pC2;
	//pC3.displayPolar();


	Matrix m1{ 1, 2, 3, 4 };
	m1.display();
	std::cout << "\n";
	Matrix m2{ 2, 2, 2, 2 };
	m2.display();
	std::cout << "\n";
	Matrix m3 = m1 + m2;
	m3.display();
	std::cout << "\n";
	Matrix m4;
	m4 += m1;
	m4.display();
	std::cout << "\n";
	SquareMatrix sM1{ 2, 2, 2, 2 };
	sM1.display();
	std::cout << "\n";
	SquareMatrix sM2{ 4, 3, 2, 1 };
	sM2.display();
	std::cout << "\n";
	sM2 *= sM1;
	sM2.display();
	std::cout << "\n";
	SquareMatrix sM3 = sM2 * sM1;
	sM3.display();

	return 0;
}