#include <iostream>
using namespace std;

void KapitalinHurufPertama(char *str) {
  bool newWord = true;

  while (*str != '\0') {
    if (*str == ' ') {
      newWord = true;
    } else if (newWord) {
      *str = toupper(*str);
      newWord = false;
    }
    str++;
  }
}

int main() {
  char Doksli_kalimat[100];
  cout << "Masukan Kalimat yang ingin diubah: ";
  cin.getline(Doksli_kalimat, 100);
  KapitalinHurufPertama(Doksli_kalimat);
  cout << Doksli_kalimat;
}