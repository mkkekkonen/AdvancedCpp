/*
 * SumFuncTest.cpp
 *
 *  Created on: 20 Apr 2020
 *      Author: mkkek
 */

#include "gtest/gtest.h"
#include "../src/SumFunc.h"

namespace {
	class SumFuncTest: public ::testing::Test {};

	TEST_F(SumFuncTest, CanSumCorrectly) {
		SumFunc sumFunc;
		EXPECT_EQ(sumFunc.sum(3, 4), 7);
	}

	TEST_F(SumFuncTest, CanUseNegativeValues) {
		SumFunc sumFunc;
		EXPECT_EQ(sumFunc.sum(3, -3), 0);
	}
}
