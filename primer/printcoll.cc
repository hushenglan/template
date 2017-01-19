/*
 * printcoll.cc
 *
 *  Created on: 2017年1月17日
 *      Author: lenovo
 */

#include "template_test.h"
#include "printcoll.hpp"
#include <vector>

TEST_F(TemplateTest, TEST_PRINTCOLL_1) {
	std::vector<int> v{1, 2, 3, 4, 5, 6};
	printcoll(v);
}

TEST_F(TemplateTest, TEST_PRINTCOLL_2) {
	std::vector<int> v{1, 2, 3, 4, 5, 6};
	printcoll_1(v);
}

TEST_F(TemplateTest, TEST_PRINTCOLL_3) {
	std::bitset<8> bs_1(0xf0);      // [1,1,1,1,0,0,0,0]
	printBitset<8>(bs_1);
	//printBitset(bs_1);

	std::bitset<8> bs_2(0xfff0);      // [1,1,1,1,0,0,0,0]
	printBitset<8>(bs_2);

	EXPECT_EQ(bs_1, bs_2);
	EXPECT_EQ(bs_1 == bs_2, true);
	EXPECT_EQ(bs_1 == bs_2, 1);
}

TEST_F(TemplateTest, TEST_DERIVED_1) {
	Derived<int> d;
	d.foo_1();
	d.foo_2();
}


