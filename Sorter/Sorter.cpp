#include <iostream>
using namespace std;

// Selection sort: sort the array in ascending order
void selectionSort(int data[], int n) {
  for (int i = 0; i < n - 1; i++) {
    int minIndex = i; // assume the smallest is at position i

    for (int j = i + 1; j < n; j++) {
      if (data[j] < data[minIndex]) {
        minIndex = j; // found a smaller one, remember its position
      }
    }

    // swap the smallest found with the element at position i
    int temp = data[i];
    data[i] = data[minIndex];
    data[minIndex] = temp;
  }
}

int main() {
  int data[] = {64, 25, 12, 22, 11};
  int n = 5;

  cout << "Before: ";
  for (int i = 0; i < n; i++) {
    cout << data[i] << " ";
  }
  cout << endl;

  selectionSort(data, n);

  cout << "After : ";
  for (int i = 0; i < n; i++) {
    cout << data[i] << " ";
  }
  cout << endl;

  return 0;
}