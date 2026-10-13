#include <iostream>
using namespace std;

void sorter(int data[], int count) {
  for (int j = 0; j < count - 1; j++) {
    for (int k = 0; k < count - j - 1; k++) {
      if (data[k] > data[k + 1]) {
        int temp = data[k];
        data[k] = data[k + 1];
        data[k + 1] = temp;
      }
    }
  }
  for (int k = 0; k < count; k++) {
    cout << data[k] << ",";
  }
}

int main() {
  int bow[100] = {6, 1, 10, 7, 14, 13, 18, 19, 22, 25};
  sorter(bow, 10);

  /* int arrow[100];
  int batasan = 0;
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
  } */
}