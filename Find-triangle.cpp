#include<iostream>
using namespace std;
class Triangle {
private:
    float side1, side2, side3;

public:
    // Constructor to initialize the triangle with side lengths
    Triangle(float s1, float s2, float s3) : side1(s1), side2(s2), side3(s3) {}

    // Function to check if the triangle is isosceles
    void checkIsosceles() {
        if (side1 == side2 && side1 != side3) {
            cout << "The triangle is isosceles.\n";
        } else if (side1 == side3 && side1 != side2) {
            cout << "The triangle is isosceles.\n";
        } else if (side2 == side3 && side2 != side1) {
            cout << "The triangle is isosceles.\n";
        } else {
            cout << "The triangle is not isosceles.\n";
        }
    }

    // Function to check if the triangle is equilateral
    void checkEquilateral() {
        if (side1 == side2 && side1 == side3) {
            cout << "The triangle is equilateral.\n";
        } else {
            cout << "The triangle is not equilateral.\n";
        }
    }
};

int main() {
    float s1, s2, s3;

    // Getting user input for triangle side lengths
    cout << "Enter the lengths of the three sides of the triangle:\n";
    cin >> s1 >> s2 >> s3;

    // Creating a Triangle object with user-provided side lengths
    Triangle triangle(s1, s2, s3);

    // Checking if the triangle is isosceles
    triangle.checkIsosceles();

    // Checking if the triangle is equilateral
    triangle.checkEquilateral();

    return 0;
}
