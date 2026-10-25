#include <iostream>
using namespace std;

int main() {
  int batas_arr = 100;
  char katadoksli[batas_arr];
  char kataterbalik[batas_arr];
  cout << "Masukan kalimat Yang akan dibalik: ";
  cin.getline(katadoksli, batas_arr);

  int raw_panjang_kata = 0;
  while (katadoksli[raw_panjang_kata] != '\0') {
    raw_panjang_kata++;
  }
  int panjang_kata = raw_panjang_kata + 1;

  for (int i = 0; i <= panjang_kata; i++) {
    char *temp = &katadoksli[panjang_kata - i];
    kataterbalik[i] = *temp;
  }
  for (int i = 0; i <= panjang_kata; i++) {
    cout << kataterbalik[i];
  }
}