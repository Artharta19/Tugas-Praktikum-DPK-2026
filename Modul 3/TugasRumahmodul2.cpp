#include <iostream>
#include <ostream>
using namespace std;

int main(){
    int a,b,c,d,j,k,l,m;
    //Block Program 1
    cout << "Masukan Nilai a: ";
    cin >> a ;
    cout << "Masukan Nilai b: ";
    cin >> b;
    cout << "Masukan Nilai c: ";
    cin >> c;
    d = (a*b)-c/(b+a);
    cout << "Hasil dari d = (a*b)-c/(b+a) adalah: " << d << "\n";
    d = d << 2;
    cout << "Hasil dari geser 2 bit kekiri adalah: " << d << "\n";


    //Block Program 2
    cout << "Masukan Nilai j: ";
    cin >> j;
    cout << "Masukan Nilai k: ";
    cin >> k;
    cout << "Masukan Nilai l: ";
    cin >> l;
    m = j * (k+l);
    cout << "Hasil dari m = j * (k+l) adalah: " << m << "\n";
    m = m >> 3;
    cout << "Hasil dari geser 3 bit kekanan adalah: " << m << "\n";
    //Block Program 3
    if(d == m){
        cout << d << " Sama dengan " << m << "\n";
    } else{
        cout << d << " Tidak sama dengan " << m << "\n";
    }
    if(d > m){
        cout << d << " Lebih besar dari " << m << "\n";
    } else {
        cout << d << " Lebih kecil dari " << m << "\n";
    }
    return 0;
}