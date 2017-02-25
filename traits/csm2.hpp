/*
 * csm2.hpp
 *
 *  Created on: 2017年2月25日
 *      Author: blue
 */

#ifndef TRAITS_CSM2_HPP_
#define TRAITS_CSM2_HPP_


#include <cstring>
#include <cassert>
#include <stddef.h>
#include <iostream>
#include "csm1.hpp"

template<typename T>
class BitOrClassCSM<T, true> : public BitOrClassCSM<T, false> {
public:
    static void copy_n(T const* src, T* dst, size_t n) {
        std::memcpy((void*)dst, (void*)src, n);
        std::cout << "use memcpy copy_n" << std::endl;
    }

    static void copy_init_n(T const* src, void* dst, size_t n) {
        std::memcpy(dst, (void*)src, n);
        std::cout << "use memcpy copy_init_n" << std::endl;
    }

    static void move_n(T*src, T*dst, size_t n) {
        assert(src != dst);
        std::memcpy((void*)dst, (void*)src, n);
        std::cout << "use memcpy move_n" << std::endl;
    }

    static void move_init_n(T const* src, void* dst, size_t n) {
        assert(src != dst);
        std::memcpy(dst, (void*)src, n);
        std::cout << "use memcpy move_init_n" << std::endl;
    }
};


#endif /* TRAITS_CSM2_HPP_ */
