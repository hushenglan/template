/*
 * apply2.hpp
 *
 *  Created on: 2017年2月24日
 *      Author: blue
 */

#ifndef TRAITS_APPLY2_HPP_
#define TRAITS_APPLY2_HPP_


#include "typeop1.hpp"

template<typename T>
void apply(typename TypeOp<T>::RefT arg, void (*func)(T)) {
    func(arg);
}


#endif /* TRAITS_APPLY2_HPP_ */
