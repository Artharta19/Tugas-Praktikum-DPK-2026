#include <cmath>
#include <iostream>
using namespace std;

int rata_rata(int data[], int panjang_data) {
  int sum_all = 0;
  for (int i = 0; i < panjang_data; i++) {
    sum_all = sum_all + data[i];
  }
  int average = sum_all / (panjang_data);
  return average;
}
double hitungSimpanganBaku(int data[], int panjang_data, int rataRata) {
  if (panjang_data <= 1)
    return 0;

  double jumlahKuadratSelisih = 0;
  for (int i = 0; i < panjang_data; i++) {
    jumlahKuadratSelisih += pow(data[i] - rataRata, 2);
  }
  return sqrt(jumlahKuadratSelisih / (panjang_data - 1));
}
int main() {
  int database[100];
  int panjang_data = 0;
  string konfirmasi = "Y";
  cout << "------------------------------------------------------------------"
       << endl;
  cout << "                        MODUL FUNCTION                            "
       << endl;
  cout << "------------------------------------------------------------------"
       << endl;
  cout << "                    PROGRAM STANDAR DEVIASI                       "
       << endl;
  cout << "------------------------------------------------------------------"
       << endl;
  do {
    cout << "Masukan data: ";
    cin >> database[panjang_data];
    panjang_data++;

    cout << "Masukan data lagi? (y/n)";
    cin >> konfirmasi;
  } while (konfirmasi == "y" || konfirmasi == "Y");
  int hasil_mean = rata_rata(database, panjang_data);
  cout << "Rata-Rata Data adalah: " << hasil_mean;
  cout << "\nSimpangan Baku Data adalah: "
       << hitungSimpanganBaku(database, panjang_data, hasil_mean);
}