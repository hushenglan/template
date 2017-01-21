/*
 * printcoll.hpp
 *
 *  Created on: 2017年1月17日
 *      Author: blue
 */

#ifndef PRIMER_PRINTCOLL_HPP_
#define PRIMER_PRINTCOLL_HPP_


#include <iostream>
#include <bitset>

template<typename T>
void printcoll(T const& coll) {
	typename T::const_iterator pos;
	typename T::const_iterator end(coll.end());

	for (pos = coll.begin(); pos != end; ++pos) {
		std::cout << *pos << ' ';
	}

	std::cout << std::endl;
}

template<typename T>
void printcoll_1(T const& coll) {
	typename T::const_iterator pos;

	for (pos = coll.begin(); pos != coll.end(); ++pos) {
		std::cout << *pos << ' ';
	}

	std::cout << std::endl;
}

template<int N>
void printBitset(std::bitset<N> const& bs) {
	std::string str = bs.template to_string<char, std::char_traits<char>, std::allocator<char> >();
	std::cout << str << std::endl;
}

template<typename T>
class Base {
public:
	void exit() {
		std::cout << "use Base::exit" << std::endl;
	}
};

template<typename T>
class Derived : public Base<T> {
public:
	void foo_1() {
		this->exit();
	}

	void foo_2() {
		Base<T>::exit();
	}
};


#endif /* PRIMER_PRINTCOLL_HPP_ */
