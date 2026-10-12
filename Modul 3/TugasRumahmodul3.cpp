#include <cstdlib>
#include <iostream>
using namespace std;

int main(){
    //Block Program 1
    float nilai_keaktifan,nilai_tugas,nilai_ujian,nilai_murni_keaktifan,nilai_murni_tugas,nilai_murni_ujian,nilai_akhir;
    string grade,nama_mahasigwa,kalimat_motivasi;
    cout << "Masukan Nama Mahasigma: ";
    cin >> nama_mahasigwa;
    cout << "\nMasukan Nilai keaktifan: ";
    cin >> nilai_keaktifan;
    cout << "\nMasukan Nilai tugas: ";
    cin >> nilai_tugas;
    cout << "\nMasukan Nilai ujian: ";
    cin >> nilai_ujian;
    if (cin.fail()) {
        cout << "Invalid Grade";
        exit(1);
    }

    //Block Program 2
    nilai_murni_keaktifan = nilai_keaktifan * 20/100;
    nilai_murni_tugas = nilai_tugas * 30/100;
    nilai_murni_ujian = nilai_ujian * 50/100;
    nilai_akhir = nilai_murni_keaktifan + nilai_murni_tugas + nilai_murni_ujian;

    //Block Program 3
    if (nilai_akhir <= 44) {
        grade = "E";
    } else if (nilai_akhir >= 45 && nilai_akhir <= 55) {
        grade = "D";
    } else if (nilai_akhir >= 56 && nilai_akhir <= 65) {
        grade = "C";
    } else if (nilai_akhir >= 66 && nilai_akhir <= 75) {
        grade = "B-";
    } else if (nilai_akhir >= 76 && nilai_akhir <= 80) {
        grade = "B";
    } else if (nilai_akhir >= 81 && nilai_akhir <= 85) {
        grade = "B+";
    } else if (nilai_akhir >= 86 && nilai_akhir <= 90) {
        grade = "A-";
    } else if (nilai_akhir >= 91 && nilai_akhir <= 100) {
        grade = "A";
    }

    //Block Program 4
    if (nilai_akhir <= 55) {
        kalimat_motivasi = "Maaf, Anda belum dapat diluluskan. Tingkatkan terus belajar Anda.";
    } else if (nilai_akhir >= 56 && nilai_akhir <= 65) {
        kalimat_motivasi = "Anda lulus, tingkatkan lagi pencapaian Anda.";
    } else if (nilai_akhir >= 66 && nilai_akhir <= 85) {
        kalimat_motivasi = "Anda lulus dengan baik, tingkatkan terus prestasi Anda";
    } else if (nilai_akhir >= 86 && nilai_akhir <= 100) {
        kalimat_motivasi = "Selamat! Anda lulus dengan nilai yang EXCELLENT";
    }

    //Block Program 5
    cout << "======================================================================\n";
    cout << "Nama Mahasiswa\t: " << nama_mahasigwa;
    cout << "\nNilai\t\t: " << grade;
    cout << "\nMotivasi\t: " << kalimat_motivasi;
    cout << "\n======================================================================\n";
}