/*
 * abs.h
 *
 *  Created on:
 *      Author: blue
 */

#ifndef PRIMER_ABS_HPP_
#define PRIMER_ABS_HPP_

template<typename T>
T absVal(T val) {
	return val > 0 ? val : -val;
}

#endif /* PRIMER_ABS_HPP_ */
