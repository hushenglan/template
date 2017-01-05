#include <iostream>

template<typename T>
inline T const& max4(T const& a, T const& b) {
    std::cout << "call max4 T" << std::endl;
    return a > b ? a : b;
}

template<typename T>
inline T const& max4(T const& a, T const& b, T const& c) {
    return max4(max4(a, b), c);
}

inline int const& max4(int const& a, int const& b) {
    std::cout << "call max4 int" << std::endl;
    std::cout << "error: I should not be called" << std::endl;
    return a > b ? a : b;
}
