// Shape.h
#ifndef SHAPE_H
#define SHAPE_H

class Shape {
public:
    // Constructor
    Shape();

    // Destructor (virtual to ensure proper cleanup in derived classes)
    virtual ~Shape();

    // Pure virtual function to calculate area
    virtual double area() const = 0;

    // Overload == operator to compare shapes based on area
    bool operator==(const Shape& other) const;

    // Friend function to calculate total area of an array of shapes
    friend double totalArea(const Shape* shapes[], int count);
};

// Constructor definition
inline Shape::Shape() {
    // Common initialization if any
}

// Destructor definition
inline Shape::~Shape() {
    // Virtual destructor ensures proper cleanup
}

// Overload == operator definition
inline bool Shape::operator==(const Shape& other) const {
    return this->area() == other.area();
}

#endif // SHAPE_H
