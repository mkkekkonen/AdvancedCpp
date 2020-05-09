/*
 * matrix3d.cpp
 *
 *  Created on: 24 Apr 2020
 *      Author: mkkek
 */

#include "matrix3d.hpp"

Matrix3d::Matrix3d() {
	int identityMatrix[4][4] = {
			{1, 0, 0, 0},
			{0, 1, 0, 0},
			{0, 0, 1, 0},
			{0, 0, 0, 1}
	};
	for (int row = 0; row < 4; row++) {
		for (int col = 0; col < 4; col++) {
			matrix[row][col] = identityMatrix[row][col];
		}
	}
}

Matrix3d::Matrix3d(std::initializer_list<std::initializer_list<int>> lst) {
	for (int row = 0; row < 4; row++) {
		for (int col = 0; col < 4; col++) {
			this->matrix[row][col] = lst.begin()[row].begin()[col];
		}
	}
}

Matrix3d::~Matrix3d() {
	// TODO Auto-generated destructor stub
}

int Matrix3d::operator()(int row, int col) {
	return matrix[row][col];
}

// TESTAA
Matrix3d& Matrix3d::operator*=(const Matrix3d& rhs) {
	int tmp[4][4];

	for (int rowI = 0; rowI < 4; rowI++) {
		for (int colJ = 0; colJ < 4; colJ++) {
			tmp[rowI][colJ] = matrix[rowI][1] * rhs(1, colJ)
					+ matrix[rowI][2] * rhs(2, colJ)
					+ matrix[rowI][3] * rhs(3, colJ);
		}
	}

	matrix = tmp;
	return *this;
}

bool Matrix3d::operator==(const Matrix3d& rhs) {
	for (int row = 0; row < 4; row++) {
		for (int col = 0; col < 4; col++) {
			if (matrix[row][col] != rhs(row, col)) {
				return false;
			}
		}
	}
	return true;
}
