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
    EXPECT_EQ(my_max(1, 2), 2);
}

TEST_F(TemplateTest, TEST_MAX_2) {
    EXPECT_EQ(my_max(0.01, 0.2), 0.2);
}

int main(int argc, char* argv[]) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
