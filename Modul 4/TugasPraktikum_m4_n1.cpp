#include <iostream>
#include <string>
using namespace std;

int main() {
  string kata = "malang";
  int b = kata.length();
  for (int a = 0; a <= b; a++) {
    cout << kata << endl;
    kata.erase(0, 1);
  }
}