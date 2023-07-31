#include<iostream>
#include<string>
using namespace std;
 int main(){
          char choice, c[50];
          int b;
          string cars[5];
          cout << "Enter 5 cars name(in single line): ";
           for (int i = 0; i < 5; i++) {
           cin >> cars[i];
           cout << cars[i] << "\n";}
           cout << "Do you want to change any car name from the list? \n Y/N ";
           cin >> choice;
                if (choice == 'y' || choice == 'Y') {
                cout << "Enter the number of car from the list of 0-4 ";
                cin >> b;
                cout << "Enter Your new car name ";
                cin >> c;
                cars[b] = c;
                for (int i = 0; i < 5; i++) {
                cout << cars[i] << "\n";}}
                else if (choice == 'n' || choice == 'N') {
                    cout << "Exiting the Program";}
                    else{
                         cout << "Please Enter correctly (Y/N)";}
     return 0;}