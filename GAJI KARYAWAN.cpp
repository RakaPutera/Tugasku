#include <iostream>
#include <string>
using namespace std;

// Fungsi untuk menghitung gaji
double hitungGaji(string golongan, int jamKerja) {
    double upahPerJam;
    double upahLembur = 10000; // Upah lembur
    int jamNormal = 48; // Jam kerja normal

    // Tentukan upah per jam berdasarkan golongan
    if (golongan == "A") upahPerJam = 10000;
    else if (golongan == "B") upahPerJam = 15000;
    else if (golongan == "C") upahPerJam = 20000;
    else if (golongan == "D") upahPerJam = 25000;
    else {
        cout << "Golongan tidak valid!" << endl;
        return 0;
    }

    // Hitung gaji
    if (jamKerja <= jamNormal) {
        return jamKerja * upahPerJam; // Tidak ada lembur
    } else {
        int jamLembur = jamKerja - jamNormal;
        return (jamNormal * upahPerJam) + (jamLembur * upahLembur);
    }
}

int main() {
    string namaKaryawan, golongan;
    int jamKerja;

    // Input data karyawan
    cout << "Masukkan nama karyawan: ";
    getline(cin, namaKaryawan);
    cout << "Masukkan golongan karyawan (A/B/C/D): ";
    cin >> golongan;
    cout << "Masukkan jumlah jam kerja selama seminggu: ";
    cin >> jamKerja;

    // Hitung dan tampilkan gaji
    double gaji = hitungGaji(golongan, jamKerja);
    if (gaji > 0) {
        cout << "Gaji mingguan " << namaKaryawan << " adalah Rp. " << gaji << endl;
    }

    return 0;
}
