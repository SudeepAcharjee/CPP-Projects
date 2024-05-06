#include <iostream>
using namespace std;

class complex {
private:
    float real;
    float imag;

public:
    // Constructors
    complex() : real(0), imag(0) {}  // Default constructor
    complex(float r) : real(r), imag(0) {}  // Constructor with one argument
    complex(float r, float i) : real(r), imag(i) {}  // Constructor with two arguments

    // Member functions
    float rpart() { return real; }
    float ipart() { return imag; }

    // Add two complex numbers
    complex add(complex c) {
        complex temp;
        temp.real = real + c.real;
        temp.imag = imag + c.imag;
        return temp;
    }

    // Multiply two complex numbers
    complex mul(complex c) {
        complex temp;
        temp.real = (real * c.real) - (imag * c.imag);
        temp.imag = (real * c.imag) + (imag * c.real);
        return temp;
    }
};

int main() {
    complex c1;  // Default constructor
    complex c2(3);  // Constructor with one argument
    complex c3(2, 5);  // Constructor with two arguments

    cout << "Real part of c1: " << c1.rpart() << ", Imaginary part of c1: " << c1.ipart() << endl;
    cout << "Real part of c2: " << c2.rpart() << ", Imaginary part of c2: " << c2.ipart() << endl;
    cout << "Real part of c3: " << c3.rpart() << ", Imaginary part of c3: " << c3.ipart() << endl;

    complex sum = c2.add(c3);
    cout << "Sum of c2 and c3: " << sum.rpart() << " + " << sum.ipart() << "i" << endl;

    complex product = c2.mul(c3);
    cout << "Product of c2 and c3: " << product.rpart() << " + " << product.ipart() << "i" << endl;

    return 0;
}
