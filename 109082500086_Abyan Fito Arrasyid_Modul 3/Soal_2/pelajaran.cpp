#include <iostream>
#include "pelajaran.h"

using namespace std;

pelajaran create_pelajaran(string judul, string kode) {
    pelajaran dataPelajaran;
    dataPelajaran.namaMapel = judul;
    dataPelajaran.kodeMapel = kode;
    return dataPelajaran;
}

void tampil_pelajaran(pelajaran dataPelajaran) {
    cout << "nama pelajaran : " << dataPelajaran.namaMapel << endl;
    cout << "nilai : " << dataPelajaran.kodeMapel << endl;
}