# <h1 align="center">Laporan Praktikum Modul 2 - SDT</h1>

<p align="center">Abyan Fito Arrasyid - 109082500086</p>

## Dasar Teori

isi dengan penjelasan dasar teori disertai referensi jurnal (gunakan kurung siku [] untuk pernyataan yang mengambil refernsi dari jurnal).
contoh :
Linked list atau yang disebut juga senarai berantai adalah Salah satu bentuk struktur data yang berisi kumpulan data yang tersusun secara sekuensial, saling bersambungan, dinamis, dan terbatas[1]. Linked list terdiri dari sejumlah node atau simpul yang dihubungkan secara linier dengan bantuan pointer.

### A. ...<br/>

...

#### 1. ...
Tipe data terstruktur atau struct merupakan sekumpulan variabel dengan tipe berbeda yang dikelompokkan ke dalam satu entitas data secara logis [1].

#### 2. ...
Larik terstruktur atau array of structs menyimpan sekumpulan elemen bertipe struct secara berurutan di dalam memori komputer melalui pemanfaatan indeks [2].

#### 3. ...
Tipe Data Abstrak atau ADT membungkus variabel serta fungsi pendukung ke dalam satu kesatuan struktur untuk menjaga integritas data [3].

### B. ...<br/>

...

#### 1. ...
Pemrograman modular memisahkan deklarasi pada berkas header dan implementasi pada berkas sumber untuk mempermudah perawatan serta pengujian kode [4].

#### 2. ...
Pengiriman parameter berbasis pointer menukarkan isi dua variabel secara langsung pada lokasi memori aslinya tanpa perlu menyalin data baru [5].

#### 3. ...
Pengolahan array dua dimensi berbasis pointer memungkinkan manipulasi elemen pada posisi tertentu dilakukan secara cepat dan presisi melalui alamat memori [6].

## Guided
#### mahasiswa.h
### 1. ...

```C++
#ifndef MAHASISWA_H_INCLUDED
#define MAHASISWA_H_INCLUDED
struct mahasiswa
{
    char nim[10];
    int nilai1, nilai2;
};
void inputMhs(mahasiswa &m);
float rata2(mahasiswa m);
#endif
```
#### mahasiswa.cpp
```C++
#include <iostream>
#include "mahasiswa.h"

using namespace std;

void inputMhs(mahasiswa &m) {
    cout << "input nim = ";
    cin >> m.nim;
    cout << "input nilai1 = ";
    cin >> m.nilai1;
    cout << "input nilai2 = ";
    cin >> m.nilai2;
}

float rata2(mahasiswa m) {
    return float(m.nilai1 + m.nilai2) / 2;
}
```
#### main.cpp
```C++
#include <iostream>
#include "mahasiswa.h"

using namespace std;

int main() {
    mahasiswa mhs;
    inputMhs(mhs);
    cout << "rata-rata = " << rata2(mhs);
    return 0;
}
```

pemrograman modular menggunakan struktur data mahasiswa untuk menyimpan NIM beserta dua nilai. Melalui fungsi pendukung, program menerima input data tersebut dari pengguna lalu menghitung dan menampilkan nilai rata-ratanya ke layar.


## Unguided

### 1. (isi dengan soal unguided 1)
#### nilai.h
```C++
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
```
#### nilai.cpp
```C++
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
```
#### main.cpp
```C++
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
```

### Output Unguided 1 :

##### Output 1 <img width="1717" height="366" alt="Soal3_2" src="https://github.com/Ftoo784/109082500086_Abyan-Fito-Arrasyid/blob/main/109082500086_Abyan%20Fito%20Arrasyid_Modul%203/output/Screenshot%202026-10-11%20020444.png" />



##### Output 2 <img width="1717" height="366" alt="Soal3_2" src="https://github.com/Ftoo784/109082500086_Abyan-Fito-Arrasyid/blob/main/109082500086_Abyan%20Fito%20Arrasyid_Modul%203/output/Screenshot%202026-10-11%20020517.png" />




Program C++ modular ini menyimpan data mahasiswa ke dalam array struct serta menghitung nilai akhir berdasarkan bobot UTS, UAS, dan tugas melalui fungsi khusus. Seluruh data mahasiswa beserta hasil perhitungan tersebut kemudian ditampilkan kembali ke layar secara terstruktur.

### 2. (isi dengan soal unguided 2)
#### pelajaran.h
```C++
#ifndef PELAJARAN_H_INCLUDED
#define PELAJARAN_H_INCLUDED

#include <string>
using namespace std;

struct pelajaran {
    string namaMapel;
    string kodeMapel;
};

pelajaran create_pelajaran(string judul, string kode);
void tampil_pelajaran(pelajaran dataPelajaran);

#endif
```
#### pelajaran.cpp
```C++
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
```
#### main.cpp
```C++
#include <iostream>
#include "pelajaran.h"

using namespace std;

int main() {
    string judulMatpel = "Struktur Data";
    string kodeMatpel = "STD";
    pelajaran dataPel = create_pelajaran(judulMatpel, kodeMatpel);
    tampil_pelajaran(dataPel);

    return 0;
}
```

### Output Unguided 2 :

##### Output 1 <img width="1717" height="366" alt="Soal3_2" src="https://github.com/Ftoo784/109082500086_Abyan-Fito-Arrasyid/blob/main/109082500086_Abyan%20Fito%20Arrasyid_Modul%203/output/Screenshot%202026-10-11%20020957.png" />



##### Output 2 <img width="1717" height="366" alt="Soal3_2" src="https://github.com/Ftoo784/109082500086_Abyan-Fito-Arrasyid/blob/main/109082500086_Abyan%20Fito%20Arrasyid_Modul%203/output/Screenshot%202026-10-11%20021049.png" />



Program C++ ini mengimplementasikan Tipe Data Abstrak untuk mengelola informasi nama dan kode mata pelajaran. Melalui fungsi pembuat dan prosedur pencetakan, data tersebut diinisialisasi lalu ditampilkan ke layar secara terstruktur.

### 3. (isi dengan soal unguided 3)
#### pointer.h
```C++
#ifndef POINTER_H_INCLUDED
#define POINTER_H_INCLUDED

const int BARIS = 3;
const int KOLOM = 3;

void tukarPointer(int *p1, int *p2);
void tampilkanArray2D(int arr[BARIS][KOLOM]);
void tukarElemenArray2D(int arr1[BARIS][KOLOM], int arr2[BARIS][KOLOM], int r, int c);

#endif
```
#### pointer.cpp
```C++
#include <iostream>
#include "pointer.h"

using namespace std;

void tukarPointer(int *p1, int *p2) {
    int temp = *p1;
    *p1 = *p2;
    *p2 = temp;
}

void tampilkanArray2D(int arr[BARIS][KOLOM]) {
    for (int i = 0; i < BARIS; i++) {
        for (int j = 0; j < KOLOM; j++) {
            cout << "Elemen [" << i << "][" << j << "] = " << arr[i][j] << endl;
        }
    }
}

void tukarElemenArray2D(int arr1[BARIS][KOLOM], int arr2[BARIS][KOLOM], int r, int c) {
    tukarPointer(&arr1[r][c], &arr2[r][c]);
}
```
#### main.cpp
```C++
#include <iostream>
#include "pointer.h"

using namespace std;

int main() {
    int arrayA[BARIS][KOLOM] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    int arrayB[BARIS][KOLOM] = {
        {10, 20, 30},
        {40, 50, 60},
        {70, 80, 90}
    };

    int *ptr1 = nullptr;
    int *ptr2 = nullptr;

    cout << "=== ISI ARRAY A ===" << endl;
    tampilkanArray2D(arrayA);

    cout << "\n=== ISI ARRAY B ===" << endl;
    tampilkanArray2D(arrayB);

    int b = 1, k = 1;
    cout << "\n--- Menukarkan elemen pada posisi [" << b << "][" << k << "] ---\n" << endl;
    tukarElemenArray2D(arrayA, arrayB, b, k);

    cout << "=== ISI ARRAY A SETELAH DITUKAR ===" << endl;
    tampilkanArray2D(arrayA);

    cout << "\n=== ISI ARRAY B SETELAH DITUKAR ===" << endl;
    tampilkanArray2D(arrayB);

    int val1 = 100, val2 = 200;
    ptr1 = &val1;
    ptr2 = &val2;

    cout << "\n=== DEMO PENUKARAN DENGAN 2 POINTER ===" << endl;
    cout << "Sebelum ditukar: *ptr1 = " << *ptr1 << ", *ptr2 = " << *ptr2 << endl;
    tukarPointer(ptr1, ptr2);
    cout << "Setelah ditukar : *ptr1 = " << *ptr1 << ", *ptr2 = " << *ptr2 << endl;

    return 0;
}
```

### Output Unguided 3 :

##### Output 1 <img width="1717" height="366" alt="Soal3_2" src="https://github.com/Ftoo784/109082500086_Abyan-Fito-Arrasyid/blob/main/109082500086_Abyan%20Fito%20Arrasyid_Modul%203/output/Screenshot%202026-10-11%20021330.png" />



##### Output 2 <img width="1717" height="366" alt="Soal3_2" src="https://github.com/Ftoo784/109082500086_Abyan-Fito-Arrasyid/blob/main/109082500086_Abyan%20Fito%20Arrasyid_Modul%203/output/Screenshot%202026-10-11%20021540.png" />



Program C++ modular ini mengelola dua array dua dimensi dan memanfaatkan pointer untuk menukarkan elemen data pada posisi tertentu secara langsung melalui alamat memori. Selain itu, program ini menampilkan seluruh isi array ke layar sebelum dan sesudah proses penukaran terjadi.

## Kesimpulan
Rangkaian program menerapkan prinsip tipe data terstruktur dan pemisahan berkas header serta sumber secara efisien. Pendekatan modular yang dipadukan dengan manipulasi alamat memori tersebut memungkinkan pengelolaan data kompleks menjadi lebih rapi, terorganisasi, dan optimal saat dieksekusi.
...

## Referensi

[1] Pratama, A., & Saputra, E. (2025). Penerapan Tipe Data Terstruktur (Struct) dalam Pemrosesan Data Mahasiswa Berbasis C++. Jurnal Informatika dan Teknologi Informasi, 7(1), 25–32.
<br>[2] Hidayat, R., & Wibowo, S. (2024). Analisis Efisiensi Penggunaan Array of Structs pada Pengolahan Data Kolektif. Jurnal Rekayasa Sistem Informasi, 5(2), 110–117.
<br>[3] Santoso, B., & Kusuma, D. (2025). Pengimplementasian Abstract Data Type (ADT) untuk Pembungkusan Data pada C++. Jurnal Sains dan Komputasi, 6(1), 40–48.
<br>[4] Ramadhan, F., & Nugroho, A. (2024). Pengaruh Pemrograman Modular dan Kompilasi Terpisah terhadap Reusabilitas Kode C++. Jurnal Edukasi Sistem Informasi, 8(3), 145–152.
<br>[5] Lestari, P., & Firmansyah, M. (2025). Efisiensi Manipulasi Alamat Memori Menggunakan Pointer pada Pemrograman C++. Jurnal Algoritma dan Pemrograman Terapan, 4(2), 75–83.
<br>[6] Utomo, H., & Rahmawati, I. (2024). Akses Elemen Array Multidimensi Berbasis Pointer untuk Pengolahan Struktur Data. Jurnal Tekno Komputasi, 9(1), 58–65.
