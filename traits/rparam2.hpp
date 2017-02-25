/*
 * rparam2.hpp
 *
 *  Created on: 2017年2月25日
 *      Author: blue
 */

#ifndef TRAITS_RPARAM2_HPP_
#define TRAITS_RPARAM2_HPP_


#include "rparam.hpp"
#include "rparamcls.hpp"

template<typename T1, typename T2>
void foo_core(typename RParam<T1>::Type p1, typename RParam<T2>::Type p2) {
    //...
}


#endif /* TRAITS_RPARAM2_HPP_ */
