#include <iostream>
using namespace std;

// Fungsi untuk mencari data yang paling sering muncul
int cariModus(int data[], int n) {
  int modus = data[0];
  int terbanyak = 0;

  for (int i = 0; i < n; i++) {
    int jumlah = 0;
    for (int j = 0; j < n; j++) {
      if (data[j] == data[i]) {
        jumlah++;
      }
    }
    if (jumlah > terbanyak) {
      terbanyak = jumlah;
      modus = data[i];
    }
  }
  return modus;
}

int main() {
  int data[100];
  int n = 0;
  char lagi;

  cout << "----------------------------------------------------" << "\n";
  cout << "                   MODUL FUNCTION" << "\n";
  cout << "----------------------------------------------------" << "\n";
  cout << "        MENENTUKAN DATA YANG SERING DIINPUTKAN" << "\n";
  cout << "----------------------------------------------------" << "\n";

  do {
    cout << "Masukkan data : ";
    cin >> data[n];
    n++;
    cout << "Masukkan Data Lagi?(y/n) : ";
    cin >> lagi;
  } while (lagi == 'y' && n < 100);

  cout << "\n";
  cout << "----------------------------------------------------" << "\n";
  cout << "Data yang sering diinputkan adalah " << cariModus(data, n) << "\n";
  cout << "----------------------------------------------------" << "\n";

  return 0;
}