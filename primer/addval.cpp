/*
 * addval.cpp
 *
 *  Created on: 2017年1月15日
 *      Author: lenovo
 */

#include "template_test.h"
#include "addval.h"
#include <vector>
#include <algorithm>
#include <iostream>

TEST_F(TemplateTest, TEST_ADDVAL_1) {
	double a = addValue<double, 5>(6);
	EXPECT_EQ(a, 11.0);
}

TEST_F(TemplateTest, TEST_ADDVAL_2) {
	//std::vector<int> v{1, 2, 3, 4};
	std::vector<int> v;
	v.push_back(1);
	v.push_back(2);
	v.push_back(3);
	v.push_back(4);

	std::transform(v.begin(), v.end(), v.begin(), addValue<int, 10>);
    for (auto const &n : v) {
        std::cout << ' ' << n;
    }
    std::cout << std::endl;
}


