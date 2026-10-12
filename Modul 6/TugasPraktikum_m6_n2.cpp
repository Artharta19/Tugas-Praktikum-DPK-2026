#include <iostream>

using namespace std;

float luas_selimut(float r, float h) {
  const float pi = 3.14;
  float selimut_tabung = 2 * pi * r * h;
  return selimut_tabung;
}

float volume_tabung(float r, float h) {
  const float pi = 3.14;
  float volume = pi * (r * r) * h;
  return volume;
}

float luas_permukaan(float r, float h) {
  const float pi = 3.14;
  float luas_keseluruhan = 2 * pi * r * (r + h);
  return luas_keseluruhan;
}

int main() {
  float jari_jari, tinggi;
  cout << "-------------------------------------------------------\n";
  cout << "----------------------Function-------------------------\n";
  cout << "-------------------Program Tabung----------------------\n";
  cout << "Masukan Jari-jari: ";
  cin >> jari_jari;
  cout << "\nMasukan Tinggi: ";
  cin >> tinggi;

  cout << "Luas Permukaan Tabung adalah:  " << luas_permukaan(jari_jari, tinggi)
       << "\n";
  cout << "Luas Selimut Tabung adalah  :  " << luas_selimut(jari_jari, tinggi)
       << "\n";
  cout << "Luas Permukaan Tabung adalah:  " << volume_tabung(jari_jari, tinggi)
       << "\n";
}