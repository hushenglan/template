/*
 * apply2.cc
 *
 *  Created on: 2017年2月24日
 *      Author: blue
 */

#include <iostream>
#include "apply2.hpp"
#include "template_test.hpp"

extern void incr(int& a);

extern void print(int a);


TEST_F(TemplateTest, TEST_APPLY2_1) {
    int x = 7;
    apply(x, print);
    apply(x, incr);
}


