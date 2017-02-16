#include <abs.hpp>

#include "../template_test.hpp"

TEST_F(TemplateTest, TEST_ABS_1) {
    EXPECT_EQ(absVal(-1), 1);
}

TEST_F(TemplateTest, TEST_ABS_2) {
    EXPECT_EQ(absVal(-0.09), 0.09);
}

/*
 * 显式指定模版函数的类型
 * 由于0.09的默认类型是double，所以需要使用static_cast强制转换
 */
TEST_F(TemplateTest, TEST_ABS_3) {
    EXPECT_EQ(absVal<float>(-0.09), static_cast<float>(0.09));
}

