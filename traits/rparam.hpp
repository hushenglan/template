/*
 * rparam.hpp
 *
 *  Created on: 2017年2月25日
 *      Author: blue
 */

#ifndef TRAITS_RPARAM_HPP_
#define TRAITS_RPARAM_HPP_


#include "ifthenelse.hpp"
#include "isclasst.hpp"

template<typename T>
class RParam {
public:
    typedef typename IfThenElse<IsClassT<T>::No,
                                T,
                                T const&
                               >::ResultT Type;
};


#endif /* TRAITS_RPARAM_HPP_ */
