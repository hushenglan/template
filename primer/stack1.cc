#include <template_test.hpp>
#include "stack1.hpp"

TEST_F(TemplateTest, TEST_STACK1_1) {
	IntStack *stack_p = new IntStack();
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
	IntStack stack;
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
	IntStack stack_1;
    stack_1.push(1);
    stack_1.push(2);
    stack_1.push(3);
    stack_1.push(4);
    stack_1.push(5);
    EXPECT_EQ(stack_1.top(), 5);

    IntStack stack_2(stack_1);
    EXPECT_EQ(stack_2.top(), 5);
}

TEST_F(TemplateTest, TEST_STACK1_4) {
    IntStack stack_1;
    stack_1.push(1);
    stack_1.push(2);
    stack_1.push(3);
    stack_1.push(4);
    stack_1.push(5);
    EXPECT_EQ(stack_1.top(), 5);

    IntStack stack_2 = stack_1;
    EXPECT_EQ(stack_2.top(), 5);
}

/*
 * 由于后面会特化Stack<std::string>
 * 有关T是std::string类型的测试就不能写在这里了，否则根据参数演绎，会根据T是std::string演绎出Stack<std::string>类型
 * 和stack2.h里面的特化冲突
 */
//TEST_F(TemplateTest, TEST_STACK1_5) {
//    try {
//        Stack<std::string> stack_1;
//        stack_1.push("hello");
//        std::cout << stack_1.top() << std::endl;
//        EXPECT_EQ(stack_1.top(), "hello");
//        stack_1.pop();
//        stack_1.pop();
//    } catch(std::exception const& e) {
//        std::cout << "Exception: " << e.what() << std::endl;
//    }
//}



