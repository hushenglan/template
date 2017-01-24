/*
 * zero_init.hpp
 *
 *  Created on: 2017年1月24日
 *      Author: blue
 */

#ifndef PRIMER_ZERO_INIT_HPP_
#define PRIMER_ZERO_INIT_HPP_

int foo_int() {
	int x;
	return x;
}

int foo_float() {
	float x;
	return x;
}

int foo_long() {
	long x;
	return x;
}

int foo_double() {
	double x;
	return x;
}

int foo_bool() {
	bool x;
	return x;
}

template<typename T>
T foo() {
	T x = T();
	return x;
}

template<typename T>
class ZeroInitClass {
private:
	T x;

public:
	ZeroInitClass() : x() {
	}

	T const& get() {
		return x;
	}
};

template<typename T>
class NoInitClass {
private:
	T x;

public:
	NoInitClass() {
	}

	T const& get() {
		return x;
	}
};


#endif /* PRIMER_ZERO_INIT_HPP_ */
