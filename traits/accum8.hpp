/*
 * accum8.hpp
 *
 *  Created on: 2017年2月19日
 *      Author: blue
 */

#ifndef TRAITS_ACCUM8_HPP_
#define TRAITS_ACCUM8_HPP_

#include "accumtraits4.hpp"
#include "sumpolicy3.hpp"

template<typename T,
         typename Policy = SumPolicy<>,
         typename Traits = AccumulationTraits<T> >
class Accum {
public:
    typedef typename Traits::AccT AccT;

    static AccT accum(T const* beg, T const* end) {
        AccT total = Traits::zero();
        while (beg != end) {
            Policy::accumulate(total, *beg);
            ++beg;
        }

        return total;
    }
};



#endif /* TRAITS_ACCUM8_HPP_ */
