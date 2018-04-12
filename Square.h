//
// Created by Will Smith on 4/12/18.
//

#ifndef SPRING2018_SQUARE_H
#define SPRING2018_SQUARE_H


#include "Rectangle.h"

class Square: public Rectangle {

public:

    Square();

    Square(int side);

    void setSide(int side);

    int getSide();

    double calcArea() override;

};


#endif //SPRING2018_SQUARE_H
