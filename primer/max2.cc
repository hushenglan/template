#include "template_test.h"
#include "max2.hpp"
#include <iostream>

TEST_F(TemplateTest, TEST_MAX2_1) {
    ::max2(7, 42, 68);       // 调用max(T const& a, T const& b, T const& c)
    ::max2(7.0, 42.0);       // 调用max(T const& a, T const& b)
    ::max2('a', 'b');        // max(T const& a, T const& b)，模版函数可以更好的匹配
    ::max2(7, 42);           // 调用max(int const& a, int const& b)
    ::max2<>(7, 42);         // 调用max(T const& a, T const& b)
    ::max2<double>(7, 42);   // 调用max(T const& a, T const& b)
    ::max2('a', 42.7);       // 调用max(int const& a, int const& b)，模版函数不允许自动类型转换，普通函数可以
}
