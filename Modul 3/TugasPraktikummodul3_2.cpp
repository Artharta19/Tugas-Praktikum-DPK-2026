#include <iostream>
using namespace std;

int main(){
    //Block Program 1
    float pendapatan_harian,komisi;
    string nama_kasir,nama_salesman;
    cout << "\n Masukan Nama Kasir: ";
    cin >> nama_kasir;
    cout << "\n Masukan Nama Salesman: ";
    cin >> nama_salesman;
    cout << "\n Masukan Pendapatan: ";
    cin >> pendapatan_harian;

    //Block Program 2
    if (cin.fail()) {
        cout << "Invalid Price";
        exit(1);
    }
    if (pendapatan_harian <= 60000) {
        komisi = 15000 + (pendapatan_harian * 15/100);
        //cout << "IF 1";
    } else if (pendapatan_harian > 60000 && pendapatan_harian < 100000) {
        komisi = 30000 + (pendapatan_harian * 20/100);
        //cout << "IF 2";
    } else if (pendapatan_harian >= 100000) {
        komisi = 50000 + (pendapatan_harian * 30/100);
        //cout << "IF 3";
    }
    
    //Block Program 3
    cout << "======================================================================\n";
    cout << "=======================PT. MAKMUR SUKSES JAYA=========================\n";
    cout << "======================================================================\n";
    cout << " Kasir \t\t\t: "<< nama_kasir;
    cout << "\n Salesman \t\t: "  << nama_salesman;
    cout << "\n Total Belanja\t\t: " << "Rp" << pendapatan_harian << ",00";
    cout << "\n Komisi Salesman\t: " << "Rp" << komisi << ",00" << "\n";
    cout << "=====================Terima Kasih Sudah Berbelanja====================\n";
    cout << "=======================PT. MAKMUR SUKSES JAYA=========================\n";
    cout << "======================================================================\n";




}