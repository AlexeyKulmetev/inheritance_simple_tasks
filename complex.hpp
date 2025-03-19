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

	void setReal(const double _real) { real = _real; }

	void setImaginary(const double _imagenary) { imaginary = _imagenary; }

	void display() const {
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
	// FIX ME probably the friend Complex operator + func can be removed
	//friend Complex operator + (const Complex& first, const Complex& second);


private:
	double real;
	double imaginary;
};

class PolarComplex : private Complex {
public:
	PolarComplex(double _real, double _imaginary) : Complex(_real, _imaginary) {}

	void displayPolar() const {
		double r = calcMagnitude();
		double theta = calcAngle();
		std::cout << r << "(cos(" << theta << ") + i sin(" << theta << "))";
	}

	PolarComplex& operator *= (const PolarComplex& other) {
		setReal(calcMagnitude() * other.calcMagnitude());
		setImaginary(calcAngle() + other.calcAngle());
		return *this;
	}

	PolarComplex operator * (const PolarComplex& other) const {
		PolarComplex prod = *this;
		prod *= other;
		return prod;
	}
	// FIX ME probably the friend Complex operator + func can be removed
	//friend PolarComplex operator * (const PolarComplex& first, const PolarComplex& second);

private:
	// calculate magnitude for polar complex form
	double calcMagnitude() const {
		return sqrt((getReal() * getReal()) + (getImaginary() * getImaginary()));
	}

	// calculate angle for polar complex form 
	double calcAngle() const {
		return atan2(getImaginary(), getReal());
	}
};


//Complex operator + (const Complex& first, const Complex& second) { 
//	return Complex(first.real + second.real, first.imaginary + second.imaginary);
//}

//PolarComplex operator*(const PolarComplex& first, const PolarComplex& second)
//{
//	return PolarComplex(first.calcMagnitude() * second.calcMagnitude(), 
//		first.calcAngle() + first.calcAngle());
//}

#endif // !COMPLEX
