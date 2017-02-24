/*
 * promotel.hpp
 *
 *  Created on: 2017年2月24日
 *      Author: blue
 */

#ifndef TRAITS_PROMOTE_HPP_
#define TRAITS_PROMOTE_HPP_


#include "ifthenelse.hpp"

template<typename T1, typename T2>
class Promotion {
public:
    typedef typename IfThenElse<(sizeof(T1) > sizeof(T2)),
                                T1,
                                typename IfThenElse<(sizeof(T1) < sizeof(T2)),
                                                    T2,
                                                    void
                                                   >::ResultT
                               >::ResultT ResultT;
};

template<typename T>
class Promotion<T, T> {
public:
    typedef T ResultT;
};

#define MK_PROMOTION(T1, T2, Tr)    \
    template<>                      \
    class Promotion<T1, T2> {       \
    public:                         \
        typedef Tr ResultT;         \
    };                              \
                                    \
    template<>                      \
    class Promotion<T2, T1> {       \
    public:                         \
        typedef Tr ResultT;         \
    };

MK_PROMOTION(bool, char, int);
MK_PROMOTION(bool, unsigned char, int);
MK_PROMOTION(bool, signed char, int);
// ......


#endif /* TRAITS_PROMOTE_HPP_ */
