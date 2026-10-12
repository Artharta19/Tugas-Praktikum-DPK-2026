#include <cstdlib>
#include <iostream>
using namespace std;

int main() {
  // Block 1
  int tinggi, negatif_baris, bintang, spasi;
  cout << "Masukan tinggi: ";
  cin >> tinggi;
  if (cin.fail() || tinggi < 0) {
    cout << "Invalid Input";
    exit(1);
  }
  negatif_baris = (-1) * tinggi;

  // Block 2
  for (int baris = negatif_baris; baris < tinggi; baris++) {
    if (baris < 0) {
      spasi = tinggi;
      bintang = (-1) * baris;
      for (int s = 0; s < spasi; s++) {
        cout << " ";
      }
      for (int b = 0; b < bintang; b++) {
        cout << "*";
      }
      cout << endl;
    } else if (baris > 0) {
      spasi = tinggi - baris;
      bintang = baris + 1;
      for (int s = 0; s < spasi; s++) {
        cout << " ";
      }
      for (int b = 0; b < bintang; b++) {
        cout << "*";
      }
      cout << endl;
    }
    // Kepikiran di kamar mandi pak
  }
  return 0;
}
