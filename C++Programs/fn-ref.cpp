#include<iostream>
using namespace std;
void function(string name= "ram", int a=10 )//Also an example of multiple parameters
{
cout << "The numbers called are " << a << "  "<< name <<"\n";
}
    int main ()
    {
        function( "Sudeep", 1);
        function("Dev", 2);
        function("Ritu", 3);
        function("David", 4);
        function("Rohit", 5);
        function();
        return 0;
    }