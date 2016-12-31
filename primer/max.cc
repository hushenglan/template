#include "template_test.h"
#include "max.hpp"

TEST_F(TemplateTest, TEST_MAX_1) {
    int a = 1;
    int b = 2;
    EXPECT_EQ(my_max_4(a, b), b);
}

TEST_F(TemplateTest, TEST_MAX_2) {
    double f1 = 0.01;
    double f2 = 2;
    EXPECT_EQ(my_max_4(f1, f2), f2);
}

/*
 * 显式指定模版函数的类型
 */
TEST_F(TemplateTest, TEST_MAX_3) {
    EXPECT_EQ(my_max_4<float>(4, 3.2), 4);
}

TEST_F(TemplateTest, TEST_MAX_4) {
    EXPECT_EQ(my_max_5(4, 3.2), 4);
}

TEST_F(TemplateTest, TEST_MAX_5) {
    EXPECT_EQ(my_max_5(4, 6.2), 6);
}

TEST_F(TemplateTest, TEST_MAX_6) {
    EXPECT_EQ(my_max_5(4, 4.2), 4);
}
