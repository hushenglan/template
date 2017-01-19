/*
 * stack5decl.hpp
 *
 *  Created on: 2017年1月19日
 *      Author: lenovo
 */

#ifndef PRIMER_STACK5DECL_HPP_
#define PRIMER_STACK5DECL_HPP_

#include <deque>

template<typename T>
class Stack5 {
private:
	std::deque<T> elems;

public:
	void push(T const&);
	void pop();
	T top() const;
	bool empty() const {
		return elems.empty();
	}


	template<typename T2>
	Stack5<T>& operator=(Stack5<T2> const&);

};

template<typename T>
void Stack5<T>::push(T const& elem) {
	elems.push_back(elem);
}

template<typename T>
void Stack5<T>::pop() {
	if (elems.size() <= 0) {
		throw std::out_of_range("stack is empty");
	}

	elems.pop_back();
}

template<typename T>
T Stack5<T>::top() const {
	if (elems.size() <= 0) {
		throw std::out_of_range("stack is empty");
	}

	return elems.back();
}

template<typename T>
template<typename T2>
Stack5<T>& Stack5<T>::operator=(Stack5<T2> const& other) {
	/*
	 * 同类型的stack复制不会调用到这里来
	 */
	std::cout << "start transfer" << std::endl;
	if ((void*)this == (void*)&other) {
		/*
		 * 赋值给自身
		 */
		return *this;
	}

	Stack5<T2> tmp(other);

	elems.clear();
	while (!tmp.empty()) {
		elems.push_front(tmp.top());
		tmp.pop();
	}

	return *this;
}

#endif /* PRIMER_STACK5DECL_HPP_ */
























