#include <iostream>
using namespace std;

int main() {

  string bulan[12] = {"Januari",   "Februari", "Maret",    "April",
                      "Mei",       "Juni",     "Juli",     "Agustus",
                      "September", "Oktober",  "November", "Desember"};

  string *str = &bulan[0];

  for (int i = 0; i < 12; i++) {
    cout << *str << endl;
    str++;
  }
}