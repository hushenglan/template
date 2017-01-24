/*
 * max3.hpp
 *
 *  Created on:
 *      Author: blue
 */

#ifndef PRIMER_MAX3_H_
#define PRIMER_MAX3_H_

#include <iostream>
#include <cstring>
#include <string>

template <typename T>
inline T const& max3(T const& a, T const& b) {
    std::cout << "call my_max_1 T" << std::endl;
    return a > b ? a : b;
}

template <typename T>
inline T* const& max3(T* const& a, T* const& b) {
    std::cout << "call my_max_1 T pointer" << std::endl;
    return *a > *b ? a : b;
}

inline char const* const& max3(char const* const& a, char const* const& b) {
    std::cout << "call my_max_1 char*" << std::endl;
    return std::strcmp(a, b) > 0 ? a : b;
}

#endif
