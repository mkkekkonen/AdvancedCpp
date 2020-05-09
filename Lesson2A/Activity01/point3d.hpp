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
	Point3d(int x, int y, int z, int w);
	virtual ~Point3d();
	int operator()(int i);
private:
	int x = 0;
	int y = 0;
	int z = 0;
	int w = 1;
};



