/*
 * stack4.cc
 *
 *  Created on: 2017年1月9日
 *      Author: blue
 */


#include <template_test.hpp>
#include "stack4.hpp"
#include <iostream>
#include <string>
#include <cstdlib>

TEST_F(TemplateTest, TEST_STACK4_1) {
	try {
		Stack4<int, 20> int20Stack;
		Stack4<int, 40> int40Stack;
		Stack4<std::string, 40> string40Stack;

		int20Stack.push(7);
		std::cout << int20Stack.top() << std::endl;
		int20Stack.pop();

		string40Stack.push("hello");
		std::cout << string40Stack.top() << std::endl;

		string40Stack.pop();
		string40Stack.pop();
	} catch (std::exception const& e) {
		std::cout << e.what() << std::endl;
	}
}
