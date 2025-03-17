#ifndef COUNTER
#define COUNTER

#include<iostream>

class Counter {
public:
	Counter() : count(0) {}

	Counter(int _count) : count(_count) {}

	void setCount(const int value) {
		count = value;
	}

	int getCount() const { return count; }

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

class Timer : public Counter {
public:
	Timer() : Counter() {}

	Timer(int _count) : Counter(_count) {}

	void reset() { setCount(0); }

	// FIX ME how to make this method const
	void display() {
		std::cout << "Time: " << getCount();
	}

	Timer& operator ++ () {
		Counter::operator++();
		return *this;
	}

	Timer operator ++ (int) {
		Timer tmp = *this;
		Counter::operator++();
		return tmp;
	}
};

#endif // !COUNTER
