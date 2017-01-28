/*
 * type.hpp
 *
 *  Created on: 2017年1月28日
 *      Author: blue
 */

#ifndef PRIMER_TYPE_HPP_
#define PRIMER_TYPE_HPP_


#include <string>
#include <typeinfo>

std::string demangle(const char* name);

template <class T>
std::string type(T const& t) {

    return demangle(typeid(t).name());
}


#endif /* PRIMER_TYPE_HPP_ */
