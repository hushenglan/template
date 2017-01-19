/*
 * stack5decl.cc
 *
 *  Created on: 2017年1月19日
 *      Author: lenovo
 */

#include "template_test.h"
#include "stack5decl.hpp"

TEST_F(TemplateTest, TEST_STACK5DECL_1) {
	Stack5<int> intStack_1, intStack_2;
	Stack5<float> floatStack;

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
	floatStack = intStack_2;

	EXPECT_EQ(floatStack.top(), 8.0);
}


