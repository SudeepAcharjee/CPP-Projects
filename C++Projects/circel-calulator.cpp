#include <iostream>
using namespace std;

class Circle {
private:
    float radius;

public:
    // Constructor to initialize radius
    Circle(float r) : radius(r) {}

    // Function to compute area of the circle
    float area() {
        return 3.14159 * radius * radius;
    }

    // Function to compute perimeter (circumference) of the circle
    float perimeter() {
        return 2 * 3.14159 * radius;
    }
};

int main() {
    float r;

    // Get user input for radius
    cout << "Enter the radius of the circle: ";
    cin >> r;

    // Create Circle object with user-provided radius
    Circle circle(r);

    // Calculate and display area of the circle
    cout << "Area of the circle: " << circle.area() << endl;

    // Calculate and display perimeter (circumference) of the circle
    cout << "Perimeter of the circle: " << circle.perimeter() << endl;

    return 0;
}
