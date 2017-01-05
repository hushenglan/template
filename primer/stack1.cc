#include "template_test.h"
#include "stack1.hpp"

TEST_F(TemplateTest, TEST_STACK1_1) {
    Stack<int> *stack_p = new Stack<int>();
    stack_p->push(1);
    stack_p->push(2);
    stack_p->push(3);
    stack_p->push(4);
    stack_p->push(5);
    EXPECT_EQ(stack_p->top(), 5);
    stack_p->pop();
    EXPECT_EQ(stack_p->top(), 4);
}

TEST_F(TemplateTest, TEST_STACK1_2) {
    Stack<int> stack;
    stack.push(1);
    stack.push(2);
    stack.push(3);
    stack.push(4);
    stack.push(5);
    EXPECT_EQ(stack.top(), 5);
    stack.pop();
    EXPECT_EQ(stack.top(), 4);
}
