#include <iostream>

// Function with one parameter
void print(int num) {
    std::cout << "Printing integer: " << num << std::endl;
}

// Function with two parameters
void print(int num1, int num2) {
    std::cout << "Printing integers: " << num1 << " and " << num2 << std::endl;
}

// Function with a different data type parameter
void print(double num) {
    std::cout << "Printing double: " << num << std::endl;
}

int main() {
    print(10);              // Calls the function with one parameter
    print(20, 30);          // Calls the function with two parameters
    print(3.14);            // Calls the function with a different data type parameter

    return 0;
}