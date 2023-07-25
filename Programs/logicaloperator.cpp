#include <iostream>
using namespace std;

int main() {
    int a, b, c, d;

    // Input four numbers
    cout << "Enter the first number (a): ";
    cin >> a;
    cout << "Enter the second number (b): ";
    cin >> b;
    cout << "Enter the third number (c): ";
    cin >> c;
    cout << "Enter the fourth number (d): ";
    cin >> d;

    // Check if a equals b and c equals d
    if (a == b && c == d)
        cout << "All pairs are equal." << endl;

    if (a != b && c != d)
        cout << "All pairs are not equal." << endl;

    if (a == b && c != d)
        cout << "First pairs are  equal." << endl;

    if (a != b && c == d)
        cout << "Second pairs are  equal." << endl;



    return 0;
}
