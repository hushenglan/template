/*
 * sizeof.hpp
 *
 *  Created on: 2017年2月20日
 *      Author: blue
 */

#ifndef TRAITS_SIZEOF_HPP_
#define TRAITS_SIZEOF_HPP_

#include <stddef.h>

template<typename T>
class TypeSize {
public:
    static size_t const value = sizeof(T);
};


#endif /* TRAITS_SIZEOF_HPP_ */
