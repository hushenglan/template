#include "template_test.h"
#include "max4.hpp"
#include <iostream>

TEST_F(TemplateTest, TEST_MAX4_1) {
    int a = 1;
    int b = 2;
    int c = 3;
    EXPECT_EQ(max4(a, b, c), c);
}
