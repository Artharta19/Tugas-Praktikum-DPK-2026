#include <cstdlib>
#include <iostream>
using namespace std;

int main() {
  // Block 1
  char kalimat[200];
  cout << "Masukan kalimat: ";
  cin.getline(kalimat, 200);
  if (cin.fail()) {
    cout << "Invalid Input";
    exit(1);
  }

  int panjang, vokal, konsonan, lainnya, kataNG;
  panjang = 0;
  vokal = 0;
  konsonan = 0;
  lainnya = 0;
  kataNG = 0;

  while (kalimat[panjang] != '\0') {
    panjang++;
  }

  // Block 2
  for (int i = 0; i < panjang; i++) {
    char c = kalimat[i];
    if (c >= 'A' && c <= 'Z') {
      c = c + 32;
    }
    if (c >= 'a' && c <= 'z') {
      if (c == 'a' || c == 'i' || c == 'u' || c == 'e' || c == 'o') {
        vokal++;
      } else {
        konsonan++;
      }
    } else {
      lainnya++;
    }
  }

  // Block 3
  bool ada_NG = false;
  for (int i = 0; i < panjang; i++) {
    char c = kalimat[i];
    char c2 = kalimat[i + 1];
    if (c >= 'A' && c <= 'Z')
      c = c + 32;
    if (c2 >= 'A' && c2 <= 'Z')
      c2 = c2 + 32;
    if (c == 'n' && c2 == 'g') {
      ada_NG = true;
    }
    if (kalimat[i] == ' ' || i == panjang - 1) {
      if (ada_NG == true) {
        kataNG++;
      }
      ada_NG = false;
    }
    // Ngitung kata yang ada 'ng'-nya
  }

  // Block 4
  cout << "\n";
  cout << "Jumlah karakter: " << panjang << "\n";
  cout << "Jumlah vokal: " << vokal << "\n";
  cout << "Jumlah konsonan: " << konsonan << "\n";
  cout << "Jumlah lainnya: " << lainnya << "\n";
  cout << "Jumlah kata mengandung ng: " << kataNG << "\n";
  return 0;
}