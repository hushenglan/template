/*
 * myfirstmain.cc
 *
 *  Created on: 2017年1月30日
 *      Author: blue
 */

#include "../template_test.hpp"
#include "myfirst.hpp"

TEST_F(TemplateTest, TEST_MYFIRST_1) {
	double ice = 3.0;
	print_typeof(ice);
}

TEST_F(TemplateTest, TEST_MYFIRST_2) {
	int ice = 3;
	print_typeof(ice);
}

