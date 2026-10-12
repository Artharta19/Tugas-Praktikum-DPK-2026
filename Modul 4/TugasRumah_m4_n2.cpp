#include <iostream>
using namespace std;

int main() {
  int n, r, n_min_r, kombinasi;
  long long faktorial_n = 1;
  long long faktorial_r = 1;
  long long faktorial_n_min_r = 1;

  cout << "Masukan nilai n: ";
  cin >> n;
  cout << "Masukan nilai r: ";
  cin >> r;
  n_min_r = n - r;

  for (int i = 1; i <= n; i++) {
    faktorial_n = faktorial_n * i;
  }
  for (int j = 1; j <= r; j++) {
    faktorial_r = faktorial_r * j;
  }
  for (int k = 1; k <= n_min_r; k++) {
    faktorial_n_min_r = faktorial_n_min_r * k;
  }

  kombinasi = faktorial_n / (faktorial_r * faktorial_n_min_r);
  cout << "====== RUMUS KOMBINASI ======" << endl << endl;
  cout << "          n!" << endl;
  cout << "-------------------" << endl;
  cout << "    r! * (n-r)!" << endl << endl;

  cout << "Kombinasi dari kedua angka adalah: " << kombinasi;

  return 0;
}