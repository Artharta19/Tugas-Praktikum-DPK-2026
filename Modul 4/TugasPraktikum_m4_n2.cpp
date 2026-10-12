#include <iomanip>
#include <iostream>
using namespace std;

int main() {
  float C, F, R, K;
  cout << "C\t" << "F\t" << "R\t" << "K\n";
  for (C = 0; C <= 100; C = C + 10) {
    F = (C * 9.0 / 5.0) + 32;
    R = C * 4.0 / 5.0;
    K = C + 273.15;
    cout << C << "\t" << F << "\t" << R << "\t" << K << endl;
  }
}