/*
 * ifthenelse.hpp
 *
 *  Created on: 2017年2月24日
 *      Author: blue
 */

#ifndef TRAITS_IFTHENELSE_HPP_
#define TRAITS_IFTHENELSE_HPP_


template<bool C, typename Ta, typename Tb>
class IfThenElse;

template<typename Ta, typename Tb>
class IfThenElse<true, Ta, Tb> {
public:
    typedef Ta ResultT;
};

template<typename Ta, typename Tb>
class IfThenElse<false, Ta, Tb> {
public:
    typedef Tb ResultT;
};


#endif /* TRAITS_IFTHENELSE_HPP_ */
