//
// Created by Will Smith on 4/12/18.
//

#include "Triangle.h"

Triangle::Triangle() { base=height=0;}

Triangle::Triangle(int base, int height) : base(base), height(height) {}

int Triangle::getBase() const {
    return base;
}

void Triangle::setBase(int base) {
    Triangle::base = base;
}

int Triangle::getHeight() const {
    return height;
}

void Triangle::setHeight(int height) {
    Triangle::height = height;
}

double Triangle::calcArea() {
    return (1.0/2.0)*base*height;
}
