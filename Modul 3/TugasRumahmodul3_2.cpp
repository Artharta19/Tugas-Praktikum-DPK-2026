#include <iostream>
#include <cmath>
using namespace std;

int main(){
    //Block Program 1
    const float PI = 3.14;
    int pilihan;
    float jari_jari, sisi, panjang, lebar, tinggi, hasil;
    int tahun;

    cout << "=========== MENU RUMUS ===========\n";
    cout << " 1. Luas Permukaan Bola\n";
    cout << " 2. Luas Permukaan Kubus\n";
    cout << " 3. Luas Permukaan Balok\n";
    cout << " 4. Luas Permukaan Tabung\n";
    cout << " 5. Luas Permukaan Kerucut\n";
    cout << " 6. Luas Permukaan Limas Segiempat\n";
    cout << " 7. Cek Tahun Kabisat\n";
    cout << "==================================\n";
    cout << " Pilih menu (1-7): ";
    cin >> pilihan;

    if (cin.fail()) {
        cout << "Input tidak valid";
        exit(1);
    }

    switch (pilihan) {
    case 1:
        cout << " Masukan jari-jari: ";
        cin >> jari_jari;
        hasil = 4 * PI * jari_jari * jari_jari;
        cout << " Luas Permukaan Bola = " << hasil << "\n";
        break;
    case 2:
        cout << " Masukan panjang rusuk: ";
        cin >> sisi;
        hasil = 6 * sisi * sisi;
        cout << " Luas Permukaan Kubus = " << hasil << "\n";
        break;
    case 3:
        cout << " Masukan panjang: ";
        cin >> panjang;
        cout << "\n Masukan lebar: ";
        cin >> lebar;
        cout << "\n Masukan tinggi: ";
        cin >> tinggi;
        hasil = 2 * (panjang*lebar + panjang*tinggi + lebar*tinggi);
        cout << " Luas Permukaan Balok = " << hasil << "\n";
        break;
    case 4:
        cout << " Masukan jari-jari : ";
        cin >> jari_jari;
        cout << "\n Masukan Tinggi: ";
        cin >> tinggi;
        hasil = 2 * PI * jari_jari * (jari_jari + tinggi);
        cout << " Luas Permukaan Tabung = " << hasil << "\n";
        break;
    case 5:
        cout << " Masukan jari-jari: ";
        cin >> jari_jari;
        cout << " Masukan Tinggi: ";
        cin >> tinggi;
        sisi = sqrt(jari_jari*jari_jari + tinggi*tinggi);
        hasil = PI * jari_jari * (jari_jari + sisi);
        cout << " Luas Permukaan Kerucut = " << hasil << "\n";
        break;
    case 6:
        cout << " (Alas persegi)\n";
        cout << " Masukan panjang sisi alas : ";
        cin >> sisi;
        cout << " Masukan sisi Tegak: ";
        cin >> tinggi;
        hasil = sisi*sisi + 2 * sisi * tinggi;
        cout << " Luas Permukaan Limas Segiempat = " << hasil << "\n";
        break;
    case 7:
        cout << " Masukan tahun: ";
        cin >> tahun;
        if ((tahun % 400 == 0) || (tahun % 4 == 0 && tahun % 100 != 0))
            cout << " " << tahun << " adalah tahun kabisat\n";
        else
            cout << " " << tahun << " bukan tahun kabisat\n";
        break;
    default:
        cout << " Menu tidak tersedia";
    }

    if (cin.fail()) {
        cout << " Input tidak valid";
        exit(1);
    }
    return 0;
}