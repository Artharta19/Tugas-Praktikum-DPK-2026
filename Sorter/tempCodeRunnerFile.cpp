#include <iostream>
using namespace std;

void sorter(int data[], int count) {
  for (int j = 0; j < count; j++) {
    for (int k = 0; k < count; k++) {
      int temp;
      if (data[j] < data[k]) {
        temp = data[k];
        data[k] = data[j];
        data[j] = temp;
      }
    }
  }
  for (int k = 0; k < count; k++) {
    cout << data[k] << ",";
  }
}