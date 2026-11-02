#include <iostream>
using namespace std;

const int MAX_LEN = 200;

bool isHurufBesar(char c) { return (c >= 'A' && c <= 'Z'); }

bool isHurufKecil(char c) { return (c >= 'a' && c <= 'z'); }

// ===================================================================
// 1. CAESAR CIPHER
// Menggeser setiap huruf sejauh N posisi dalam alfabet
// ===================================================================
void caesarEncrypt(char text[], int shift, char hasil[]) {
  shift = ((shift % 26) + 26) % 26; // normalisasi shift (anti negatif)
  int i = 0;
  while (text[i] != '\0') {
    char c = text[i];
    if (isHurufBesar(c)) {
      hasil[i] = char((c - 'A' + shift) % 26 + 'A');
    } else if (isHurufKecil(c)) {
      hasil[i] = char((c - 'a' + shift) % 26 + 'a');
    } else {
      hasil[i] = c; // karakter non-huruf dibiarkan apa adanya
    }
    i++;
  }
  hasil[i] = '\0'; // penutup string
}

// ===================================================================
// 2. ROT13 CIPHER
// Kasus khusus Caesar Cipher dengan shift tetap = 13
// ===================================================================
void rot13Encrypt(char text[], char hasil[]) { caesarEncrypt(text, 13, hasil); }

// ===================================================================
// 3. ATBASH CIPHER
// Membalik alfabet: A<->Z, B<->Y, C<->X, dst
// ===================================================================
void atbashEncrypt(char text[], char hasil[]) {
  int i = 0;
  while (text[i] != '\0') {
    char c = text[i];
    if (isHurufBesar(c)) {
      hasil[i] = char('Z' - (c - 'A'));
    } else if (isHurufKecil(c)) {
      hasil[i] = char('z' - (c - 'a'));
    } else {
      hasil[i] = c;
    }
    i++;
  }
  hasil[i] = '\0';
}

// ===================================================================
// 4. AFFINE CIPHER
// Rumus: E(x) = (a*x + b) mod 26
// Syarat: nilai 'a' harus koprima dengan 26
// ===================================================================
int gcd(int a, int b) {
  if (b == 0)
    return a;
  return gcd(b, a % b);
}

bool isValidA(int a) { return gcd(a, 26) == 1; }

void affineEncrypt(char text[], int a, int b, char hasil[]) {
  int i = 0;
  while (text[i] != '\0') {
    char c = text[i];
    if (isHurufBesar(c)) {
      hasil[i] = char((a * (c - 'A') + b) % 26 + 'A');
    } else if (isHurufKecil(c)) {
      hasil[i] = char((a * (c - 'a') + b) % 26 + 'a');
    } else {
      hasil[i] = c;
    }
    i++;
  }
  hasil[i] = '\0';
}

// ===================================================================
// FUNGSI TAMPILAN MENU
// ===================================================================
void tampilkanMenu() {
  cout << "\n=======================================\n";
  cout << " SISTEM ENKRIPSI PESAN - CIPHER KLASIK \n";
  cout << "=======================================\n";
  cout << "1. Caesar Cipher\n";
  cout << "2. Affine Cipher\n";
  cout << "3. ROT13 Cipher\n";
  cout << "4. Atbash Cipher\n";
  cout << "0. Keluar\n";
  cout << "=======================================\n";
  cout << "Pilih metode enkripsi: ";
}

// ===================================================================
// FUNGSI MAIN
// ===================================================================
int main() {
  int pilihan;
  char pesan[MAX_LEN];
  char hasil[MAX_LEN];

  do {
    tampilkanMenu();
    cin >> pilihan;

    if (cin.fail()) { // input bukan angka / input berakhir (EOF)
      cout << "\nInput tidak valid. Program dihentikan.\n";
      break;
    }
    cin.ignore(1000, '\n'); // bersihkan newline dari buffer input

    if (pilihan == 0) {
      cout << "\nProgram selesai. Terima kasih!\n";
      break;
    }

    if (pilihan < 1 || pilihan > 4) {
      cout << "\nPilihan tidak valid! Coba lagi.\n";
      continue;
    }

    cout << "Masukkan pesan yang ingin dienkripsi: ";
    cin.getline(pesan, MAX_LEN);

    switch (pilihan) {
    case 1: { // Caesar Cipher
      int shift;
      cout << "Masukkan nilai shift (0-25): ";
      cin >> shift;
      caesarEncrypt(pesan, shift, hasil);
      cout << "\n[Caesar Cipher]\n";
      cout << "Pesan asli   : " << pesan << endl;
      cout << "Pesan hasil  : " << hasil << endl;
      break;
    }
    case 2: { // Affine Cipher
      int a, b;
      do {
        cout << "Masukkan nilai a (koprima dgn 26, misal "
                "1,3,5,7,9,11,15,17,19,21,23,25): ";
        cin >> a;
        if (!isValidA(a)) {
          cout << "Nilai a tidak valid! a harus koprima dengan 26.\n";
        }
      } while (!isValidA(a));
      cout << "Masukkan nilai b (0-25): ";
      cin >> b;
      affineEncrypt(pesan, a, b, hasil);
      cout << "\n[Affine Cipher]\n";
      cout << "Pesan asli   : " << pesan << endl;
      cout << "Pesan hasil  : " << hasil << endl;
      break;
    }
    case 3: { // ROT13 Cipher
      rot13Encrypt(pesan, hasil);
      cout << "\n[ROT13 Cipher]\n";
      cout << "Pesan asli   : " << pesan << endl;
      cout << "Pesan hasil  : " << hasil << endl;
      break;
    }
    case 4: { // Atbash Cipher
      atbashEncrypt(pesan, hasil);
      cout << "\n[Atbash Cipher]\n";
      cout << "Pesan asli   : " << pesan << endl;
      cout << "Pesan hasil  : " << hasil << endl;
      break;
    }
    }

    cout << "\nTekan Enter untuk kembali ke menu...";
    cin.clear();
    cin.ignore(1000, '\n');
    cin.get();

  } while (pilihan != 0);

  return 0;
}