/*
 * accum0.hpp
 *
 *  Created on: 2017年2月19日
 *      Author: blue
 */

#ifndef TRAITS_ACCUM0_HPP_
#define TRAITS_ACCUM0_HPP_


#include <iterator>

template<typename Iter>
inline typename std::iterator_traits<Iter>::value_type accum(Iter start, Iter end) {
    typedef typename std::iterator_traits<Iter>::value_type VT;

    VT total = VT();
    while (start != end) {
        total += *start;
        ++start;
    }

    return total;
}


#endif /* TRAITS_ACCUM0_HPP_ */
