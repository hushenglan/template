/*
 * accum9.cc
 *
 *  Created on: 2017年2月19日
 *      Author: blue
 */

#include "accum9.hpp"
#include <iostream>
#include "../template_test.hpp"


TEST_F(TemplateTest, TEST_ACCUM9_1) {
    int num[] = {1, 2, 3, 4, 5};
    std::cout << "the product of the integer values is "
              << Accum<int, SumPolicy<false>>::accum(&num[0], &num[5])
              << std::endl;
}


