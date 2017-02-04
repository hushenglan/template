/*
 * tracer_test.hpp
 *
 *  Created on: 2017年2月4日
 *      Author: blue
 */

#ifndef PRIMER_TRACER_TEST_HPP_
#define PRIMER_TRACER_TEST_HPP_

#include <gtest/gtest.h>
#include "tracer.hpp"

class TracerTest : public ::testing::Test
{
protected:
    virtual void SetUp() {
    	std::cout << "TracerTest SetUp" << std::endl;
    	SortTracer::init();
    }

    virtual void TearDown() {
    	std::cout << "TracerTest TearDown" << std::endl;
    }
};


#endif /* PRIMER_TRACER_TEST_HPP_ */
