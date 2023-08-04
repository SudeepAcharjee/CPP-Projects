#include<iostream>
using namespace std;
    int main()
     {
        int a, b;

        cout << "Enter The value of first number ";
        cin >> a;

        cout << "\nEnter the value of second number ";
        cin >> b;
        

        if(a == b) //Equalto Operator 
        cout << a << " is Equal to " << b << endl;
        
        if(a != b) //Not equal to operator 
        cout << a << " is not equal to " << b << endl;

        if(a<b) //Less than operator
        cout << a << " is less than " << b << endl;

        if(a>b) //Greater than ooperator
        cout << a << " is Greater than " << b <<endl;


        return 0;
     }