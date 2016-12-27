#include "gtest_demo.h"
#include "abs.h"

TEST_F(TemplateTest, TEST_ABS) {
    EXPECT_EQ(absVal(-1), 1);
}

int main(int argc, char* argv[]) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
