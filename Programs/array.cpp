#include<iostream>
#include<string>
using namespace std;
 int main()
    {
         string cars[5] = {"Volvo", "BMW", "Ford", "Mazda"};
         cout << cars[2];
         cout << "\nEnter a car name to add ";
         cin >> cars[4];
         
         for (int i = 0; i < 5; i++) {
           cout << cars[i] << "\n";
          }




         return 0;
    
    
    
    }