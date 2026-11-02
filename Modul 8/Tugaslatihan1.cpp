#include <cstdlib>
#include <fstream>
#include <iostream>
using namespace std;

int main() {
  ofstream file("Coba.txt", ios ::out);
  if (!file) {
    cout << "Cannot open file";
    exit(1);
  }
  while (file.is_open()) {
    file << "Mencoba Hal baru";
    file.close();
  }
  return 0;
}