#include <cstring>
#include <iostream>

using namespace std;

int main() {
  char kata[100];
  char balikan[100];

  cout << "Masukkan kata: ";
  cin >> kata;

  int panjang = strlen(kata);

  for (int i = 0; i < panjang; i++) {
    balikan[i] = kata[panjang - 1 - i];
    // cout << i << endl;
  }
  balikan[panjang] = '\0';

  cout << "Hasil pembalikan: " << balikan << endl;

  if (strcmp(kata, balikan) == 0) {
    cout << "Pernyataan: Kata ini tidak mempunyai balikan kata yang berbeda "
         << endl;
  } else {
    cout << "Pernyataan: Kata berhasil dibalik menjadi bentuk yang berbeda."
         << endl;
  }

  return 0;
}