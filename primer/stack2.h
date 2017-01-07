/*
 * stack2.h
 *
 *  Created on: 2017年1月7日
 *      Author: lenovo
 */

#ifndef PRIMER_STACK2_H_
#define PRIMER_STACK2_H_

#include "stack1.hpp"
#include <deque>
#include <string>
#include <stdexcept>

template<>
class Stack<std::string> {

private:
	/*
	 * 这里使用了一个deque，而不是vector
	 */
	std::deque<std::string> elems;

public:
	Stack() {
	}

	~Stack() {
	}

    Stack(Stack<std::string> const& stack) {
        this->elems = stack.elems;
    }

    /*
     * 把下面两个函数注释掉的原因是想说明这两个可以不用特化
     */
//    Stack<std::string>& operator=(Stack<std::string> const& stack) {
//        this->elems = stack.elems;
//        return *this;
//    }
//
//    bool operator<(Stack<std::string> const& other_stack) const {
//    	/*
//    	 * 由于这个成员函数没有被调用，所以不会实例化此成员函数
//    	 */
//    	return this->elems.size() < other_stack.elems.size();
//    }

	void push(std::string const&);
	void pop();
	std::string pop_no_exceptionsafety();
	std::string top() const;

	bool empty() const {
		return elems.empty();
	}
};

std::string Stack<std::string>::pop_no_exceptionsafety() {
    if (elems.empty()) {
        throw std::out_of_range("Stack<std::string>::pop_no_exceptionsafety: empty stack");
    }

	std::string str = elems.back();
	elems.pop_back();
	return str;
}

void Stack<std::string>::push(std::string const& elem) {
	std::cout << "call Stack<std::string>::push" << std::endl;
	elems.push_back(elem);
}

void Stack<std::string>::pop() {
	std::cout << "call Stack<std::string>::pop" << std::endl;
	if (elems.empty()) {
		throw std::out_of_range("Stack<std::string>::pop: empty elems");
	}

	elems.pop_back();
}

std::string Stack<std::string>::top() const {
	std::cout << "call Stack<std::string>::top" << std::endl;
	if (elems.empty()) {
		throw std::out_of_range("Stack<std::string>::top: empty elems");
	}
	return elems.back();
}

#endif /* PRIMER_STACK2_H_ */
