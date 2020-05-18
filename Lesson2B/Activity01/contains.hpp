//============================================================================
// Name        : contains.hpp
// Author      : Brian Price
// Version     :
// Copyright   : Your copyright notice
// Description : Activity 1 Lesson 3
//============================================================================
#pragma once
#include <type_traits>
#include <string>
#include <set>
#include <vector>
#include <algorithm>

#include "end.hpp"
#include "npos.hpp"
#include "find.hpp"

template<typename T, typename C> bool contains(T x, C y) {
//	if constexpr (std::enable_if_t<HasEnd<T>::value, false>) {
//		throw "Type has no \"end\" member";
//	}
//
//	if constexpr (std::enable_if_t<HasNpos<T>::value, true>) {
//		if (x.find(y) != std::string::npos) {
//			return true;
//		}
//		return false;
//	} else if constexpr (std::enable_if_t<HasFind<T>::value, true>) {
//		return x.find(y);
//	} else {
//		return false;
//	}
}
