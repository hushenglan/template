/*
 * csm2.cc
 *
 *  Created on: 2017年2月25日
 *      Author: blue
 */

#include "csmtraits.hpp"
#include "template_test.hpp"

class MyPODType {
public:
    MyPODType() {
    }

    MyPODType(int i, char a, long l) : i(i), a(a), l(l) {
    }

    int i = 5;
    char a = 93;
    long l = 6;

    void print_info() {
        std::cout << i << " " << a << " " << l << std::endl;
    }
};

template<>
class CSMtraits<MyPODType> : public BitOrClassCSM<MyPODType, true> {
};

TEST_F(TemplateTest, TEST_CSM2_1) {
    MyPODType m1(10, 100, 100), m2;
    CSMtraits<MyPODType>::copy_n(&m1, &m2, sizeof(MyPODType));
    m1.print_info();
    m2.print_info();
}


