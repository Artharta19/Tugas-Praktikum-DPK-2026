#include <iostream>
using namespace std;

int main() {
  int hari_ke;
  cout << "Hari ke - (1-7): ";
  cin >> hari_ke;
  string hari = "Kosong";
  string *kehari = &hari;
  switch (hari_ke) {
  case 1:
    *kehari = "Senin";
    break;

  case 2:
    *kehari = "Selasa";
    break;

  case 3:
    *kehari = "Rabu";
    break;

  case 4:
    *kehari = "Kamis";
    break;

  case 5:
    *kehari = "Jumat";
    break;

  case 6:
    *kehari = "Sabtu";
    break;

  case 7:
    *kehari = "Ahad";
    break;

  default:
    cout << "Invalid input, Jumlah salah";
  }
  cout << "\nHari Ke-" << hari_ke << " Adalah hari " << *kehari;
}