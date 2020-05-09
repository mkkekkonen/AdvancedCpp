///============================================================================
// Name        : point3d.cpp
// Author      : Brian Price
// Version     :
// Copyright   : Your copyright notice
// Description : Activity 1 Lesson 2
//============================================================================
#include "point3d.hpp"

Point3d::Point3d() {
}

Point3d::Point3d(int x, int y, int z, int w=1) {
	this->x = x;
	this->y = y;
	this->z = z;
	this->w = w;
}

Point3d::~Point3d() {
}

int Point3d::operator()(int i) {
	switch (i) {
		case 0:
			return x;
		case 1:
			return y;
		case 2:
			return z;
		case 3:
			return w;
		default:
			throw "Index out of range";
	}
}
