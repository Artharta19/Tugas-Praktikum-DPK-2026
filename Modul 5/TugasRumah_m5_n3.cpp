#include <iostream>
using namespace std;

int main() {
  int n, next, a = 1, b = 1;
  bool Isprime = true;
  cout << "Masukan Fibbonaci ke: ";
  cin >> n;
  for (int c = 0; c < (n - 1); c++) {
    next = a + b;
    a = b;
    b = next;
    // cout << a;
  }
  cout << "\nFibonaci ke-" << n << " adalah " << a << "\n";
  for (int d = 2; d < a; d++) {
    if (a % d == 0) {
      Isprime = false;
      break;
    } else {
      continue;
    }
  }
  if (Isprime) {
    cout << "Fibonaci ke-" << n << " Adalah Prima\n";
  } else {
    cout << "Fibonaci ke-" << n << " Bukanlah Prima\n";
  }
}