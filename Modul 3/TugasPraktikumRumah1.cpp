#include <iostream>
#include <cstdlib> 
using namespace std;

int main(){
    //persiapan
    system("clear");
    
    //Main Program
    cout << "===================================" << endl;
    cout << " KONVERSI SUHU DARI CELCIUS KE" << endl;
    cout << " Fahrenheit : Reamur : Kelvin" << endl;
    cout << "===================================" << endl << endl;
    
    cout << "Masukkan Suhu Dalam Celcius = ";
    float celsius,farenheit,reamur,kelvin;
    cin >> celsius;
    farenheit = celsius * 9/5 + 32;
    reamur = celsius * 4/5;
    kelvin = celsius + 273;
    cout << endl << "===================================" << endl;
    cout << "            HASIL KONVERSI" << endl;
    cout << "===================================" << endl;
    cout << "Fahrenheit = " << farenheit << " Derajat Farenheit" << endl;
    cout << "Reamur     = " << reamur << " Derajat Reamur" << endl;
    cout << "Kelvin     = " << kelvin << " Derajat Kelvin" << endl;
    cout << "===================================" << endl;
    
    return 0;
}