//============================================================================
// Name        : Stack.hpp
// Author      : Brian Price
// Version     :
// Copyright   : Your copyright notice
// Description : Exercise 4 Lesson 3
//============================================================================
#pragma once
#include <vector>
#include <cstddef>

#define EXERCISE4_STEP      20

namespace acpp
{

template <typename T>
class Stack
{
public:
	using value_type = T;
	using reference = value_type&;
	using const_reference = const value_type&;
	using size_type = std::size_t;
	bool empty() const {
		return m_stack.empty();
	}
	void push(const value_type& value) {
		m_stack.push_back(value);
	}
	size_type size() const {
		return m_stack.size();
	}
	void pop() {
		m_stack.pop_back();
	}
	reference top() {
		m_stack.back();
	}
	const_reference top() const {
		m_stack.back();
	}

private:
    std::vector<T> m_stack;
};

} // namespace acpp
