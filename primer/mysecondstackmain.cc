/*
 * mysecondmain.cc
 *
 *  Created on: 2017年1月31日
 *      Author: blue
 */

#include "mysecondstackdef.hpp"
#include "template_test.h"

TEST_F(TemplateTest, TEST_MYSECONDSTACK_1) {
	MySecondStack<int> intStack;
	intStack.push(42);
	std::cout << intStack.top() << std::endl;
	intStack.pop();
}

TEST_F(TemplateTest, TEST_MYSECONDSTACK_2) {
	MySecondStack<std::string> stringStack;
	stringStack.push("hello");
	std::cout << stringStack.top() << std::endl;
}


