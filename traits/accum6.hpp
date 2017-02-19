/*
 * accum6.hpp
 *
 *  Created on: 2017年2月19日
 *      Author: blue
 */


#include "accumtraits4.hpp"
#include "sumpolicy1.hpp"

template<typename T,
         typename Policy = SumPolicy,
         typename Traits = AccumulationTraits<T> >
class Accum {
public:
    typedef typename Traits::AccT AccT;
    static AccT accum(T const* beg, T const* end) {
        AccT total = Traits::zero();
        while(beg != end) {
            Policy::accumulate(total, *beg);
            ++beg;
        }

        return total;
    }
};

