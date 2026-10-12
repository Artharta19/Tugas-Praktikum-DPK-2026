#include <iostream>
using namespace std;

int main() {
  cout << "P\tQ\tP OR Q\tP AND Q\tNOT P\tP XOR Q" << endl;

  for (int p = 1; p >= 0; p--) {
    for (int q = 1; q >= 0; q--) {
      int orHasil = p || q;
      int andHasil = p && q;
      int notP = !p;
      int xorHasil = p ^ q;

      cout << p << "\t" << q << "\t" << orHasil << "\t" << andHasil << "\t"
           << notP << "\t" << xorHasil << "\n";
    }
  }

  return 0;
}