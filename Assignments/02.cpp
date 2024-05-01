#include <iostream>
#include <vector>

class Vector {
private:
    std::vector<double> elements;

public:
    // Constructor to create the vector
    Vector(std::vector<double> inputElements) : elements(inputElements) {}

    // Function to modify the value of a given element
    void modifyElement(size_t index, double value) {
        if (index >= 0 && index < elements.size()) {
            elements[index] = value;
        } else {
            std::cout << "Invalid index\n";
        }
    }

    // Function to multiply the vector by a scalar value
    void multiplyByScalar(double scalar) {
        for (std::vector<double>::iterator it = elements.begin(); it != elements.end(); ++it) {
            *it *= scalar;
        }
    }

    // Function to display the vector
    void display() const {
        std::cout << "Vector: [";
        for (size_t i = 0; i < elements.size(); ++i) {
            std::cout << elements[i];
            if (i != elements.size() - 1) {
                std::cout << ", ";
            }
        }
        std::cout << "]\n";
    }
};

int main() {
    std::vector<double> inputElements;
    size_t size;
    double element, scalar;

    std::cout << "Enter the size of the vector: ";
    std::cin >> size;

    std::cout << "Enter " << size << " elements for the vector:\n";
    for (size_t i = 0; i < size; ++i) {
        std::cin >> element;
        inputElements.push_back(element);
    }

    Vector vec(inputElements); // Creating a vector with user-defined elements
    vec.display(); // Displaying the vector

    size_t modifyIndex;
    std::cout << "Enter the index of the element you want to modify: ";
    std::cin >> modifyIndex;
    std::cout << "Enter the new value for the element: ";
    std::cin >> element;
    vec.modifyElement(modifyIndex, element); // Modifying an element
    vec.display();

    std::cout << "Enter a scalar value to multiply the vector by: ";
    std::cin >> scalar;
    vec.multiplyByScalar(scalar); // Multiplying the vector by a scalar value
    vec.display();

    return 0;
}
