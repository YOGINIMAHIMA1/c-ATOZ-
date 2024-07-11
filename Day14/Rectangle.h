// Rectangle.h
#ifndef RECTANGLE_H
#define RECTANGLE_H

#include "Shape.h"

class Rectangle : public Shape {
private:
    double length;
    double width;

public:
    // Constructors
    Rectangle(double l, double w);
    
    // Destructor
    ~Rectangle() override;

    // Override area function to calculate area of rectangle
    double area() const override;
};

#endif // RECTANGLE_H
