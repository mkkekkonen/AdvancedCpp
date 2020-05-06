///============================================================================
// Name        : point3d.cpp
// Author      : Brian Price
// Version     :
// Copyright   : Your copyright notice
// Description : Activity 1 Lesson 2
//============================================================================
#include "point3d.hpp"

Point3d::Point3d() {
	auto init_list = std::initializer_list<int>({0, 0, 0, 1});
	std::copy(init_list.begin(), init_list.end(), values);
}

Point3d::Point3d(int values[4]) {
	for (int i = 0; i < 4; i++) {
		this->values[i] = values[i];
	}
}

Point3d::~Point3d() {
}

int Point3d::operator()(int i) {
	return values[i];
}
