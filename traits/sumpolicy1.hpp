/*
 * sumpolicy1.hpp
 *
 *  Created on: 2017年2月19日
 *      Author: blue
 */

#ifndef TRAITS_SUMPOLICY1_HPP_
#define TRAITS_SUMPOLICY1_HPP_


class SumPolicy {
public:
    template<typename T1, typename T2>
    static void accumulate(T1& total, T2 const& value) {
        total += value;
    }
};


#endif /* TRAITS_SUMPOLICY1_HPP_ */
