#include <iostream>
using namespace std;

int cari_terbesar(int data[], int maxindex) {
  int nilai_max = data[0];
  for (int i = 0; i < maxindex; i++) {
    if (data[i] > nilai_max) {
      nilai_max = data[i];
    }
  }
  return nilai_max;
}

int cari_terkecil(int data[], int maxindex) {
  int nilai_min = data[0];
  for (int i = 0; i < maxindex; i++) {
    if (data[i] < nilai_min) {
      nilai_min = data[i];
    }
  }
  return nilai_min;
}

int main() {

  cout << "-------------------------------------------------------\n";
  cout << "-----------------Combinator Function-------------------\n";
  cout << "-------------------Program Tabung----------------------\n";
  int data[100];
  int count = 0;
  int jumlah_data = 0;
  string jawaban = "y";
  do {
    cout << "Masukan Data: ";
    cin >> data[jumlah_data];
    jumlah_data++;

    cout << "Masukan Data lagi? (y/n)";
    cin >> jawaban;
  } while (jawaban == "y" || jawaban == "Y");

  /*for (int i = 0; i < jumlah_data; i++) {
    cout << data[i] << " ";
  } */
  cout << "Data Terbesar Adalah: " << cari_terbesar(data, jumlah_data);
  cout << "\nData Terkecil Adalah: " << cari_terkecil(data, jumlah_data);
}