#ifndef COMPLEX
#define COMPLEX

#include <iostream>

class Complex {
public:
	Complex() : real(0.0), imaginary(0.0) {}

	Complex(double _real, double _imaginary) : real(_real), imaginary(_imaginary) {}

	void displa() const {
		std::cout << real << " + " << imaginary;
	}

	Complex& operator += (const Complex& other) {
		real += other.real;
		imaginary += other.imaginary;
		return *this;
	}

	Complex operator + (const Complex& other) const {
		Complex sum = *this;
		sum += other;
		return sum;
	}


private:
	double real;
	double imaginary;
};

#endif // !1
