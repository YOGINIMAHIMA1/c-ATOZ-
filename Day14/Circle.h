// Circle.h
#ifndef CIRCLE_H
#define CIRCLE_H

#include "Shape.h"

class Circle : public Shape {
private:
    double radius;

public:
    // Constructors
    Circle(double r);
    
    // Destructor
    ~Circle() override;

    // Override area function to calculate area of circle
    double area() const override;
};

#endif // CIRCLE_H
