/*
 * max5.cc
 *
 *  Created on: 2017年1月28日
 *      Author: blue
 */

#include "max5.hpp"
#include <string>
#include "../template_test.hpp"

TEST_F(TemplateTest, TEST_MAX5_1) {
    std::string s;

    ::max51("12345", "67890");
    //::max51("12345", "567890"); 	// 不同的参数类型
    //::max51("12345", s);			// 不同的参数类型
}

TEST_F(TemplateTest, TEST_MAX5_2) {
    std::string s;

    ::max52("12345", "67890");
    ::max52("12345", "567890");
    //::max52("12345", s);			// 不同的参数类型
}

