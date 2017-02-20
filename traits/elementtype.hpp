/*
 * elementtype.hpp
 *
 *  Created on: 2017年2月20日
 *      Author: blue
 */

#ifndef TRAITS_ELEMENTTYPE_HPP_
#define TRAITS_ELEMENTTYPE_HPP_


#include <vector>
#include <list>
#include <stack>
#include <iostream>
#include <typeinfo>

template<typename T>
class ElementT;

template<typename T>
class ElementT<std::vector<T>> {
public:
    typedef T Type;
};

template<typename T>
class ElementT<std::list<T>> {
public:
    typedef T Type;
};

template<typename T>
class ElementT<std::stack<T>> {
public:
    typedef T Type;
};

template<typename T>
void print_element_type(T const& c) {
    std::cout << "Container of "
              << typeid(typename ElementT<T>::Type).name()
              << " elements.\n";
}


#endif /* TRAITS_ELEMENTTYPE_HPP_ */
