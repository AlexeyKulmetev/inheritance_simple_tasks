#ifndef RECTANGLE
#define RECTANGLE

#include <iostream>

class Rectangle {
public:
	Rectangle(int _length, int _width) : length(_length), width(_width) {}
	
	Rectangle() = default;

	//int getLength() const  { return length; }

	//int getWidth() const { return width; }

	void display() const {
		std::cout << length * width;
	}

	Rectangle& operator *= (Rectangle& other) {
		length *= other.length;
		width *= other.width;
		return *this;
	}

	Rectangle operator * (Rectangle& other) const {
		Rectangle prod = *this;
		prod *= other;
		return prod;
	}

protected:
	int length;
	int width;
};


class Cuboid : protected Rectangle {
public:
	Cuboid(int _length, int _width, int _height) : Rectangle(_length, _width), 
		height(_height) {}

	void display() const {
		std::cout << length * width * height;
	}

	Cuboid& operator *= (Cuboid& other) {
		Rectangle::operator*=(other);
		height *= other.height;
		return *this;
	}

	Cuboid operator * (Cuboid& other) const {
		Cuboid prod = *this;
		prod *= other;
		return prod;
	}
private:
	int height;
};

#endif // !RECTANGLE
