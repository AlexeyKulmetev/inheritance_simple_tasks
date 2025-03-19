#ifndef MATRIX
#define MATRIX

#include <iostream>
#include <initializer_list>
#include <stdexcept>

const int MATRIX_SIZE = 2;

class Matrix {
public:
	Matrix() = default;
	Matrix(const std::initializer_list<int> values) {
		if (values.size() != 4) {
			throw std::out_of_range("4 elements expected");
		}
		auto it = values.begin();
		matrix[0][0] = *it++; matrix[0][1] = *it++;
		matrix[1][0] = *it++; matrix[1][1] = *it;
	}

	void display() const {
		for (int i = 0; i < MATRIX_SIZE; ++i) {
			for (int j = 0; j < MATRIX_SIZE; ++j) {
				std::cout << " " << matrix[i][j];
			}
			std::cout << std::endl;
		}
	}

	Matrix& operator += (const Matrix& other) {
		for (int i = 0; i < MATRIX_SIZE; ++i) {
			for (int j = 0; j < MATRIX_SIZE; ++j) {
				matrix[i][j] += other.matrix[i][j];
			}
		}
		return *this;
	}

	Matrix operator + (const Matrix& other) const {
		Matrix sum = *this;
		sum += other;
		return sum;
	}

protected:
	int matrix[2][2];

};

class SquareMatrix : protected Matrix {
public:
	using Matrix::Matrix; // Which constructor exactly will be called?

	void transpose() {
		int temp = matrix[0][1];
		matrix[0][1] = matrix[1][0];
		matrix[1][0] = temp;
	}

	SquareMatrix& operator *= (const SquareMatrix& other) {
		for (int i = 0; i < MATRIX_SIZE; ++i) {
			for (int j = 0; j < MATRIX_SIZE; ++j) {
				matrix[i][j] *= other.matrix[i][j];
			}
		}
	}

	SquareMatrix operator * (const SquareMatrix& other) const {
		SquareMatrix prod = *this;
		prod *= other;
		return prod;
	}

	using Matrix::display;

};


#endif // !MATRIX
