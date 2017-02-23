/*
 * isclasst.cc
 *
 *  Created on: 2017年2月23日
 *      Author: blue
 */

#include "isclasst.hpp"
#include "template_test.hpp"
#include <iostream>

class MyClass {
};

struct MyStruct {
};

union MyUnion {
};

void myfunc() {
}

enum E{e1} e;



template <typename T>
void check() {
    if (IsClassT<T>::Yes) {
        std::cout << " IsClassT " << std::endl;
    } else {
        std::cout << " !IsClassT " << std::endl;
    }
}

template<typename T>
void checkT(T) {
    check<T>();
}

TEST_F(TemplateTest, TEST_ISCLASST_1) {
    std::cout << "int: ";
    check<int>();

    std::cout << "MyClass: ";
    check<MyClass>();

    std::cout << "MyStruct:";
    MyStruct s;
    checkT(s);

    std::cout << "MyUnion: ";
    check<MyUnion>();

    std::cout << "enum:  ";
    checkT(e);

    std::cout << "myfunc():";
    checkT(myfunc);
}


