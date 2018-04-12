//
// Created by Will Smith on 4/12/18.
//
#include "Shape.h"
#include "Triangle.h"
#include "Rectangle.h"
#include "Square.h"
#include "Circle.h"
#include "Dodec.h"

#include <iostream>
#include <vector>
using namespace std;


int main(){


    Shape* shape1 = new Circle;
    Shape* shape2 = new Circle(2,4);

    Shape* shape3 = new Triangle;
    Shape* shape4 = new Triangle(4,7);

    Shape* shape5 = new Rectangle;
    Shape* shape6 = new Rectangle(6,8);

    Shape* shape7 = new Square;
    Shape *shape8 = new Square(9);

    vector<Shape *> myShapes;

    //cout<<"area = "<<shape4->calcArea()<<endl;


    myShapes.push_back(shape2);
    myShapes.push_back(shape4);
    myShapes.push_back(shape6);
    myShapes.push_back(shape8);

    for (int i = 0; i < myShapes.size(); ++i) {
        cout<<myShapes.at(i)->calcArea()<<endl;

    }

    Rectangle rect(7,3);

    cout<<rect<<endl;


    /*cout<<"Circle area is: "<<myCircle.calcArea()<<endl;
    cout<<"Circle2 area is: "<<myCircle2.calcArea()<<endl;

    cout<<"Triangle area is: "<<myTriangle.calcArea()<<endl;
    cout<<"Triangle2 area is: "<<myTriangle2.calcArea()<<endl;

    cout<<"Rectangle area is: "<<myRectangle.calcArea()<<endl;
    cout<<"Rectangle2 area is: "<<myRectangle2.calcArea()<<endl;

    cout<<"Square area is: "<<mySquare.calcArea()<<endl;
    cout<<"Square2 area is: "<<mySquare2.calcArea()<<endl;*/






    return 0;
}