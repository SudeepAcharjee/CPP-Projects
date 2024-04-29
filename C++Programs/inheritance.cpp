#include <iostream>
using namespace std;

// Base class
class Shape {
protected:
    double width;
    double height;

public:
    Shape(double w, double h) : width(w), height(h) {}

    virtual double area() const {
        return 0;
    }

    void display() const {
        cout << "Width: " << width << ", Height: " << height << endl;
    }
};

// Derived class
class Rectangle : public Shape {
public:
    Rectangle(double w, double h) : Shape(w, h) {}

    double area() const override {
        return width * height;
    }
};

// Derived class
class Triangle : public Shape {
public:
    Triangle(double w, double h) : Shape(w, h) {}

    double area() const override {
        return 0.5 * width * height;
    }
};

int main() {
    Rectangle rect(5, 10);
    Triangle tri(5, 10);

    cout << "Rectangle Area: " << rect.area() << endl;
    cout << "Triangle Area: " << tri.area() << endl;

    rect.display();
    tri.display();

    return 0;
}
