#include "lexical.h"

void testBoost() {
    int a = boost::lexical_cast<int>("123456");
    double b = boost::lexical_cast<double>("123.456");
    std::cout << a << std::endl;
    std::cout << b << std::endl;
}
