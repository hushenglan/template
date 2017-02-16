/*
 * stack7decl.cc
 *
 *  Created on: 2017年1月23日
 *      Author: blue
 */

#include "stack7decl.hpp"
#include <vector>
#include <deque>
#include <stdexcept>
#include "../template_test.hpp"

TEST_F(TemplateTest, TEST_STACK7DECL_1) {
	Stack7<int, std::vector> intStack_1;
	Stack7<int> intStack_2;
	Stack7<float> floatStack;

	intStack_1.push(1);
	intStack_1.push(2);
	intStack_1.push(3);
	intStack_1.push(4);
	intStack_1.push(5);
	intStack_1.push(6);
	intStack_1.push(7);
	intStack_1.push(8);

	std::cout << "start copy to int stack" << std::endl;
	intStack_2 = intStack_1;

	EXPECT_EQ(intStack_2.top(), 8);

	std::cout << "start copy to float stack" << std::endl;
	floatStack = intStack_1;

	EXPECT_EQ(floatStack.top(), 8.0);
}


