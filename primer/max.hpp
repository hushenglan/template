
template <typename T>
inline T const my_max(T const a, T const b) {
    return a < b ? b : a;
}

template <typename T>
inline T my_max_1(T a, T b) {
    return a < b ? b : a;
}

/*
 * 这个编译会报错：
 *./primer/max.hpp:16:35: error: 'const' qualifiers cannot be applied to 'T&'
 */
// template <typename T>
// inline T& const my_max_2(T& const a, T& const b) {
//     return a < b ? b : a;
// }

template <typename T>
inline T const& my_max_3(T const& a, T const& b) {
    return a < b ? b : a;
}

/*
 * 写这个函数的目的是为了对比“引用”和“指针”的const用法
 *
 * 引用的主要用途是为了描述函数的参数和返回值，特别是为了运算符的重载
 */
template <typename T>
inline T* my_max_p(T *const a, T *const b) {
    return *a > *b ? a : b;
}

template <typename T>
inline const T& my_max_4(const T& a, const T& b) {
    return a < b ? b : a;
}
