/*
 * typeop1.hpp
 *
 *  Created on: 2017年2月24日
 *      Author: blue
 */

#ifndef TRAITS_TYPEOP1_HPP_
#define TRAITS_TYPEOP1_HPP_


template<typename T>
class TypeOp {
public:
    typedef T           ArgT;
    typedef T           BareT;
    typedef T const     ConstT;
    typedef T &         RefT;
    typedef T &         RefBareT;
    typedef T const &   RefConstT;
};

template<typename T>
class TypeOp<T const> {
public:
    typedef T const     ArgT;
    typedef T           BareT;
    typedef T const     ConstT;
    typedef T const &   RefT;
    typedef T &         RefBareT;
    typedef T const &   RefConstT;
};

template<typename T>
class TypeOp<T&> {
public:
    typedef T &                         ArgT;
    typedef typename TypeOp<T>::BareT   BareT;
    typedef T const                     ConstT;
    typedef T &                         RefT;
    typedef typename TypeOp<T>::BareT & RefBareT;
    typedef T const &                   RefConstT;
};

template<>
class TypeOp<void> {
public:
    typedef void        ArgT;
    typedef void        BareT;
    typedef void const  ConstT;
    typedef void        RefT;
    typedef void        RefBareT;
    typedef void        RefConstT;
};


#endif /* TRAITS_TYPEOP1_HPP_ */
