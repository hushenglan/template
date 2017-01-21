/*
 * stack3.hpp
 *
 *  Created on: 2017年1月9日
 *      Author: blue
 */

#ifndef PRIMER_STACK3_HPP_
#define PRIMER_STACK3_HPP_


#include <vector>
#include <stdexcept>

template<typename T, typename CONT = std::vector<T> >
class Stack3 {
private:
	CONT elems;

public:
	void push(T const& elem);
	void pop();
	T top() const;

	bool empty() const {
		return elems.empty();
	}
};


/*
 * 需要指定的容器类型具有push_back、pop_back、back等操作
 */


template<typename T, typename CONT>
void Stack3<T, CONT>::push(T const& elem) {
	elems.push_back(elem);
}

template<typename T, typename CONT>
void Stack3<T, CONT>::pop() {
	if (elems.empty()) {
		throw std::out_of_range("Stack<T, CONT>::pop empty stack");
	}

	elems.pop_back();
}

template<typename T, typename CONT>
T Stack3<T, CONT>::top() const {
	if (elems.empty()) {
		throw std::out_of_range("Stack<T, CONT>::top empty stack");
	}

	return elems.back();
}


#endif /* PRIMER_STACK3_HPP_ */
