/*
 * refnonref.cc
 *
 *  Created on: 2017年1月28日
 *      Author: blue
 */

#include "template_test.h"
#include "refnonref.hpp"

TEST_F(TemplateTest, TEST_REFNONREF_1) {
    ref("hello");

    const char* cc1 = "hello";
    ref(cc1);

    char* const cc2 = "hello";
    ref(cc2);

    std::string s;
    ref(s);

    int i;
    ref(i);

    double d;
    ref(d);
}

TEST_F(TemplateTest, TEST_REFNONREF_2) {
	nonref("hello");

    const char* cc1 = "hello";
    nonref(cc1);

    char* const cc2 = "hello";
    nonref(cc2);

    std::string s;
    nonref(s);

    int i;
    nonref(i);

    double d;
    nonref(d);
}


