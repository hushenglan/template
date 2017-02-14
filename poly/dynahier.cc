/*
 * dynahier.cc
 *
 *  Created on: 2017年2月13日
 *      Author: blue
 */

#include "dynahier.hpp"


Circle::Circle() {
    std::cout << "call Circle::Circle()" << std::endl;
}

Circle::~Circle() {
    std::cout << "call Circle::~Circle()" << std::endl;
}

void Circle::draw() const {
    std::cout << "call Circle::draw()" << std::endl;
}

Coord Circle::center_of_gravity() const {
    std::cout << "call Circle::center_of_gravity()" << std::endl;
    Coord c(1, 1);
    std::cout << "inner c address: " << static_cast<const void *>(&c) << std::endl;
    return c;
}

void Circle::set_coord(Coord co) {
    std::cout << "inner c address: " << static_cast<const void *>(&co) << std::endl;
    this->co = co;
}


Line::Line() {
    std::cout << "call Line::Line()" << std::endl;
}

Line::~Line() {
    std::cout << "call Line::~Line()" << std::endl;
}

void Line::draw() const {
    std::cout << "call Line::draw()" << std::endl;
}

Coord Line::center_of_gravity() const {
    std::cout << "call Line::center_of_gravity()" << std::endl;
    Coord c(2, 2);
    return c;
}


