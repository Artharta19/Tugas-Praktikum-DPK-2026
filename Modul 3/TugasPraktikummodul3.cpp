#include <cstdlib>
#include <iostream>
using namespace std;

int main(){
    //Block Program 1
    float harga,harga_diskon;
    string nama_kasir,nama_pembeli,diskon;
    cout << "\n Masukan Nama Kasir: ";
    cin >> nama_kasir;
    cout << "\n Masukan Nama Pembeli: ";
    cin >> nama_pembeli;
    cout << "\n Masukan Harga: ";
    cin >> harga;

    //Block Program 2
    if (cin.fail()) {
        cout << "Invalid Price";
        exit(1);}
    if (harga < 75000) {
        harga_diskon = harga - (harga * 10/100 );
        diskon = "10%";
    } else if (harga >= 75000 && harga <= 100000) {
        harga_diskon = harga - (harga * 20/100 );
        diskon = "20%";
    } else if (harga > 100000) {
        harga_diskon = harga - (harga * 30/100);
        diskon = "30%";
    } 
    //Block Program 3
    cout << "======================================================================\n";
    cout << "========================TOKO BERKAH SEJAHTERA=========================\n";
    cout << "======================================================================\n";
    cout << " Kasir \t\t\t: "<< nama_kasir;
    cout << "\n Pembeli \t\t: "  << nama_pembeli;
    cout << "\n Total Belanja\t\t: " << "Rp" << harga << ",00";
    cout << "\n Potongan harga\t\t: " << diskon;
    cout << "\n Harga Setelah Potongan\t: " << "Rp" << harga_diskon << ",00" << "\n";
    cout << "=====================Terima Kasih Sudah Berbelanja====================\n";
    cout << "========================TOKO BERKAH SEJAHTERA=========================\n";
    cout << "======================================================================\n";


}