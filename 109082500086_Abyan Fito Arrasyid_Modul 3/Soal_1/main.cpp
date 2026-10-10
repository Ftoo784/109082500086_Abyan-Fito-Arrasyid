#include <iostream>
#include "nilai.h"

using namespace std;

int main() {
    Mahasiswa daftarMhs[MAX_MAHASISWA];
    int jumlah;

    cout << "Masukkan jumlah mahasiswa (maksimal 10): ";
    cin >> jumlah;

    if (jumlah > MAX_MAHASISWA) {
        cout << "Jumlah melebihi batas maksimal, otomatis disesuaikan menjadi 10.\n";
        jumlah = MAX_MAHASISWA;
    }

    for (int i = 0; i < jumlah; i++) {
        cout << "\n--- Data Mahasiswa ke-" << i + 1 << " ---\n";
        inputMahasiswa(daftarMhs[i]);
    }

    cout << "\n====================================\n";
    cout << "        DATA NILAI MAHASISWA        \n";
    cout << "====================================\n";
    for (int i = 0; i < jumlah; i++) {
        cout << "\nMahasiswa ke-" << i + 1 << ":\n";
        tampilkanMahasiswa(daftarMhs[i]);
    }

    return 0;
}