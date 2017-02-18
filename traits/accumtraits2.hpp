/*
 * accumtraits2.hpp
 *
 *  Created on: 2017年2月18日
 *      Author: blue
 */

#ifndef TRAITS_ACCUMTRAITS2_HPP_
#define TRAITS_ACCUMTRAITS2_HPP_


template<typename T>
class AccumulationTraits {
};

template<>
class AccumulationTraits<char> {
public:
    typedef int AccT;
};

template<>
class AccumulationTraits<short> {
public:
    typedef int AccT;
};

template<>
class AccumulationTraits<int> {
public:
    typedef long AccT;
};

template<>
class AccumulationTraits<unsigned int> {
public:
    typedef unsigned long AccT;
};

template<>
class AccumulationTraits<float> {
public:
    typedef double AccT;
};


#endif /* TRAITS_ACCUMTRAITS2_HPP_ */
