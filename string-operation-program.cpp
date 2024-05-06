#include <iostream>
#include <cstring>  // For strlen, strcpy, and strcmp
using namespace std;

class MyString {
private:
    char *p;
    int size;

public:
    // Constructors
    MyString() : p(nullptr), size(0) {}  // Default constructor
    MyString(const char *str) {  // Constructor with one argument
        size = strlen(str);
        p = new char[size + 1];
        strcpy(p, str);
    }

    // Copy constructor
    MyString(const MyString &s) {
        size = s.size;
        p = new char[size + 1];
        strcpy(p, s.p);
    }

    // Destructor
    ~MyString() {
        delete[] p;
    }

    // Member functions
    int length() {
        return size;
    }

    int compare(MyString s) {
        return strcmp(p, s.p);
    }

    void copy(MyString &s) {
        delete[] p;  // Delete old content if any
        size = s.size;
        p = new char[size + 1];
        strcpy(p, s.p);
    }

    void reverse() {
        int i = 0, j = size - 1;
        while (i < j) {
            char temp = p[i];
            p[i] = p[j];
            p[j] = temp;
            i++;
            j--;
        }
    }

    // Display function
    void display() {
        cout << p;
    }
};

int main() {
    MyString s1("Hello");
    MyString s2("World");

    MyString s3;  // Fix: Use custom string class instead of standard string class
    s3.copy(s1);
    std::cout << "Copied string s1 to s3: ";
    s3.display();
    std::cout << std::endl;

    return 0;
}
