#include <iostream>
using namespace std;

int main() {
  // Blok 1
  int saldo = 100000;
  int pilihan, nominal;

  do {
    // Blok Program 2
    cout << "BANK INDONESIA JAYA" << "\n";
    cout << "____________________" << "\n" << "\n";
    cout << "          Saldo : " << saldo << "\n";
    cout << "Menu Transaksi :" << "\n";
    cout << "1. Setor Tabungan" << "\n";
    cout << "2. Ambil Tabungan" << "\n";
    cout << "3. Keluar" << "\n";
    cout << "Pilihan Menu Transaksi (1/2/3) : ";
    cin >> pilihan;

    // Blok Program 3
    switch (pilihan) {
    case 1:
      cout << "\nMasukkan nominal setor: Rp. ";
      cin >> nominal;
      if (nominal > 0) {
        saldo += nominal;
        cout << "Setor tabungan berhasil!" << "\n";
      } else {
        cout << "Nominal harus lebih besar dari 0!" << "\n";
      }
      break;

    case 2:
      cout << "\nMasukkan nominal ambil: Rp. ";
      cin >> nominal;
      if (nominal <= 0) {
        cout << "Nominal harus lebih besar dari 0!" << "\n";
      } else if (saldo - nominal < 50000) {
        cout << "Penarikan gagal! Saldo minimum yang harus tersisa adalah Rp. "
                "50.000,-"
             << "\n";
      } else {
        saldo -= nominal;
        cout << "Penarikan tabungan berhasil!" << "\n";
      }
      break;

    case 3:
      cout << "\nTerima kasih telah melakukan transaksi." << "\n";
      break;

    default:
      cout << "\nPilihan menu tidak valid!" << "\n";
      break;
    }

    cout << "\n========================================\n" << "\n";

  } while (pilihan != 3);

  return 0;
}