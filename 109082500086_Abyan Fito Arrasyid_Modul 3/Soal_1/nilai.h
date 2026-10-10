#ifndef NILAI_H_INCLUDED
#define NILAI_H_INCLUDED

#include <string>
using namespace std;

const int MAX_MAHASISWA = 10;

struct Mahasiswa {
    string nama;
    string nim;
    float uts;
    float uas;
    float tugas;
    float nilaiAkhir;
};

float hitungNilaiAkhir(float uts, float uas, float tugas);
void inputMahasiswa(Mahasiswa &m);
void tampilkanMahasiswa(const Mahasiswa &m);

#endif