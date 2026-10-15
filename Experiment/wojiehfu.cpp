#include <iostream>
using namespace std;

int main() {
  int the_n;
  cout << "Masukan baris: ";
  cin >> the_n;

  for (int i = 0; i <= the_n; i++) {
    for (int j = the_n - i; j < 0; j--) {
      cout << "*";
    }
    cout << endl;
  }
}