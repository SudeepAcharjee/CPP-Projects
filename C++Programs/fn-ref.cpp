#include<iostream>
using namespace std;
void function(int a=10){
cout << "The numbers called are " << a << "\n";
}
    int main ()
    {
        function(1);
        function(2);
        function(3);
        function(4);
        function(5);
        function();
        return 0;
    }