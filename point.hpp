#ifndef POINT
#define POINT

#include <iostream>

class Point2D {
public:
	Point2D(int _x, int _y) : x(_x), y(_y) {}

	int getX() const { return x; }
	int getY() const { return y; }

	void display() const {
		std::cout << "(" << x << ", " << y << ")";
	}
	Point2D& operator += (const Point2D& other) {
		x += other.x;
		y += other.y;
		return *this;
	}

	Point2D operator + (const Point2D& other) const {
		Point2D sum = *this;
		sum += other;
		return sum;
	}

private:
	int x; int y;
};


class Point3D : public Point2D {
public:
	Point3D(int _x, int _y, int _z) : Point2D(_x, _y), z(_z) {}

	void display() const { 
		std::cout << "(" << getX() << ", " << getY() << ", " << z << ")";
	}

	Point3D& operator += (const Point3D& other) {
		Point2D::operator+= (other);
		z += other.z;
		return *this;
	}

	Point3D operator + (const Point3D& other) const {
		Point3D sum = *this;
		sum += other;
		return sum;
	}

private:
	int z;
};



#endif