/*
 * accum4.hpp
 *
 *  Created on: 2017年2月19日
 *      Author: blue
 */

#ifndef TRAITS_ACCUM4_HPP_
#define TRAITS_ACCUM4_HPP_


#include "accumtraits4.hpp"

template<typename T>
inline
typename AccumulationTraits<T>::AccT accum(T const* beg, T const* end) {
    typedef typename AccumulationTraits<T>::AccT AccT;

    AccT total  = AccumulationTraits<T>::zero();
    while (beg != end) {
        total += *beg;
        ++beg;
    }

    return total;
}


#endif /* TRAITS_ACCUM4_HPP_ */
