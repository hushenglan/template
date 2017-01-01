#include <iostream>

inline int const& max(int const& a, int const& b) {
    std::cout << "call int 2 max" << std::endl;
    return a > b ? a : b;
}

template<typename T>
inline T const& max(T const& a, T const& b) {
    std::cout << "call T 2 max" << std::endl;
    return a > b ? a : b;
}

template<typename T>
inline T const& max(T const& a, T const& b, T const& c) {
    std::cout << "call T 3 max" << std::endl;
    std::cout << "-- T3 start --" << std::endl;
    T const& ret = ::max(::max(a, b), c);
    std::cout << "-- T3 end --" << std::endl;
    return ret;
}
