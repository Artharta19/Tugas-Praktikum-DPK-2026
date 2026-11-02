
#include <fstream>
#include <iostream>
using namespace std;

int main() {
  char kata[100], temp;
  int panjang = 0;

  cout << "Masukkan sebuah kata: ";
  cin >> kata;
  ofstream file("HASIL1.txt", ios::out | ios::app);
  if (file.is_open()) {
    file << kata << "\n";
    cout << "Hasil berhasil disimpan ke HASIL.TXT\n";
  } else {
    cout << "File gagal dibuka!";
  }

  while (kata[panjang] != '\0') {
    panjang++;
  }

  for (int i = 0; i < panjang - 1; i++) {
    for (int j = 0; j < panjang - 1 - i; j++) {
      if (kata[j] > kata[j + 1]) {
        temp = kata[j];
        kata[j] = kata[j + 1];
        kata[j + 1] = temp;
      }
    }
  }

  cout << "Hasil pengurutan: " << kata << endl;

  if (file.is_open()) {
    file << kata << "\n";
    file.close();
    cout << "Hasil berhasil disimpan ke HASIL.TXT";
  } else {
    cout << "File gagal dibuka!";
  }

  return 0;
}
