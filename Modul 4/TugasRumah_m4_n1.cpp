#include <iostream>
using namespace std;

int main() {
  int a, b, c;
  cout << "Masukan Jumlah Deret: ";
  cin >> a;
  cout << "A\t\t" << "B\t\t" << "C\t\t" << endl;
  for (int baris = 0; baris < a; baris++) {
    b = a - baris;
    c = baris + b;
    cout << baris << "\t\t" << b << "\t\t" << c << endl;
  }
}