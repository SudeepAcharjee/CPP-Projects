//multiplication table
#include<iostream>
using namespace std;
    int main()
    {
        int a, b, c;
        cout << "Enter a number for table ";
        cin >> a;
        for(b=0; b<=10; b++){
        c = b*a;
        cout << b << "*" << a << "=" << c << "\n";
        }
        return 0;
    }