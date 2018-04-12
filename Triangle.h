//
// Created by Will Smith on 4/12/18.
//

#ifndef SPRING2018_TRIANGLE_H
#define SPRING2018_TRIANGLE_H


#include "Shape.h"

class Triangle: public Shape {
private:
    int base;
    int height;

public:
    Triangle();

    Triangle(int base, int height);

    int getBase() const;

    void setBase(int base);

    int getHeight() const;

    void setHeight(int height);

    double calcArea() override;

};


#endif //SPRING2018_TRIANGLE_H
