/*
 * csmtraits.hpp
 *
 *  Created on: 2017年2月25日
 *      Author: blue
 */

#ifndef TRAITS_CSMTRAITS_HPP_
#define TRAITS_CSMTRAITS_HPP_

#include "csm2.hpp"

template<typename T>
class CSMtraits : public BitOrClassCSM<T, IsClassT<T>::No> {
};

#endif /* TRAITS_CSMTRAITS_HPP_ */
