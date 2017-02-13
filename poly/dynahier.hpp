/*
 * dynahier.hpp
 *
 *  Created on: 2017年2月13日
 *      Author: blue
 */

#ifndef POLY_DYNAHIER_HPP_
#define POLY_DYNAHIER_HPP_


#include "coord.hpp"

class GeoObj {
public:
    virtual ~GeoObj();

    virtual void draw() const = 0;
    virtual Coord center_of_gravity() const = 0;
};

class Circle : public GeoObj {
public:
    Circle();
    virtual ~Circle();

    virtual void draw() const;
    virtual Coord center_of_gravity() const;
};

class Line : public GeoObj {
public:
    Line();
    virtual ~Line();

    virtual void draw() const;
    virtual Coord center_of_gravity() const;
};

#endif /* POLY_DYNAHIER_HPP_ */
