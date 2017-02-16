/*
 * stack2.cpp
 *
 *  Created on: 2017年1月7日
 *      Author: blue
 */

#include "stack2.hpp"

#include "../template_test.hpp"

TEST_F(TemplateTest, TEST_STACK2_1) {
    try {
        Stack<std::string> stack;
        stack.push(std::string("hello"));
        std::cout << stack.top() << std::endl;
        EXPECT_EQ(stack.top(), "hello");
        stack.pop();
        stack.pop();
    } catch(std::exception const& e) {
        std::cout << "Exception: " << e.what() << std::endl;
    }
}
