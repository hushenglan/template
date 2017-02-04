/*
 * global_environment.h
 *
 *  Created on: 2017年2月4日
 *      Author: blue
 */

#ifndef GLOBAL_ENVIRONMENT_H_
#define GLOBAL_ENVIRONMENT_H_

#include <gtest/gtest.h>

class GlobalEnvironment: public testing::Environment {
public:
    virtual void SetUp() {
        std::cout << "GlobalEnvironment SetUp" << std::endl;
    }

    virtual void TearDown() {
        std::cout << "GlobalEnvironment TearDown" << std::endl;
    }
};

#endif /* GLOBAL_ENVIRONMENT_H_ */
