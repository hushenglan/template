/*
 * mysecond.hpp
 *
 *  Created on: 2017年1月31日
 *      Author: blue
 */

#ifndef PRIMER_MYSECONDSTACK_HPP_
#define PRIMER_MYSECONDSTACK_HPP_


#include <vector>

template<typename T>
class MySecondStack {
private:
	std::vector<T> elems;

public:
	MySecondStack();
	void push(T const&);
	void pop();
	T top() const;
};


#endif /* PRIMER_MYSECONDSTACK_HPP_ */
