/*
 * mysecondstack_inst.cc
 *
 *  Created on: 2017年1月31日
 *      Author: blue
 */

#include "mysecondstackdef.hpp"
#include <string>

/*
 * 类模版的显式实例化
 */
template class MySecondStack<int>;

/*
 * 成员函数的显式实例化
 */
template MySecondStack<std::string>::MySecondStack();
template void MySecondStack<std::string>::push(std::string const&);
template std::string MySecondStack<std::string>::top() const;



