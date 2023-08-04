#include<iostream>
#include<string>
using namespace std;
    int main()
    {
        string a = "Sudeep";
        string b ="Acharjee";
        string e ="Mr.";
        string c = a + b; //String Concatenation
        cout << "My name is " + c ;


        string d = e.append(c); //Using Append
        cout << "\nMy name is " + d;


        return 0;
    }