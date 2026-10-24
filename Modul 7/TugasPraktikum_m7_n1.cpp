#include <iostream>
using namespace std;

int main() {
  int batas_arr = 100;
  char katadoksli[batas_arr];
  char kataterbalik[batas_arr];
  cout << "Masukan kalimat Yang akan dibalik: ";
  cin.getline(katadoksli, batas_arr);

  int panjang_kata = 0;
  while (katadoksli[panjang_kata] != '\0') {
    panjang_kata++;
  }
  cout << panjang_kata;
}