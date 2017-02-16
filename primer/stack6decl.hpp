/*
 * stack6decl.hpp
 *
 *  Created on: 2017年1月20日
 *      Author: blue
 */

#ifndef PRIMER_STACK6DECL_HPP_
#define PRIMER_STACK6DECL_HPP_

#include <deque>
#include <stdexcept>

template<typename T, typename CONT = std::deque<T> >
class Stack6 {
private:
	CONT elems;

public:
	void push(T const&);
	void pop();
	T top() const;
	bool empty() const {
		return elems.empty();
	}

	template<typename T2, typename CONT2>
	Stack6<T, CONT>& operator=(Stack6<T2, CONT2> const&);
};

template<typename T, typename CONT>
void Stack6<T, CONT>::push(T const& elem) {
	elems.push_back(elem);
}

template<typename T, typename CONT>
void Stack6<T, CONT>::pop() {
	if (elems.empty()) {
		throw std::out_of_range("stack empty");
	}

	elems.pop_back();
}

template<typename T, typename CONT>
T Stack6<T, CONT>::top() const {
	if (elems.empty()) {
		throw std::out_of_range("stack empty");
	}

	return elems.back();
}

template<typename T, typename CONT>
template<typename T2, typename CONT2>
Stack6<T, CONT>& Stack6<T, CONT>::operator =(Stack6<T2, CONT2> const& stack_2) {
	if ((void*)this == (void*)&stack_2) {
		return *this;
	}

	Stack6<T2, CONT2> tmp(stack_2);

	elems.clear();
	while (!tmp.empty()) {
		elems.push_front(tmp.top());
		tmp.pop();
	}

	return *this;
}


#endif /* PRIMER_STACK6DECL_HPP_ */
