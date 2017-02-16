/*
 * zero_init.cc
 *
 *  Created on: 2017年1月24日
 *      Author: blue
 */

#include "zero_init.hpp"
#include "../template_test.hpp"

TEST_F(TemplateTest, TEST_ZERO_INIT_1) {
	std::cout << "foo_int:" << foo_int() << std::endl;
	std::cout << "foo_float:" << foo_float() << std::endl;
	std::cout << "foo_long:" << foo_long() << std::endl;
	std::cout << "foo_double:" << foo_double() << std::endl;
	std::cout << "foo_bool:" << foo_bool() << std::endl;


	std::cout << "foo<int>:" << foo<int>() << std::endl;
	std::cout << "foo<float>:" << foo<float>() << std::endl;
	std::cout << "foo<long>:" << foo<long>() << std::endl;
	std::cout << "foo<double>:" << foo<double>() << std::endl;
	std::cout << "foo<bool>:" << foo<bool>() << std::endl;
}

TEST_F(TemplateTest, TEST_ZERO_INIT_2) {
	ZeroInitClass<int> zc_1;
	std::cout << "ZeroInitClass<int> get:" << zc_1.get() << std::endl;
	ZeroInitClass<float> zc_2;
	std::cout << "ZeroInitClass<float> get:" << zc_2.get() << std::endl;
	ZeroInitClass<long> zc_3;
	std::cout << "ZeroInitClass<long> get:" << zc_3.get() << std::endl;
	ZeroInitClass<double> zc_4;
	std::cout << "ZeroInitClass<double> get:" << zc_4.get() << std::endl;
	ZeroInitClass<bool> zc_5;
	std::cout << "ZeroInitClass<bool> get:" << zc_5.get() << std::endl;

	NoInitClass<int> nc_1;
	std::cout << "NoInitClass<int> get:" << nc_1.get() << std::endl;
	NoInitClass<float> nc_2;
	std::cout << "NoInitClass<float> get:" << nc_2.get() << std::endl;
	NoInitClass<long> nc_3;
	std::cout << "NoInitClass<long> get:" << nc_3.get() << std::endl;
	NoInitClass<double> nc_4;
	std::cout << "NoInitClass<double> get:" << nc_4.get() << std::endl;
	NoInitClass<bool> nc_5;
	std::cout << "NoInitClass<bool> get:" << nc_5.get() << std::endl;
}


