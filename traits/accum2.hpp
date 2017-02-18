/*
 * accum2.hpp
 *
 *  Created on: 2017年2月18日
 *      Author: blue
 */

#ifndef TRAITS_ACCUM2_HPP_
#define TRAITS_ACCUM2_HPP_


#include "accumtraits2.hpp"

template<typename T>
inline
typename AccumulationTraits<T>::AccT accum(T const* beg, T const* end) {
    typedef typename AccumulationTraits<T>::AccT AccT;

    AccT total  = AccT();
    while (beg != end) {
        total += *beg;
        ++beg;
    }

    return total;
}


#endif /* TRAITS_ACCUM2_HPP_ */
