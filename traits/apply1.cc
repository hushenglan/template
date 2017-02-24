/*
 * apply1.cc
 *
 *  Created on: 2017年2月24日
 *      Author: blue
 */

#include <iostream>
#include "apply1.hpp"
#include "template_test.hpp"

void incr(int& a) {
    ++a;
    std::cout << a << std::endl;
}

void print(int a) {
    std::cout << a << std::endl;
}


TEST_F(TemplateTest, TEST_APPLY1_1) {
    int x = 7;
    apply(x, print);
//    apply(x, incr);
}


