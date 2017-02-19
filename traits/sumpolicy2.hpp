/*
 * sumpolicy2.hpp
 *
 *  Created on: 2017年2月19日
 *      Author: blue
 */

#ifndef TRAITS_SUMPOLICY2_HPP_
#define TRAITS_SUMPOLICY2_HPP_


template<typename T1, typename T2>
class SumPolicy {
public:
    static void accumulate(T1& total, T2 const& value) {
        total += value;
    }
};


#endif /* TRAITS_SUMPOLICY2_HPP_ */
