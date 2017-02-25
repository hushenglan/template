/*
 * rparam2.cc
 *
 *  Created on: 2017年2月25日
 *      Author: blue
 */

#include "rparam2.hpp"
#include "template_test.hpp"

template<typename T1, typename T2>
inline void foo(T1 const& p1, T2 const& p2) {
    foo_core<T1, T2>(p1, p2);
}

TEST_F(TemplateTest, TEST_RPARAM2_1) {
    MyClass1 mc1;
    MyClass2 mc2;
    foo(mc1, mc2);
}
