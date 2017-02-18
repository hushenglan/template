/*
 * accumtraits3.hpp
 *
 *  Created on: 2017年2月18日
 *      Author: blue
 */

#ifndef TRAITS_ACCUMTRAITS3_HPP_
#define TRAITS_ACCUMTRAITS3_HPP_


template<typename T>
class AccumulationTraits;

template<>
class AccumulationTraits<char> {
public:
    typedef int AccT;
    static AccT const zero = 0;
};

template<>
class AccumulationTraits<short> {
public:
    typedef int AccT;
    static AccT const zero = 0;
};

template<>
class AccumulationTraits<int> {
public:
    typedef long AccT;
    static AccT const zero = 0;
};

template<>
class AccumulationTraits<unsigned int> {
public:
    typedef unsigned long AccT;
    static AccT const zero = 0;
};

template<>
class AccumulationTraits<float> {
public:
    typedef double AccT;
    //static AccT constexpr zero = 0.0;
    static AccT const zero;
};


#endif /* TRAITS_ACCUMTRAITS3_HPP_ */
