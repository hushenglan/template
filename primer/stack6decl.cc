/*
 * stack6decl.cc
 *
 *  Created on: 2017年1月21日
 *      Author: blue
 */

#include "stack6decl.hpp"
#include <iostream>
#include <vector>
#include "../template_test.hpp"

TEST_F(TemplateTest, TEST_STACK6DECL_1) {
	Stack6<int, std::vector<int>> intStack_1;
	Stack6<int, std::deque<int>> intStack_2;
	Stack6<float, std::deque<float>> floatStack;

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


