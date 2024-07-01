/*Create a base class Shape with a pure virtual function draw() that has no implementation. Derive classes Square, Circle, and Triangle from Shape. Each derived class should override draw() to provide its specific drawing behavior (e.g., printing "****" for square, "OOO" for circle, etc.). Write a function printShape(Shape* shape) that takes a base class pointer and calls draw() on it. 
Demonstrate polymorphism by creating objects of the derived classes, storing them in a Shape* array, and calling printShape() on each element. */


#include <iostream>
using namespace std;

// Base class Shape with a pure virtual function draw()
class Shape {
public:
    virtual void draw() = 0; // Pure virtual function
    virtual ~Shape() {} // Virtual destructor
};

// Derived class Square
class Square : public Shape {
public:
    void draw() override {
        cout << "****" << endl;
    }
};

// Derived class Circle
class Circle : public Shape {
public:
    void draw() override {
        cout << " OOO " << endl;
        cout << "OOOOO" << endl;
        cout << " OOO " << endl;
    }
};

// Derived class Triangle
class Triangle : public Shape {
public:
    void draw() override {
        cout << "  *  " << endl;
        cout << " *** " << endl;
        cout << "*****" << endl;
    }
};

// Function that takes a Shape pointer and calls draw() on it
void printShape(Shape* shape) {
    shape->draw();
}

int main() {
    // Create objects of derived classes
    Square square;
    Circle circle;
    Triangle triangle;

    // Store them in a Shape* array
    Shape* shapes[] = { &square, &circle, &triangle };

    // Demonstrate polymorphism
    for (Shape* shape : shapes) {
        printShape(shape);
        cout << endl;
    }

    return 0;
}














