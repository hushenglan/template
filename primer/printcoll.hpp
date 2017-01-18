/*
 * printcoll.hpp
 *
 *  Created on: 2017年1月17日
 *      Author: lenovo
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


#endif /* PRIMER_PRINTCOLL_HPP_ */