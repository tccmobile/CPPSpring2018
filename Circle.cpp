//
// Created by Will Smith on 4/12/18.
//

#include "Circle.h"

int Circle::getCircum() const {
    return circum;
}

void Circle::setCircum(int circum) {
    Circle::circum = circum;
}

int Circle::getRadius() const {
    return radius;
}

void Circle::setRadius(int radius) {
    Circle::radius = radius;
}

Circle::Circle() {
    radius = 0;
    circum = 0;
}

Circle::Circle(int circum, int radius) : circum(circum), radius(radius) {}

double Circle::calcArea() {
    return 3.14159 * (radius * radius);
}
