/*
 * dynahier.cc
 *
 *  Created on: 2017年2月13日
 *      Author: blue
 */

#include "dynahier.hpp"


GeoObj::~GeoObj() {
}


Circle::Circle() {
}

Circle::~Circle() {
}

void Circle::draw() const {
}

Coord Circle::center_of_gravity() const {
    Coord c(1, 1);
    return c;
}


Line::Line() {
}

Line::~Line() {
}

void Line::draw() const {
}

Coord Line::center_of_gravity() const {
    Coord c(2, 2);
    return c;
}
