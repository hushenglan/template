/*
 * accum5.hpp
 *
 *  Created on: 2017年2月19日
 *      Author: blue
 */

#ifndef TRAITS_ACCUM5_HPP_
#define TRAITS_ACCUM5_HPP_


#include "accumtraits4.hpp"

template<typename T, typename AT = AccumulationTraits<T> >
class Accum {
public:
    static typename AT::AccT accum(T const* beg, T const* end) {
        typename AT::AccT total = AT::zero();
        while (beg != end) {
            total += *beg;
            ++beg;
        }

        return total;
    }
};

template<typename T>
inline typename AccumulationTraits<T>::AccT accum(T const* beg, T const* end) {
    return Accum<T>::accum(beg, end);
}

template<typename Traits, typename T>
inline typename Traits::AccT accum(T const* beg, T const* end) {
    return Accum<T, Traits>::accum(beg, end);
}


#endif /* TRAITS_ACCUM5_HPP_ */
