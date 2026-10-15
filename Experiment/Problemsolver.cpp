#include <iostream>
#include <ostream>
using namespace std;

int main() {
  int numbers[100] = {1, 4, 7, 8, 10, 3};
  int arrodd[100];
  int arreven[100];
  int odd = 0, even = 0;
  for (int i = 0; i < 6; i++) {
    if (numbers[i] % 2 == 0) {
      arreven[even] = numbers[i];
      even++;
    } else {
      arrodd[odd] = numbers[i];
      odd++;
    }
  }
  cout << "Even Number: " << even << endl;
  for (int i = 0; i < even; i++) {
    cout << arreven[i] << " ";
  }
  cout << endl;

  cout << "Odd Number: " << odd << endl;
  for (int i = 0; i < odd; i++) {
    cout << arrodd[i] << " ";
  }
}