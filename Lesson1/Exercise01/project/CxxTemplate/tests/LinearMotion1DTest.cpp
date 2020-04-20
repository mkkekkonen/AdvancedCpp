/*
 * LinearMotion1DTest.cpp
 *
 *  Created on: 20 Apr 2020
 *      Author: mkkek
 */

#include "gtest/gtest.h"
#include "../src/LinearMotion1D.h"

namespace {
	class LinearMotion1DTest: public ::testing::Test {};

	TEST_F(LinearMotion1DTest, CanMoveRight) {
		LinearMotion1D* l1d = new LinearMotion1D(1, 2);
		l1d->advanceTimeBy(3);
		EXPECT_EQ(l1d->position, 7);
	}

	TEST_F(LinearMotion1DTest, CanMoveLeft) {
		LinearMotion1D* l1d = new LinearMotion1D(2.5, 1);
		l1d->advanceTimeBy(-3);
		EXPECT_EQ(l1d->position, -0.5);
	}
}
