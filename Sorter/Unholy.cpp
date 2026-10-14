#include <iostream>

using namespace std;

int main() {
  int arrow[100];
  int batasan = 0;
  int stalin = 0;
  for (int i = 0; i < 10; i++) {
    int j;
    if (i % 2 == 0) {
      j = i * 2 + 6;
    } else {
      j = i * 3 - 2;
    }
    arrow[i] = j;
    batasan++;
  }
  for (int k = 0; k < batasan; k++) {
    cout << arrow[k] << ",";
  }
  for (int x = 0; x < batasan; x++) {
    for (int y = 0; y < x - y - 1; y++) {

      if (stalin > arrow[x]) {
        stalin = arrow[x];
        cout << stalin;
      }
    }
  }
}