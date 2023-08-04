#include <iostream>
using namespace std;

    int main()
    {
        int x, y, z;
        cout << "Enter Your Number= ";
        cin >> x;

        x += 3;
        cout << "The output of += operator = " << x;



        cout << "\nEnter a number= ";
        cin >> y;
        y -= 1;
        cout << "The output of -= operator = " << y;


        cout << "\nEnter a number = ";
        cin >> z;
        z *= 5 ;
        cout << "The output of *= operator = " << z;
        return 0;
    }