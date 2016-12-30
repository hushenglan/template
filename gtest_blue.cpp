#include "template_test.h"
#include "abs.h"
#include "max.hpp"

TEST_F(TemplateTest, TEST_ABS_1) {
    EXPECT_EQ(absVal(-1), 1);
}

TEST_F(TemplateTest, TEST_ABS_2) {
    EXPECT_EQ(absVal(-0.09), 0.09);
}

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

int main(int argc, char* argv[]) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
