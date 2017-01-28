/*
 * max5.hpp
 *
 *  Created on: 2017年1月28日
 *      Author: blue
 */

#ifndef PRIMER_MAX5_HPP_
#define PRIMER_MAX5_HPP_


template<typename T>
inline T const& max51(T const& a, T const& b) {
	return a < b ? b : a;
}

template<typename T>
inline T const max52(T const a, T const b) {
	return a < b ? b : a;
}


#endif /* PRIMER_MAX5_HPP_ */
