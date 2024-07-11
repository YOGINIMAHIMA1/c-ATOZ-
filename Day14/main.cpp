#include <iostream>
#include "Rectangle.h"
#include "Circle.h"
#include "totalArea.h"

int main() {
    // Create shapes
    Rectangle rect(3.0, 4.0);
    Circle circle(2.5);

    // Test overridden area functions
    std::cout << "Area of Rectangle: " << rect.area() << std::endl;
    std::cout << "Area of Circle: " << circle.area() << std::endl;

    // Test comparison using ==
    if (rect == circle) {
        std::cout << "The rectangle and circle have the same area." << std::endl;
    } else {
        std::cout << "The rectangle and circle do not have the same area." << std::endl;
    }

    // Create an array of Shape pointers
    const Shape* shapes[] = { &rect, &circle };

    // Calculate total area using friend function
    double total = totalArea(shapes, 2);
    std::cout << "Total area of shapes: " << total << std::endl;

    return 0;
}
