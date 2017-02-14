/*
 * dynahier_test.cc
 *
 *  Created on: 2017年2月13日
 *      Author: blue
 */

#include "template_test.h"
#include "dynahier.hpp"
#include <iostream>

TEST_F(TemplateTest, TEST_DYNAHIER_1) {
    std::cout << std::endl << std::endl;

    Circle ci_1;
    Coord co_1 = ci_1.center_of_gravity();

    std::cout << "outter c address: " << static_cast<const void *>(&co_1) << std::endl;
    std::cout << "get co: " << co_1.to_string() << std::endl;

    std::cout << "----------------" << std::endl;

    Circle ci_2;
    Coord co_2(3, 3);
    std::cout << "outter c address: " << static_cast<const void *>(&co_2) << std::endl;
    ci_2.set_coord(co_2);

    std::cout << "----------------" << std::endl;
    std::cout << std::endl << std::endl;
}

