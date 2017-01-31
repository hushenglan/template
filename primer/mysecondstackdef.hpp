/*
 * myseconddef.hpp
 *
 *  Created on: 2017年1月31日
 *      Author: blue
 */

#ifndef PRIMER_MYSECONDSTACKDEF_HPP_
#define PRIMER_MYSECONDSTACKDEF_HPP_


#include "mysecondstack.hpp"
#include <stdexcept>

template<typename T>
MySecondStack<T>::MySecondStack() {
}

template<typename T>
void MySecondStack<T>::push(T const& elem) {
	elems.push_back(elem);
}

template<typename T>
void MySecondStack<T>::pop() {
	if (elems.empty()) {
		throw std::out_of_range("empty elems");
	}

	return elems.pop_back();
}

template<typename T>
T MySecondStack<T>::top() const {
	if (elems.empty()) {
		throw std::out_of_range("empty elems");
	}

	return elems.back();
}


#endif /* PRIMER_MYSECONDSTACKDEF_HPP_ */
