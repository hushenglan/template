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

TEST_F(TemplateTest, TEST_STACK1_3) {
    Stack<int> stack_1;
    stack_1.push(1);
    stack_1.push(2);
    stack_1.push(3);
    stack_1.push(4);
    stack_1.push(5);
    EXPECT_EQ(stack_1.top(), 5);

    Stack<int> stack_2(stack_1);
    EXPECT_EQ(stack_2.top(), 5);
}

TEST_F(TemplateTest, TEST_STACK1_4) {
    Stack<int> stack_1;
    stack_1.push(1);
    stack_1.push(2);
    stack_1.push(3);
    stack_1.push(4);
    stack_1.push(5);
    EXPECT_EQ(stack_1.top(), 5);

    Stack<int> stack_2 = stack_1;
    EXPECT_EQ(stack_2.top(), 5);
}

TEST_F(TemplateTest, TEST_STACK1_5) {
    try {
        Stack<std::string> stack_1;
        stack_1.push("hello");
        std::cout << stack_1.top() << std::endl;
        EXPECT_EQ(stack_1.top(), "hello");
        stack_1.pop();
        stack_1.pop();
    } catch(std::exception const& e) {
        std::cerr << "Exception: " << e.what() << std::endl;
    }
}



