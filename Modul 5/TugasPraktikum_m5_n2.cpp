#include <iostream>
using namespace std;

int main() {
  cout << "Harga Fotocopy Perlembar\n";
  int harga;
  cout << "Jumlah lembar\t\t" << "Harga" << "\n";
  for (int lembar = 0; lembar <= 100; lembar++) {

    if (lembar % 20 == 0) {
      harga = lembar * 60;
    } else {
      harga = lembar * 80;
    }
    cout << "\t" << lembar << "\t\t" << "Rp" << harga << "\n";
  }
}