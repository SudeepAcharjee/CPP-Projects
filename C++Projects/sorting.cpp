#include <iostream>
#include <algorithm>

template <typename T, size_t N>
class Array {
private:
    T elements[N];

public:
    Array() {}

    // Overload the >> operator to input elements into the array
    friend std::istream& operator>>(std::istream& in, Array& arr) {
        for (size_t i = 0; i < N; ++i) {
            in >> arr.elements[i];
        }
        return in;
    }

    // Overload the << operator to output elements of the array
    friend std::ostream& operator<<(std::ostream& out, const Array& arr) {
        for (size_t i = 0; i < N; ++i) {
            out << arr.elements[i] << " ";
        }
        return out;
    }

    // Sort the array in descending order using std::sort
    void sortDescending() {
        std::sort(elements, elements + N, std::greater<T>());
    }
};

int main() {
    // Create an Array object of integers with size 5
    Array<int, 5> intArray;

    // Input elements into the array
    std::cout << "Enter 5 integers:\n";
    std::cin >> intArray;

    // Display the original array
    std::cout << "Original array: " << intArray << std::endl;

    // Sort the array in descending order
    intArray.sortDescending();

    // Display the sorted array
    std::cout << "Sorted array (descending order): " << intArray << std::endl;

    return 0;
}
