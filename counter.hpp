#ifndef COUNTER
#define COUNTER

#include<iostream>

class Counter {
public:
	Counter() = default;

	Counter(int _count) : count(_count) {}

	void setCount(const int value) {
		count = value;
	}

	int getCount() { return count; }

	void display() const {
		std::cout << count;
	}

	Counter& operator ++ () {
		++count;
		return *this;
	}

	Counter operator ++ (int) {
		Counter copy = *this;
		++*this;
		return copy;
	}

private:
	int count;
};

class Timer : private Counter {
public:
	Timer() = default;

	Timer(int _count) : Counter(_count) {}

	void reset() { setCount(0); }

	void display() {
		std::cout << "Time: " << getCount();
	}
};

#endif // !COUNTER
