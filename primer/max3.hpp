#include <iostream>
#include <cstring>
#include <string>

template <typename T>
inline T const& max_1(T const& a, T const& b) {
    std::cout << "call my_max_1 T" << std::endl;
    return a > b ? a : b;
}

template <typename T>
inline T* const& max_1(T* const& a, T* const& b) {
    std::cout << "call my_max_1 T pointer" << std::endl;
    return *a > *b ? a : b;
}

inline char const* const& max_1(char const* const& a, char const* const& b) {
    std::cout << "call my_max_1 char*" << std::endl;
    return std::strcmp(a, b) > 0 ? a : b;
}
