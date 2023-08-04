#include <iostream>
using namespace std;

int main() {
  int myAge;
  int votingAge = 18;
  cout << "Enter your age   ";
  cin >> myAge;
  if (myAge >= votingAge) {
    cout << "Old enough to vote!";
  } else {
    cout << "Not old enough to vote.";
  }
  return 0;
}
