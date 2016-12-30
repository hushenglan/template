#include "template_test.h"
#include "abs.h"

TEST_F(TemplateTest, TEST_ABS_1) {
    EXPECT_EQ(absVal(-1), 1);
}

TEST_F(TemplateTest, TEST_ABS_2) {
    EXPECT_EQ(absVal(-0.09), 0.09);
}

TEST_F(TemplateTest, TEST_ABS_3) {
    EXPECT_EQ(absVal<float>(-0.09), static_cast<float>(0.09));
}

