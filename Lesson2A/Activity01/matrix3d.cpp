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

Matrix3d::Matrix3d(int matrix[4][4]) {
	for (int row = 0; row < 4; row++) {
		for (int col = 0; col < 4; col++) {
			this->matrix[row][col] = matrix[row][col];
		}
	}
}

Matrix3d::~Matrix3d() {
	// TODO Auto-generated destructor stub
}

int Matrix3d::operator()(int row, int col) {
	return matrix[row][col];
}
