#include <iostream>
#include <string>
using namespace std;

struct employee {
    int empno;
    char ename[21]; // 20 characters + null terminator
    float basic, hra, da;

    // Function to calculate net pay
    float calculate() {
        return basic + hra + da;
    }

    // Function to read data
    void getdata() {
        cout << "Enter employee number: ";
        cin >> empno;
        cin.ignore(); // Ignore newline character
        cout << "Enter employee name: ";
        cin.getline(ename, 21); // Read up to 20 characters
        cout << "Enter basic salary: ";
        cin >> basic;
        cout << "Enter HRA: ";
        cin >> hra;
        cout << "Enter DA: ";
        cin >> da;
    }

    // Function to display data
    void dispdata() {
        cout << "Employee Number: " << empno << endl;
        cout << "Employee Name: " << ename << endl;
        cout << "Basic Salary: " << basic << endl;
        cout << "HRA: " << hra << endl;
        cout << "DA: " << da << endl;
        cout << "Net Pay: " << calculate() << endl;
    }
};

int main() {
    employee emp;

    // Get data for employee
    emp.getdata();

    // Display employee data
    emp.dispdata();

    return 0;
}
