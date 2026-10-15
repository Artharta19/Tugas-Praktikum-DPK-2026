#include <cstdlib>
#include <iostream>
using namespace std;

int main() {
  int a = 0, b = 1, temp, limit, save;
  cout << "input the n: ";
  cin >> limit;
  if (limit < 1) {
    cout << "Error";
    exit(1);
  }
  for (int i = 0; i < limit; i++) {
    cout << a << " ";
    save = a;
    temp = a + b;
    a = b;
    b = temp;
  }
  cout << "\nThe " << limit << " In fibonaci is " << save;
}
