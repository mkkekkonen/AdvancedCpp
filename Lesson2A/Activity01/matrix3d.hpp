/*
 * matrix3d.h
 *
 *  Created on: 24 Apr 2020
 *      Author: mkkek
 */

#ifndef ACTIVITY01_MATRIX3D_HPP_
#define ACTIVITY01_MATRIX3D_HPP_

class Matrix3d {
public:
	Matrix3d();
	Matrix3d(int matrix[4][4]);
	virtual ~Matrix3d();
	int operator()(int row, int col);
private:
	int matrix[4][4];
};

#endif /* ACTIVITY01_MATRIX3D_HPP_ */
