#include <cstdio>
#include <iostream>
#include <stdio.h>
using namespace std;

typedef struct {
  long long NIM;
  char nama[100];
  float ipk;
} DataMhs;

int main(int argc, char *argv[]) {
  FILE *MHS;
  DataMhs RekMhs;
  MHS = fopen("Databejir.txt", "wb");
  cout << "Nim = ";
  cin >> RekMhs.NIM;
  cout << "Nama = ";
  cin >> RekMhs.nama;
  cout << "IPK = ";
  cin >> RekMhs.ipk;
  fwrite(&RekMhs, sizeof(RekMhs), 1, MHS);
  fclose(MHS);

  cout << "Membuka file data ";
  FILE *Bukamhs;
  Bukamhs = fopen("Databejir.txt", "r");
  fread(&RekMhs, sizeof(RekMhs), 1, Bukamhs);
  cout << "\nNama: " << RekMhs.nama;
  cout << "\nNim: " << RekMhs.NIM;
  cout << "\nIpk:  " << RekMhs.ipk;
  fclose(Bukamhs);
}