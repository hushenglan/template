/*
 * coord.hpp
 *
 *  Created on: 2017年2月13日
 *      Author: blue
 */

#ifndef POLY_COORD_HPP_
#define POLY_COORD_HPP_


#include <cstdlib>
#include <iostream>

class Coord {
private:
    int x, y;

public:
    Coord(int i1, int i2) : x(i1), y(i2) {
    }

    Coord(Coord const& other) {
        std::cout << "call Coord(Coord const& other)" << std::endl;
        this->x = other.x;
        this->y = other.y;
    }

    Coord& operator=(Coord const& other) {
        std::cout << "call operator=(Coord const& other)" << std::endl;
        this->x = other.x;
        this->y = other.y;
        return *this;
    }

    friend bool operator<(Coord const& a, Coord const& b) {
        std::cout << "call operator<(Coord const& a, Coord const& b)" << std::endl;
        return (a.x < b.x) && (a.y < b.y);
    }

    friend Coord operator-(Coord const& c1, Coord const& c2) {
        return Coord(c1.x - c2.x, c1.y - c2.y);
    }

    Coord abs() {
        return Coord(std::abs(x), std::abs(y));
    }
};


#endif /* POLY_COORD_HPP_ */
