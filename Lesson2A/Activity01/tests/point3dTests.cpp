//============================================================================
// Name        : point3dtest.cpp
// Author      : Brian Price
// Version     :
// Copyright   : Your copyright notice
// Description : Activity 1 Lesson 2
//============================================================================
#include "gtest/gtest.h"
#include "../point3d.hpp"

class Point3dTest : public ::testing::Test
{
public:
};

TEST_F(Point3dTest, DefaultConstructor)
{
    Point3d point3d;

    ASSERT_EQ(point3d(0), 0);
    ASSERT_EQ(point3d(1), 0);
    ASSERT_EQ(point3d(2), 0);
    ASSERT_EQ(point3d(3), 1);
}

TEST_F(Point3dTest, SuppliedData)
{
	Point3d point3d{1, 2, 3, 4};

    ASSERT_EQ(point3d(0), 1);
    ASSERT_EQ(point3d(1), 2);
    ASSERT_EQ(point3d(2), 3);
    ASSERT_EQ(point3d(3), 4);
}
