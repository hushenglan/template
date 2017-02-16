#include <template_test.hpp>
#include "max3.hpp"
#include <iostream>

TEST_F(TemplateTest, TEST_MAX3_1) {
    int a = 7;
    int b = 42;
    EXPECT_EQ(max3(a, b), b);
}

TEST_F(TemplateTest, TEST_MAX3_2) {
    std::string a = "hey";
    std::string b = "you";
    EXPECT_EQ(max3(a, b), b);
}

TEST_F(TemplateTest, TEST_MAX3_3) {
    int a = 7;
    int b = 42;
    int* p1 = &a;
    int* p2 = &b;
    EXPECT_EQ(max3(p1, p2), p2);
}

TEST_F(TemplateTest, TEST_MAX3_4) {
    char const* s1 = "David";
    char const* s2 = "Nico";
    EXPECT_EQ(max3(s1, s2), s2);
}
