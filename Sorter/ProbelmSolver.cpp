
#include <iostream>
using namespace std;

int main() {
  int x = 987;
  int sum = 0;
  while (x > 0) {
    sum = sum + (x % 10);
    x = x / 10;
  }
  cout << sum;
  return 0;
}