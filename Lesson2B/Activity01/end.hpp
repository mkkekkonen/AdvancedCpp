/*
 * end.hpp
 *
 *  Created on: 19 May 2020
 *      Author: mkkek
 */

#ifndef ACTIVITY01_END_HPP_
#define ACTIVITY01_END_HPP_

template<typename T>
class HasEnd {
private:
	typedef char YesType[1];
	typedef char NoType[2];

	template <typename C> static YesType& test(decltype(&C::end));
	template <typename C> static NoType& test(...);

public:
	enum { value = sizeof(test<T>(0)) == sizeof(YesType) };
};



#endif /* ACTIVITY01_END_HPP_ */
