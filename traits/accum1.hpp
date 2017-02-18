/*
 * accum1.hpp
 *
 *  Created on: 2017年2月18日
 *      Author: blue
 */

#ifndef TRAITS_ACCUM1_HPP_
#define TRAITS_ACCUM1_HPP_


template<typename T>
inline T accum(T const* beg, T const* end) {
    T total = T();
    while (beg != end) {
        total += *beg;
        ++beg;
    }

    return total;
}


#endif /* TRAITS_ACCUM1_HPP_ */
