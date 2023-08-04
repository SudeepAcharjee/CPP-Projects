#include<iostream>
using namespace std;
    int main()
    {
        int a, b;
        cout << "Enter your starting number: ";
        cin >> a;
        cout << "Enter your ending number: ";
        cin >> b;
         
        while (a <= b){
          cout << a << "\n";
          a++;
        }
        return 0;
    }