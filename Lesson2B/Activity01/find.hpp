/*
 * find.hpp
 *
 *  Created on: 19 May 2020
 *      Author: mkkek
 */

#ifndef ACTIVITY01_FIND_HPP_
#define ACTIVITY01_FIND_HPP_

template<typename T>
class HasFind {
private:
	typedef char YesType[1];
	typedef char NoType[2];

	template <typename C> static YesType& test(decltype(&C::find));
	template <typename C> static NoType& test(...);

public:
	enum { value = sizeof(test<T>(0)) == sizeof(YesType) };
};

#endif /* ACTIVITY01_FIND_HPP_ */
