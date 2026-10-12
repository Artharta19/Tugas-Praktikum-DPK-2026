#include <iostream>
#include <map>

using namespace std;

// Fungsi untuk mencari data yang paling sering diinputkan (modus)
int cariDataSering(const map<int, int> &frekuensi) {
  int dataTerbanyak = 0;
  int frekuensiMaks = 0;

  for (auto const &[data, jumlah] : frekuensi) {
    if (jumlah > frekuensiMaks) {
      frekuensiMaks = jumlah;
      dataTerbanyak = data;
    }
  }
  return dataTerbanyak;
}

int main() {
  map<int, int> frekuensiData; // key: angka input, value: frekuensi kemunculan
  char ulang;
  int inputVal;

  cout << "------------------------------------------------------------------"
       << endl;
  cout << "                        MODUL FUNCTION                            "
       << endl;
  cout << "------------------------------------------------------------------"
       << endl;
  cout << "              MENENTUKAN DATA YANG SERING DIINPUTKAN              "
       << endl;
  cout << "------------------------------------------------------------------"
       << endl;

  do {
    cout << "Maskkan data : ";
    cin >> inputVal;

    // Menambahkan frekuensi kemunculan data
    frekuensiData[inputVal]++;

    cout << "Masukkan Data Lagi?(y/n) : ";
    cin >> ulang;
  } while (ulang == 'y' || ulang == 'Y');

  if (!frekuensiData.empty()) {
    int hasil = cariDataSering(frekuensiData);

    cout << "------------------------------------------------------------------"
         << endl;
    cout << "Data yang sering diinputkan adalah " << hasil << endl;
    cout << "------------------------------------------------------------------"
         << endl;
  }

  return 0;
}