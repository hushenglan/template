/*
 * refnonref.hpp
 *
 *  Created on: 2017年1月28日
 *      Author: blue
 */

#ifndef PRIMER_REFNONREF_HPP_
#define PRIMER_REFNONREF_HPP_


#include "type.hpp"
#include <typeinfo>
#include <iostream>

template<typename T>
void ref(T const& x) {
	std::cout << "x in ref(T const&): " << type(x) << std::endl;
}

template<typename T>
void nonref(T const x) {
	std::cout << "x in nonref(T const): " << type(x) << std::endl;
}


#endif /* PRIMER_REFNONREF_HPP_ */
