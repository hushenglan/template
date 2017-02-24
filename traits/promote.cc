/*
 * promote.cc
 *
 *  Created on: 2017年2月24日
 *      Author: blue
 */

#include "promote.hpp"
#include "template_test.hpp"

template<typename T1, typename T2>
typename Promotion<T1, T2>::ResultT my_max(T1 x, T2 y) {
    return x + y;
}

TEST_F(TemplateTest, TEST_PROMOTE_1) {
    bool b = true;
    char c = 'a';
    auto z = my_max(b, c);
    std::cout << "z: " << z << ", z type: " << typeid(z).name() << std::endl;
}


