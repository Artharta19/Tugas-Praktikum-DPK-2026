#include <iostream>
using namespace std;

int Factorial(int x) {
  int Factorial_1 = 1;
  for (int n = 1; n <= x; n++) {
    Factorial_1 = Factorial_1 * n;
  }
  return Factorial_1;
}

int Combinator(int j, int k, int l) {
  int combine = j / (k * l);
  return combine;
}

int main() {
  int n, r, fac_n, fac_r, n_min_r, fac_n_min_r;
  cout << "-------------------------------------------------------\n";
  cout << "-----------------Combinator Function-------------------\n";
  cout << "-------------------------------------------------------\n";
  cout << "Masukan nilai n: ";
  cin >> n;
  cout << "Masukan nilai r: ";
  cin >> r;
  n_min_r = n - r;
  fac_n = Factorial(n);
  fac_r = Factorial(r);
  fac_n_min_r = Factorial(n_min_r);
  int hasil = Combinator(fac_n, fac_r, fac_n_min_r);

  cout << "Hasil Dari " << n << "C" << r << " Adalah : " << hasil;
}