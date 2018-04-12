//
// Created by Will Smith on 4/12/18.
//

#ifndef SPRING2018_RECTANGLE_H
#define SPRING2018_RECTANGLE_H


#include <ostream>
#include "Shape.h"

class Rectangle: public Shape {
private:
    int width;
    int height;
public:

    Rectangle();

    Rectangle(int width, int height);

    int getWidth() const;

    void setWidth(int width);

    int getHeight() const;

    void setHeight(int height);

    double calcArea() override;

    friend std::ostream &operator<<(std::ostream &os, const Rectangle &rectangle);
};


#endif //SPRING2018_RECTANGLE_H
