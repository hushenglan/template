/*
 * accum3.cc
 *
 *  Created on: 2017年2月18日
 *      Author: blue
 */

#include "accum3.hpp"
#include <iostream>
#include "../template_test.hpp"

double const AccumulationTraits<float>::zero = 0.0;

TEST_F(TemplateTest, TEST_ACCUM3_1) {
    int num[] = {1, 2, 3, 4, 5};

    std::cout << "the average value of the integer values is " <<
            accum(&num[0], &num[5]) / 5 << std::endl;

    char name[] = "templates";
    int length = sizeof(name) - 1;

    std::cout << "the average value of the characters in\""
            << name << "\" is "
            << accum(&name[0] , &name[length]) /length
            << std::endl;
}


