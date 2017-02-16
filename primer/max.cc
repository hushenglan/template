#include <template_test.hpp>
#include "max.hpp"
#include <iostream>

TEST_F(TemplateTest, TEST_MAX1_1) {
    int a = 1;
    int b = 2;
    EXPECT_EQ(my_max_4(a, b), b);
}

TEST_F(TemplateTest, TEST_MAX1_2) {
    double f1 = 0.01;
    double f2 = 2;
    EXPECT_EQ(my_max_4(f1, f2), f2);
}

/*
 * 显式指定模版函数的类型
 */
TEST_F(TemplateTest, TEST_MAX1_3) {
    EXPECT_EQ(my_max_4<float>(4, 3.2), 4);
}

TEST_F(TemplateTest, TEST_MAX1_4) {
    EXPECT_EQ(my_max_5(4, 3.2), 4);
}

/*
 * my_max_5返回的是第一个参数的类型，所以会把6.2强制转换成整形，是6
 */
TEST_F(TemplateTest, TEST_MAX1_5) {
    EXPECT_EQ(my_max_5(4, 6.2), 6);
}

/*
 * my_max_5返回的是第一个参数的类型，所以会把4.2强制转换成整形，是4
 */
TEST_F(TemplateTest, TEST_MAX1_6) {
    EXPECT_EQ(my_max_5(4, 4.2), 4);
}

TEST_F(TemplateTest, TEST_MAX1_7) {
    double result_1 = my_max_6<double>(4, 4.2);
    double result_2 = my_max_6<double>(8, 5.2);
    std::cout << "result_1: " << result_1 << std::endl <<
                 "result_2: " << result_2 << std::endl;

    /*
     * 注意这里是不等于，因为返回的是临时变量的引用
     * 上面的result_1和result_2的值后面也可能发生变化，这样是危险的
     */
    EXPECT_NE(my_max_6<double>(8, 5.2), 8);
}

/*
 * my_max_7必须指定RT的类型，否则就编译失败，因为无法从函数调用推演（deduce）出RT的类型
 */
TEST_F(TemplateTest, TEST_MAX1_8) {
    EXPECT_EQ(my_max_7<double>(8, 5.2), 8);
}
