/*
 * sumpolicy3.hpp
 *
 *  Created on: 2017年2月19日
 *      Author: blue
 */

#ifndef TRAITS_SUMPOLICY3_HPP_
#define TRAITS_SUMPOLICY3_HPP_

template<bool use_compound_op = true>
class SumPolicy {
public:
    template<typename T1, typename T2>
    static void accumulate(T1& total, T2 const& value) {
        total += value;
    }
};

template<>
class SumPolicy<false> {
public:
    template<typename T1, typename T2>
    static void accumulate(T1& total, T2 const& value) {
        total = total + value;
    }
};


#endif /* TRAITS_SUMPOLICY3_HPP_ */
