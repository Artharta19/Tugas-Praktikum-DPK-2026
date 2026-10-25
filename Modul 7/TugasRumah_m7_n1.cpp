#include <iostream>
using namespace std;

void KapitalinHurufPertama(char *str) {
  bool newWord = true; /* flag: 1 = posisi ini adalah awal kata */

  while (*str != '\0') {
    if (*str == ' ') {
      newWord = true; /* spasi -> kata berikutnya dimulai */
    } else if (newWord) {
      *str = toupper(*str); /* ubah huruf lewat pointer */
      newWord = false;
    }
    str++; /* geser pointer ke karakter berikutnya */
  }
}

int main() {
  char Doksli_kalimat[100];
  cout << "Masukan Kalimat yang ingin diubah: ";
  cin.getline(Doksli_kalimat, 100);
  KapitalinHurufPertama(Doksli_kalimat);
  cout << Doksli_kalimat;
}