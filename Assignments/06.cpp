#include <iostream>

class ComplexNumber {
private:
    double real;
    double imaginary;

public:
    // Constructor to create initialized objects
    ComplexNumber(double r, double i) : real(r), imaginary(i) {}

    // Function to display the complex number
    void display() const {
        std::cout << "Complex Number: " << real << " + " << imaginary << "i\n";
    }

    // Function to add two complex numbers
    ComplexNumber add(const ComplexNumber &c) const {
        double newReal = real + c.real;
        double newImaginary = imaginary + c.imaginary;
        return ComplexNumber(newReal, newImaginary);
    }

    // Function to subtract two complex numbers
    ComplexNumber subtract(const ComplexNumber &c) const {
        double newReal = real - c.real;
        double newImaginary = imaginary - c.imaginary;
        return ComplexNumber(newReal, newImaginary);
    }
};

int main() {
    double real1, imaginary1, real2, imaginary2;

    std::cout << "Enter real and imaginary parts of the first complex number: ";
    std::cin >> real1 >> imaginary1;

    std::cout << "Enter real and imaginary parts of the second complex number: ";
    std::cin >> real2 >> imaginary2;

    ComplexNumber c1(real1, imaginary1); // Creating initialized object for first complex number
    ComplexNumber c2(real2, imaginary2); // Creating initialized object for second complex number

    c1.display();
    c2.display();

    ComplexNumber sum = c1.add(c2); // Adding two complex numbers
    sum.display();

    ComplexNumber difference = c1.subtract(c2); // Subtracting two complex numbers
    difference.display();

    return 0;
}
