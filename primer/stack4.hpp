/*
 * stack4.hpp
 *
 *  Created on: 2017年1月9日
 *      Author: blue
 */

#ifndef PRIMER_STACK4_HPP_
#define PRIMER_STACK4_HPP_


#include <stdexcept>

template<typename T = std::string, int MAXSIZE = 20>
class Stack4 {
private:
	T elems[MAXSIZE];
	int numElems;

public:
	Stack4();
	void push(T const&);
	void pop();
	T top() const;

	bool empty() const {
		return numElems == 0;
	}

	bool full() const {
		return numElems == MAXSIZE;
	}
};

template<typename T, int MAXSIZE>
Stack4<T, MAXSIZE>::Stack4() : numElems(0) {
}

template<typename T, int MAXSIZE>
void Stack4<T, MAXSIZE>::push(T const& elem) {
	if (numElems >= MAXSIZE) {
		throw std::out_of_range("stack is full");
	}

	elems[numElems++] = elem;
}

template<typename T, int MAXSIZE>
void Stack4<T, MAXSIZE>::pop() {
	if (numElems <= 0) {
		throw std::out_of_range("stack is empty");
	}

	numElems--;
}

template<typename T, int MAXSIZE>
T Stack4<T, MAXSIZE>::top() const {
	if (numElems <= 0) {
		throw std::out_of_range("stack is empty");
	}

	return elems[numElems - 1];
}

#endif /* PRIMER_STACK4_HPP_ */
