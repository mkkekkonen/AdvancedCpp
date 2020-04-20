/*
 * LinearMotion1D.cpp
 *
 *  Created on: 20 Apr 2020
 *      Author: mkkek
 */

#include "LinearMotion1D.h"

LinearMotion1D::LinearMotion1D() {
	// TODO Auto-generated constructor stub

}

LinearMotion1D::LinearMotion1D(double position, double velocity) {
	this->position = position;
	this->velocity = velocity;
}

LinearMotion1D::~LinearMotion1D() {
	// TODO Auto-generated destructor stub
}

void LinearMotion1D::advanceTimeBy(double dt) {
	this->position = this->position + this->velocity * dt;
}
