#include <iostream>
using namespace std;

int main() {
  int marks;
  cout << "Enter your marks ";
  cin >> marks;
  if (marks < 40) {
    cout << "Fail";
  } else if (marks < 60) {
    cout << "Average";
  } else {
    cout << "Excellent";
  }
  return 0;
}
