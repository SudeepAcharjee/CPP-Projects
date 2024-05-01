#include <iostream>
#include <cstring>

class String {
private:
    char *str;

public:
    // Constructor to create an uninitialized string object
    String() {
        str = nullptr;
    }

    // Constructor to create objects with string values
    String(const char *s) {
        str = new char[strlen(s) + 1];
        strcpy(str, s);
    }

    // Destructor to deallocate memory
    ~String() {
        delete[] str;
    }

    // Function to concatenate two strings properly
    String concatenate(const String &s) const {
        char *newStr = new char[strlen(str) + strlen(s.str) + 1];
        strcpy(newStr, str);
        strcat(newStr, s.str);
        String result(newStr);
        delete[] newStr;
        return result;
    }

    // Function to display the string object
    void display() const {
        if (str) {
            std::cout << "String: " << str << "\n";
        } else {
            std::cout << "String is uninitialized.\n";
        }
    }
};

int main() {
    String str1; // Uninitialized string object
    str1.display();

    const char *text1 = "Hello";
    String str2(text1); // Creating object with string value
    str2.display();

    const char *text2 = " World!";
    String str3(text2); // Creating object with another string value
    str3.display();

    String result = str2.concatenate(str3); // Concatenating two strings
    result.display();

    return 0;
}
