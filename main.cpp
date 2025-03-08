#include <iostream>


class Base {
protected:
	int a = 0;
public:
	void f() {
		std::cout << "Base\n";
	}
};

class Derived : private Base {
public:
	friend int main();
	int b = 1;
	void g() {
		std::cout << "Derived\n" << a;
	}
};

int main() {
	Derived d;
	std::cout << d.a;
}