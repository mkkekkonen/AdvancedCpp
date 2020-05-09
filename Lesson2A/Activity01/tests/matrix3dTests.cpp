#include "gtest/gtest.h"

#include "../matrix3d.hpp"

#define TEST 1

class Matrix3dTest : public ::testing::Test
{
};

#if TEST

TEST_F(Matrix3dTest, DefaultIdentity)
{
	Matrix3d matrix;

	ASSERT_EQ(matrix(0, 0), 1);
	ASSERT_EQ(matrix(1, 1), 1);
	ASSERT_EQ(matrix(2, 2), 1);
	ASSERT_EQ(matrix(3, 3), 1);

	ASSERT_EQ(matrix(1, 0), 0);
	ASSERT_EQ(matrix(2, 0), 0);
	ASSERT_EQ(matrix(3, 0), 0);

	ASSERT_EQ(matrix(0, 1), 0);
	ASSERT_EQ(matrix(0, 2), 0);
	ASSERT_EQ(matrix(0, 3), 0);
}

TEST_F(Matrix3dTest, SuppliedData)
{
	Matrix3d matrix{
		{1, 2, 3, 4},
		{5, 6, 7, 8},
		{9, 10, 11, 12},
		{13, 14, 15, 16}
	};

	ASSERT_EQ(matrix(0, 0), 1);
	ASSERT_EQ(matrix(0, 1), 2);
	ASSERT_EQ(matrix(0, 2), 3);
	ASSERT_EQ(matrix(0, 3), 4);

	ASSERT_EQ(matrix(1, 3), 8);
	ASSERT_EQ(matrix(2, 3), 12);
	ASSERT_EQ(matrix(3, 3), 16);
}

#endif
