#include <iostream>
using namespace std;

class Circle {
private:
    double radius;

public:
    // Setter method to set the radius
    void setRadius(double r) {
        if (r > 0) {
            radius = r;
        } else {
            cout << "Invalid radius. Setting default radius to 1." << endl;
            radius = 1.0;
        }
    }

    // Getter method to get the radius
    double getRadius() const {
        return radius;
    }

    // Method to calculate and return the area
    double calculateArea() const {
        return 3.14159 * radius * radius;
    }
};

int main() {
    Circle c1;
    c1.setRadius(5.0); // Setting the radius using the setter method
    cout << "Radius: " << c1.getRadius() << endl; // Getting the radius using the getter method
    cout << "Area: " << c1.calculateArea() << endl; // Calculating and printing the area
    return 0;
}
