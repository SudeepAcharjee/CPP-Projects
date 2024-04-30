#include <iostream>
#include <cstring>  // For strcpy and strcmp
using namespace std;

class string {
private:
    char *p;
    int size;

public:
    // Constructors
    string() : p(nullptr), size(0) {}  // Default constructor
    string(const char *str) {  // Constructor with one argument
        size = strlen(str);
        p = new char[size + 1];
        strcpy(p, str);
    }

    // Copy constructor
    string(const string &s) {
        size = s.size;
        p = new char[size + 1];
        strcpy(p, s.p);
    }

    // Destructor
    ~string() {
        delete[] p;
    }

    // Member functions
    int length() {
        return size;
    }

    int compare(string s) {
        return strcmp(p, s.p);
    }

    void copy(string &s) {
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
    string s1("Hello");
    string s2("World");

    std::string s3;
    s3.copy(s1);
    std::cout << "Copied string s1 to s3: ";
    s3.display();
    std::cout << std::endl;

    return 0;
}
