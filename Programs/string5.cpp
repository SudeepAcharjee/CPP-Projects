#include<iostream>
#include<string>
using namespace std;
    int main()
    {
        string name = "Sudeep";
        cout << "The name is : " << name << "\n";
        cout << "the first two letters are " << name[0];
        cout << name[1] ; //Access String index 0 and 1

        name[0] = 'R';
        name[1] = 'e';
        cout << "\nThe changed namae is " << name;


        return 0;

    }