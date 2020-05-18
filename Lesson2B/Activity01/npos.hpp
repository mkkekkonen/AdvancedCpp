/*
 * npos.hpp
 *
 *  Created on: 11 May 2020
 *      Author: mkkek
 */

#ifndef ACTIVITY01_NPOS_HPP_
#define ACTIVITY01_NPOS_HPP_

template<typename T>
class HasNpos {
private:
	typedef char YesType[1];
	typedef char NoType[2];

	template <typename C> static YesType& test(decltype(&C::npos));
	template <typename C> static NoType& test(...);

public:
	enum { value = sizeof(test<T>(0)) == sizeof(YesType) };
};

#endif /* ACTIVITY01_NPOS_HPP_ */
