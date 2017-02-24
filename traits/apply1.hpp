/*
 * apply1.hpp
 *
 *  Created on: 2017年2月24日
 *      Author: blue
 */

#ifndef TRAITS_APPLY1_HPP_
#define TRAITS_APPLY1_HPP_


template<typename T>
void apply(T& arg, void (*func)(T)) {
    func(arg);
}


#endif /* TRAITS_APPLY1_HPP_ */
