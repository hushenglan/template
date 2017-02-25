/*
 * rparam1.cc
 *
 *  Created on: 2017年2月25日
 *      Author: blue
 */

#include "rparam.hpp"
#include "rparamcls.hpp"
#include "template_test.hpp"

template<typename T1, typename T2>
void foo(typename RParam<T1>::Type p1, typename RParam<T2>::Type p2) {
    //...
}

TEST_F(TemplateTest, TEST_RPARAM_1) {
    MyClass1 mc1;
    MyClass2 mc2;
    foo<MyClass1, MyClass2>(mc1, mc2);
}
