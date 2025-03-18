#ifndef COMPLEX
#define COMPLEX

#include <iostream>
#include <cmath>

class Complex {
public:
	Complex() : real(0.0), imaginary(0.0) {}

	Complex(double _real, double _imaginary) : real(_real), imaginary(_imaginary) {}

	double getReal() const { return real; }

	double getImaginary() const { return imaginary; }

	void displa() const {
		std::cout << real << " + " << imaginary << "i";
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

	friend Complex operator + (const Complex& first, const Complex& second) const; // FIX ME


private:
	double real;
	double imaginary;
};

class PolarComplex : private Complex {
public:
	PolarComplex(double _real, double _imaginary) : Complex(_real, _imaginary) {}

	void displayPoar() const {
		double r = sqrt(pow(getReal(), 2) + pow(getImaginary(), 2));
		double theta = atan2(getImaginary(), getReal());
		std::cout << getReal() << "(cos(" << theta << ") + i sin(" << theta << "))";
	}
};

// FIX ME
Complex operator + (const Complex& first, const Complex& second) const { 
	return Complex(first.real + second.real, first.imaginary + second.imaginary);
}

#endif // !1
