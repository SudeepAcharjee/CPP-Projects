#include <iostream>
#include<cmath>
using namespace std;

int main() {
    int a, b, c;
    cout << "The max and Min value of the number will be shown from a range 5,10";
    cout <<"\nThe max number is " << max(5, 10) << "\n"; //Finding the max number
    cout <<"The min number is " << min(5, 10); //finding the  min number

    cout << "\nEnter a number of square ";
    cin >> a;
    cout << "The square is " << sqrt(a) << "\n"; //square of a number

    cout << "Enter a decimal number to find its round figure ";
    cin >> b;
    cout << "The rounf value is " << round(b) << "\n"; //Round figure of a number

    cout << "Enter a number for a Log value ";
    cin >> c;
    cout << "The Log value is" << log(c) ; //Log of a number 


  return 0;
}
