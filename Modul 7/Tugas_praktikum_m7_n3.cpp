#include <iostream>
using namespace std;

int main() {
  int aziz;
  aziz = 70;
  int *p_aziz = &aziz;
  int deva = aziz;
  int dewi = aziz + 3;

  cout << "aziz = " << aziz << "\n";
  cout << "dewi = aziz" << "\n";
  cout << "dewi = aziz + 3" << "\n";

  cout << "Berapakah Nilai Deva?";
  cout << "\nNilai Deva adalah: " << deva;
  cout << "\nBerapakah Nilai Dewi? ";
  cout << "\nNilai Dewi adalah: " << dewi;

  deva = *p_aziz;
  dewi = *p_aziz + 3;

  cout << "\naziz = " << aziz << "\n";
  cout << "deva = &aziz" << "\n";
  cout << "dewi = *aziz + 3" << "\n";

  cout << "Berapakah Nilai Deva?";
  cout << "\nNilai Deva adalah: " << deva;
  cout << "\nBerapakah Nilai Dewi? ";
  cout << "\nNilai Dewi adalah: " << dewi;
}