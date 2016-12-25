#include <iostream>
#include "abs.h"

void testAbs() {
    double dval = -0.88;
    float fval = -0.7878;

    std::cout << absVal(dval) << std::endl;
    std::cout << absVal(fval) << std::endl;
}
