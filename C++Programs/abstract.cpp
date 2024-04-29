#include <iostream>

// Abstract class
class Shape {
public:
    // Pure virtual function
    virtual void draw() = 0;
};

// Concrete class derived from Shape
class Circle : public Shape {
public:
    void draw() {
        std::cout << "Drawing a circle." << std::endl;
    }
};

// Concrete class derived from Shape
class Rectangle : public Shape {
public:
    void draw() {
        std::cout << "Drawing a rectangle." << std::endl;
    }
};

int main() {
    // Create objects of concrete classes
    Circle circle;
    Rectangle rectangle;

    // Call the draw() function on the objects
    circle.draw();
    rectangle.draw();

    return 0;
}