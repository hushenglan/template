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
    GeoObj() = default;
    virtual ~GeoObj() = default;

    virtual void draw() const = 0;
    virtual Coord center_of_gravity() const = 0;
};

class Circle : public GeoObj {
public:
    Circle();
    ~Circle();

    void draw() const override;
    Coord center_of_gravity() const override;

    void set_coord(Coord co);

private:
    Coord co;
};

class Line : public GeoObj {
public:
    Line();
    ~Line();

    void draw() const override;
    Coord center_of_gravity() const override;
};

#endif /* POLY_DYNAHIER_HPP_ */
