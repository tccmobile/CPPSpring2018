//
// Created by Will Smith on 4/12/18.
//

#include "Square.h"

Square::Square() {}

Square::Square(int side) : Rectangle(side, side) {}

double Square::calcArea() {
    return Rectangle::calcArea();
}

int Square::getSide() {
    return getHeight();
}

void Square::setSide(int side) {
    setHeight(side);
    setWidth(side);
}
