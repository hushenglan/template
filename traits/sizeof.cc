/*
 * sizeof.cc
 *
 *  Created on: 2017年2月20日
 *      Author: blue
 */

#include "sizeof.hpp"
#include <iostream>
#include "../template_test.hpp"

TEST_F(TemplateTest, TEST_SIZEOF_1) {
    std::cout << "TypeSize<int>::value = "
              << TypeSize<int>::value << std::endl;
}


