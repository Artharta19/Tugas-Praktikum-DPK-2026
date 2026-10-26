#include <iostream>
using namespace std;

void Triplepointerprogram(int *i, int *j, int *k, int *l) {
  cout << "Manipulasi Menggunakan pointer dan fungsi " << '\n';
  cout << "w = " << *i * 3 << '\n';
  cout << "x = " << *j * 3 << '\n';
  cout << "y = " << *k * 3 << '\n';
  cout << "z = " << *l * 3 << '\n';
}

int main() {
  int w, x, y, z;
  cout << "Masukan nilai w,x,y,z\n";
  cout << "W: ";
  cin >> w;
  cout << "X: ";
  cin >> x;
  cout << "Y: ";
  cin >> y;
  cout << "Z: ";
  cin >> z;

  Triplepointerprogram(&w, &x, &y, &z);
  return 0;
}