#include <iostream>
#include <boost/lexical_cast.hpp>

#include "abs.h"

void testBoost() {
    int a = boost::lexical_cast<int>("123456");
    double b = boost::lexical_cast<double>("123.456");
    std::cout << a << std::endl;
    std::cout << b << std::endl;
}

void testAbs() {
    double dval = -0.88;
    float fval = -0.7878;

    std::cout << absVal(dval) << std::endl;
    std::cout << absVal(fval) << std::endl;
}

int main(int argc, char *args[])
{
    testBoost();
    testAbs();
}
