/*
 * max.hpp
 *
 *  Created on:
 *      Author: blue
 */

#ifndef PRIMER_MAX_H_
#define PRIMER_MAX_H_

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

/*
 * 这里的返回值不能返回引用，是因为参数a和b不是引用，参数传递属于传值，会创建临时变量
 */
template <typename T>
inline T const& my_max_6(T a, T b) {
    return a < b ? b : a;
}

/*
 * 这里的返回值也不能返回引用，是因为返回的类型不一定是T1，也可能是T2，这样可能会有强制转换的一个过程，这个过程也会产生临时变量
 */
template <typename T1, typename T2>
inline T1 my_max_5(T1 const& a, T2 const& b) {
    return a < b ? b : a;
}

/*
 * 编译时无法根据函数调用推演出RT的类型，所以在使用此函数时需要显式指定RT的类型
 */
template <typename RT, typename T1, typename T2>
inline RT my_max_7(T1 const& a, T2 const& b) {
    return a < b ? b : a;
}

#endif
