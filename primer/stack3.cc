/*
 * stack3.cc
 *
 *  Created on: 2017年1月9日
 *      Author: blue
 */

#include "template_test.h"
#include "stack3.hpp"
#include <iostream>
#include <deque>

TEST_F(TemplateTest, TEST_STACK3_1) {
	/*
	 * 默认使用std::vector<std::string>作为容器
	 */
    try {
        Stack3<std::string> stack;
        stack.push(std::string("hello"));
        std::cout << stack.top() << std::endl;
        EXPECT_EQ(stack.top(), "hello");
        stack.pop();
        stack.pop();
    } catch(std::exception const& e) {
        std::cout << "Exception: " << e.what() << std::endl;
    }
}

TEST_F(TemplateTest, TEST_STACK3_2) {
	/*
	 * 指定deque作为容器
	 */
    try {
        Stack3<double, std::deque<double> > stack;
        stack.push(1.0);
        std::cout << stack.top() << std::endl;
        EXPECT_EQ(stack.top(), 1.0);
        stack.pop();
        stack.pop();
    } catch(std::exception const& e) {
        std::cout << "Exception: " << e.what() << std::endl;
    }
}
