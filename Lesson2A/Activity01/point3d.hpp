//============================================================================
// Name        : point3d.hpp
// Author      : Brian Price
// Version     :
// Copyright   : Your copyright notice
// Description : Activity 1 Lesson 2
//============================================================================
#pragma once

#include <initializer_list>
#include <algorithm>

class Point3d
{
public:
	Point3d();
	Point3d(int values[4]);
	virtual ~Point3d();
	int operator()(int i);
private:
	int values[4];
};



