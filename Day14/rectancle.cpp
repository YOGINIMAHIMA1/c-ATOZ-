// Rectangle.cpp
#include "Rectangle.h"

Rectangle::Rectangle(double l, double w)
    : length(l), width(w) {
}

Rectangle::~Rectangle() {
}

double Rectangle::area() const {
    return length * width;
}
