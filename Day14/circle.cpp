// Circle.cpp
#include "Circle.h"

Circle::Circle(double r)
    : radius(r) {
}

Circle::~Circle() {
}

double Circle::area() const {
    return 3.14159 * radius * radius; // Using a simple approximation of pi
}
