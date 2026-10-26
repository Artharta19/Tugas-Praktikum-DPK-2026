#include <iostream>
using namespace std;

int countWords(const char *str) {
  int count = 0;
  bool inWord = false;

  while (*str != '\0') {
    if (*str != ' ' && *str != '\t' && *str != '\n') {
      if (!inWord) {
        count++;
        inWord = true;
      }
    } else {
      inWord = false;
    }
    str++;
  }

  return count;
}

int main() {
  string input;
  cout << "Masukkan kalimat: ";
  getline(cin, input);

  int jumlah = countWords(input.c_str());
  cout << "Jumlah kata: " << jumlah << endl;

  return 0;
}