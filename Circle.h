//
// Created by Will Smith on 4/12/18.
//

#ifndef SPRING2018_CIRCLE_H
#define SPRING2018_CIRCLE_H


#include "Shape.h"

class Circle: public Shape {
private:
    int circum;
    int radius;
public:

    int getCircum() const;

    void setCircum(int circum);

    int getRadius() const;

    void setRadius(int radius);

    Circle();

    Circle(int circum, int radius);

    double calcArea() override;

};


#endif //SPRING2018_CIRCLE_H
