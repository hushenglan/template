/*
 * multpolicy.hpp
 *
 *  Created on: 2017年2月19日
 *      Author: blue
 */

#ifndef TRAITS_MULTPOLICY_HPP_
#define TRAITS_MULTPOLICY_HPP_


class MultPolicy {
public:
    template<typename T1, typename T2>
    static void accumulate(T1& total, T2 const& value) {
        total *= value;
    }
};


#endif /* TRAITS_MULTPOLICY_HPP_ */
