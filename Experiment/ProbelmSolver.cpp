
#include <iostream>
using namespace std;

int main() {
  // prime finder
  int prime;
  bool isprime = true;
  cout << "Input the range: ";
  cin >> prime;
  for (int i = 0; i < prime; i++) {
    for (int j = 2; j < i; j++) {
      if (i > 1) {
        isprime = false;
      }
      if (i % j == 0) {
        isprime = false;
        break;
      } else {
        isprime = true;
      }
    }
    if (isprime) {
      cout << prime << " is a Prime number.\n";
    } else {
      cout << prime << " is NOT a Prime number.\n";
    }
    return 0;
  }
}