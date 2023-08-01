#include<iostream>
#include<string>
using namespace std;
    int main()
    {
        string a, c;
        cout << "Enter a word ";
        cin >> a; //Take in the word value
        string* b = &a; //Same value will be shared
        cout << b << "\n"; // memory address will be located
        cout << *b << "\n"; // the value of a will be printed
        cout << "Enter another word to change \n";
        cin >> c;
        *b = c;
        cout << *b; 

        return 0;
    }
