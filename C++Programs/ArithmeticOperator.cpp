#include <iostream>
using namespace std;

    int main()
    {
        int a, b, c, d, e, g, h, i;
        double f;
        cout << "Enter the values of A: ";
        cin >> a;
        cout << "\nEnter the values of B: ";
        cin >> b;  


        c=a+b; //Additon operator
        cout << "\n Additon= " << c; 
    
        d=a-b; //Substraction operator
        cout << "\n Substraction= " << d;
    
        e=a*b; //Multiplication operator
        cout << "\n Multiplication= " << e;

        f=a/b; //Division Operator
        cout << "\n Division= " << f;

        g=a+b; //Modulous Operator
        cout << "\n Modulous= " << g;

        h=++a; //Increment
        cout << "\n Increment of A= " << h;


        i=--b; //Decrement
        cout << "\n Decrement of B= " << i;

        return 0;
    
    }