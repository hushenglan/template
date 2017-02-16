/*
 * stack7decl.hpp
 *
 *  Created on: 2017年1月23日
 *      Author: blue
 */

#ifndef PRIMER_STACK7DECL_HPP_
#define PRIMER_STACK7DECL_HPP_

#include <deque>
#include <stdexcept>

template<typename T, template<typename ELEM, typename ALLOC = std::allocator<ELEM> > class CONT = std::deque >
class Stack7 {
private:
	CONT<T> elems;

public:
	void push(T const&);
	void pop();
	T top() const;
	bool empty() const {
		return elems.empty();
	}

	template<typename T2, template<typename ELEM2, typename ALLOC2 = std::allocator<ELEM2> > class CONT2>
	Stack7<T, CONT>& operator=(Stack7<T2, CONT2> const&);
};

template<typename T, template<typename ELEM, typename ALLOC> class CONT>
template<typename T2, template<typename ELEM2, typename ALLOC2 = std::allocator<ELEM2>> class CONT2>
Stack7<T, CONT>& Stack7<T, CONT>::operator =(Stack7<T2, CONT2> const& other) {
	if ((void*)this == (void*)&other) {
		return *this;
	}

	Stack7<T2, CONT2> tmp(other);
	while (!tmp.empty()) {
		elems.push_front(tmp.top());
		tmp.pop();
	}

	return *this;
}

template<typename T, template<typename, typename> class CONT>
void Stack7<T, CONT>::push(T const& elem) {
	elems.push_back(elem);
}

template<typename T, template<typename, typename> class CONT>
void Stack7<T, CONT>::pop() {
	if (elems.empty()) {
		throw std::out_of_range("empty stack");
	}

	elems.pop_back();
}

template<typename T, template<typename, typename> class CONT>
T Stack7<T, CONT>::top() const {
	if (elems.empty()) {
		throw std::out_of_range("empty stack");
	}

	return elems.back();
}


#endif /* PRIMER_STACK7DECL_HPP_ */
