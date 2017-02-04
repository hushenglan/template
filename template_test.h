/*
 * template_test.h
 *
 *  Created on:
 *      Author: blue
 */

#ifndef TEMPLATE_TEST_H_
#define TEMPLATE_TEST_H_

#include <gtest/gtest.h>

class TemplateTest: public ::testing::Test {
protected:
    virtual void SetUp() {
        std::cout << "TemplateTest SetUp" << std::endl;
    }

    virtual void TearDown() {
        std::cout << "TemplateTest TearDown" << std::endl;
    }
};

#endif /* TEMPLATE_TEST_H_ */
