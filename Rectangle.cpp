//
// Created by Will Smith on 4/12/18.
//

#include "Rectangle.h"

Rectangle::Rectangle() {width=height=0;}

Rectangle::Rectangle(int width, int height) : width(width), height(height) {}

int Rectangle::getWidth() const {
    return width;
}

void Rectangle::setWidth(int width) {
    Rectangle::width = width;
}

int Rectangle::getHeight() const {
    return height;
}

void Rectangle::setHeight(int height) {
    Rectangle::height = height;
}

double Rectangle::calcArea() {
    return width * height;
}

std::ostream &operator<<(std::ostream &os, const Rectangle &rectangle) {
    os << " width: " << rectangle.width << " height: " << rectangle.height;
    return os;
}
