#include <iostream>
#include "nilai.h"

using namespace std;

float hitungNilaiAkhir(float uts, float uas, float tugas) {
    return (0.3f * uts) + (0.4f * uas) + (0.3f * tugas);
}

void inputMahasiswa(Mahasiswa &m) {
    cout << "Masukkan Nama       : ";
    getline(cin >> ws, m.nama);
    cout << "Masukkan NIM        : ";
    cin >> m.nim;
    cout << "Masukkan Nilai UTS  : ";
    cin >> m.uts;
    cout << "Masukkan Nilai UAS  : ";
    cin >> m.uas;
    cout << "Masukkan Nilai Tugas: ";
    cin >> m.tugas;

    m.nilaiAkhir = hitungNilaiAkhir(m.uts, m.uas, m.tugas);
}

void tampilkanMahasiswa(const Mahasiswa &m) {
    cout << "Nama        : " << m.nama << endl;
    cout << "NIM         : " << m.nim << endl;
    cout << "UTS         : " << m.uts << endl;
    cout << "UAS         : " << m.uas << endl;
    cout << "Tugas       : " << m.tugas << endl;
    cout << "Nilai Akhir : " << m.nilaiAkhir << endl;
}