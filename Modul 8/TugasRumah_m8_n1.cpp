#include <stdio.h>

int main() {
  FILE *fp;
  int pilihan;
  long nis;
  char nama[30];
  float nilai;

  do {
    printf("\n===== DATA NILAI SISWA =====\n");
    printf("1 - Tambah data siswa\n");
    printf("2 - Tampilkan siswa yang LULUS (nilai >= 75)\n");
    printf("3 - Tampilkan siswa yang REMEDIAL (nilai < 75)\n");
    printf("4 - Keluar\n");
    printf("Pilihan? ");
    scanf("%d", &pilihan);

    if (pilihan == 1) {
      fp = fopen("siswa.dat", "a");
      printf("NIS   : ");
      scanf("%ld", &nis);
      printf("Nama  : ");
      scanf("%s", nama);
      printf("Nilai : ");
      scanf("%f", &nilai);
      fprintf(fp, "%ld %s %.2f\n", nis, nama, nilai);
      fclose(fp);
    } else if (pilihan == 2 || pilihan == 3) {
      fp = fopen("siswa.dat", "r");
      if (fp == NULL) {
        printf("Data siswa masih kosong.\n");
      } else {
        if (pilihan == 2)
          printf("\nSiswa yang LULUS:\n");
        else
          printf("\nSiswa yang REMEDIAL:\n");

        fscanf(fp, "%ld %s %f", &nis, nama, &nilai);
        while (!feof(fp)) {
          if (pilihan == 2 && nilai >= 75)
            printf("%-10ld%-15s%.2f\n", nis, nama, nilai);
          else if (pilihan == 3 && nilai < 75)
            printf("%-10ld%-15s%.2f\n", nis, nama, nilai);

          fscanf(fp, "%ld %s %f", &nis, nama, &nilai);
        }
        fclose(fp);
      }
    }

  } while (pilihan != 4);

  return 0;
}