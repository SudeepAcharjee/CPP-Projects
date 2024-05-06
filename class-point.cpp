#include <iostream>
#include <cmath>
using namespace std;

class point {
private:
    float xordinate;
    float yordinate;

public:
    // Constructors
    point() : xordinate(0), yordinate(0) {}  // Default constructor
    point(float x) : xordinate(x), yordinate(0) {}  // Constructor with one argument
    point(float x, float y) : xordinate(x), yordinate(y) {}  // Constructor with two arguments

    // Member functions
    float dist() {
        return sqrt(xordinate * xordinate + yordinate * yordinate);
    }

    float slope() {
        if (xordinate == 0) {
            return INFINITY;  // Vertical line, slope is infinity
        } else {
            return yordinate / xordinate;
        }
    }

    // Friend function to compute distance between two points
    friend float distance(point p1, point p2) {
        float dx = p2.xordinate - p1.xordinate;
        float dy = p2.yordinate - p1.yordinate;
        return sqrt(dx * dx + dy * dy);
    }
};

int main() {
    point p1;  // Default constructor
    point p2(3);  // Constructor with one argument
    point p3(2, 5);  // Constructor with two arguments

    cout << "Distance of p1 from origin: " << p1.dist() << endl;
    cout << "Slope of line from p1 to origin: " << p1.slope() << endl;

    cout << "Distance of p2 from origin: " << p2.dist() << endl;
    cout << "Slope of line from p2 to origin: " << p2.slope() << endl;

    cout << "Distance of p3 from origin: " << p3.dist() << endl;
    cout << "Slope of line from p3 to origin: " << p3.slope() << endl;

    cout << "Distance between p2 and p3: " << distance(p2, p3) << endl;

    return 0;
}
