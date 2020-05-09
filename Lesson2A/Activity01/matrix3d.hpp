/*
 * matrix3d.h
 *
 *  Created on: 24 Apr 2020
 *      Author: mkkek
 */

#ifndef ACTIVITY01_MATRIX3D_HPP_
#define ACTIVITY01_MATRIX3D_HPP_

#include <initializer_list>

class Matrix3d {
public:
	Matrix3d();
	Matrix3d(std::initializer_list<std::initializer_list<int>> lst);
	virtual ~Matrix3d();

	int operator()(int row, int col);
	Matrix3d& operator*=(const Matrix3d& rhs);
	bool operator==(const Matrix3d& rhs);
private:
	int matrix[4][4];
};

#endif /* ACTIVITY01_MATRIX3D_HPP_ */
