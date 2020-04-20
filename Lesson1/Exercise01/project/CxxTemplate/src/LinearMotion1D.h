/*
 * LinearMotion1D.h
 *
 *  Created on: 20 Apr 2020
 *      Author: mkkek
 */

#ifndef SRC_LINEARMOTION1D_H_
#define SRC_LINEARMOTION1D_H_

class LinearMotion1D {
public:
	LinearMotion1D();
	LinearMotion1D(double position, double velocity);
	virtual ~LinearMotion1D();
	double position = 0;
	double velocity = 0;
	void advanceTimeBy(double dt);
};

#endif /* SRC_LINEARMOTION1D_H_ */
