/*
 * rparamcls.hpp
 *
 *  Created on: 2017年2月25日
 *      Author: blue
 */

#ifndef TRAITS_RPARAMCLS_HPP_
#define TRAITS_RPARAMCLS_HPP_


#include <iostream>
#include "rparam.hpp"

class MyClass1 {
public:
    MyClass1() {
    }

    MyClass1(MyClass1 const&) {
        std::cout << "MyClass1 copy constructor called\n";
    }
};

class MyClass2 {
public:
    MyClass2() {
    }

    MyClass2(MyClass2 const&) {
        std::cout << "MyClass2 copy constructor called\n";
    }
};

template<>
class RParam<MyClass2> {
public:
    typedef MyClass2 Type;
};


#endif /* TRAITS_RPARAMCLS_HPP_ */
