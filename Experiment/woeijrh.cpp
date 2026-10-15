#include <cstdlib>
#include <iostream>
using namespace std;

int main() {
  int factorial = 1, the_n;
  cout << "Input the number: ";
  cin >> the_n;
  if (the_n < 0 || cin.fail()) {
    cout << "Invalid input";
    exit(1);
  }
  for (int n = 1; n <= the_n; n++) {
    factorial = factorial * n;
  }
  cout << "Factorial of " << the_n << " Is " << factorial;
}