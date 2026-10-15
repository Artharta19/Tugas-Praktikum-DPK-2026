#include <iostream>
using namespace std;

int main() {
  struct {
    int jam_kelas;
    string namamatkul;
    bool isoffline;
  } Myclass1, Myclass2, Myclass3;
  Myclass1.namamatkul = "DPK";
  Myclass1.jam_kelas = 4;
  Myclass1.isoffline = true;
  cout << Myclass1.jam_kelas;
}