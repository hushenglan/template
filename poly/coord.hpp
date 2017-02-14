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
#include <string>

class Coord {
private:
    int x, y;

public:
    Coord() : x(0), y(0) {
        std::cout << "call Coord::Coord()" << std::endl;
    }

    Coord(int i1, int i2) : x(i1), y(i2) {
        std::cout << "call Coord::Coord(int i1, int i2)" << std::endl;
    }

    Coord(Coord const& other) {
        std::cout << "call Coord::Coord(Coord const& other)" << std::endl;
        this->x = other.x;
        this->y = other.y;
    }

    ~Coord() {
        std::cout << "call Coord::~Coord()" << std::endl;
    }

    Coord& operator=(Coord const& other) {
        std::cout << "call Coord::operator=(Coord const& other)" << std::endl;
        this->x = other.x;
        this->y = other.y;
        return *this;
    }

    friend bool operator<(Coord const& a, Coord const& b) {
        std::cout << "call Coord::operator<(Coord const& a, Coord const& b)" << std::endl;
        return (a.x < b.x) && (a.y < b.y);
    }

    friend Coord operator-(Coord const& c1, Coord const& c2) {
        std::cout << "call Coord::operator-(Coord const& c1, Coord const& c2)" << std::endl;
        return Coord(c1.x - c2.x, c1.y - c2.y);
    }

    Coord abs() {
        std::cout << "call Coord::abs()" << std::endl;
        return Coord(std::abs(x), std::abs(y));
    }

    std::string to_string() {
        return "x = " + std::to_string(this->x) + ", y = " + std::to_string(this->y);
    }
};


#endif /* POLY_COORD_HPP_ */
