# <h1 align="center">Laporan Praktikum Modul 2 - Pointer</h1>

<p align="center">Abyan Fito Arrasyid - 109082500086</p>

## Dasar Teori

isi dengan penjelasan dasar teori disertai referensi jurnal (gunakan kurung siku [] untuk pernyataan yang mengambil refernsi dari jurnal).
contoh :
Linked list atau yang disebut juga senarai berantai adalah Salah satu bentuk struktur data yang berisi kumpulan data yang tersusun secara sekuensial, saling bersambungan, dinamis, dan terbatas[1]. Linked list terdiri dari sejumlah node atau simpul yang dihubungkan secara linier dengan bantuan pointer.

### A. ...<br/>

...

#### 1. ...
Array adalah struktur data statis yang menyimpan sekumpulan elemen bertipe data homogen dalam lokasi memori yang tersusun secara berurutan atau kontigu[1]. Array multidimensi, seperti array dua dimensi, memperluas konsep ini dengan menyusun data ke dalam bentuk baris dan kolom sehingga memudahkan pemrosesan struktur matriks maupun tabel secara sistematis[1].

#### 2. ...
Pointer merupakan variabel khusus dalam C++ yang dirancang untuk menyimpan alamat memori dari variabel lain, bukan menyimpan nilai datanya secara langsung[2]. Penggunaan operator alamat (&) untuk mengambil lokasi RAM dan operator dereferensi (*) untuk mengakses nilai di alamat tersebut memungkinkan program melakukan manipulasi data secara presisi dan dinamis[2].

#### 3. ...
Pengiriman parameter berbasis referensi (&) dan pointer (*) memungkinkan suatu fungsi untuk mengakses serta mengubah variabel asli yang berada pada lingkup pemanggil tanpa membuat salinan baru di memori[3]. Mekanisme ini meningkatkan efisiensi eksekusi program dan menghemat penggunaan alokasi RAM ketika mengolah data berukuran besar[3].

### B. ...<br/>

...

#### 1. ...
Operasi aljabar seperti penjumlahan, pengurangan, dan perkalian matriks diimplementasikan menggunakan perulangan bersarang pada struktur array dua dimensi[4]. Pada perkalian matriks, nilai setiap elemen diperoleh dari hasil penjumlahan perkalian antara elemen baris pada matriks pertama dengan elemen kolom pada matriks kedua secara akumulatif[4].

#### 2. ...
Pemrograman modular adalah teknik penulisan kode dengan membagi program utama menjadi sub-program atau fungsi yang lebih kecil dan independen[5]. Pendekatan ini berfungsi mencegah penulisan kode yang berulang, meningkatkan keterbacaan instruksi, serta mempermudah proses perawatan (maintenance) dan pengujian program[5].

#### 3. ...
Penggabungan perulangan do-while dan percabangan switch-case merupakan struktur standar dalam membangun antarmuka program berbasis menu interaktif[6]. Perulangan do-while menjamin bahwa opsi menu ditampilkan minimal satu kali sebelum mengevaluasi kondisi keluar, sedangkan switch-case mengarahkan alur eksekusi secara fleksibel sesuai dengan pilihan pengguna[6].

## Guided

### 1. ...

```C++
#include <iostream>
#define MAX 5
using namespace std;
int main()
{
    int i, j;
    float nilai_total, rata_rata;
    float nilai[MAX];
    static int nilai_tahun[MAX][MAX] =
        {{0, 2, 2, 0, 0},
         {0, 1, 1, 1, 0},
         {0, 3, 3, 3, 0},
         {4, 4, 0, 0, 4},
         {5, 0, 0, 0, 5}};
    for (i = 0; i < MAX; i++)
    {
        cout << "masukkan nilai ke-" << i + 1 << endl;
        cin >> nilai[i];
    }
    cout << "\ndata nilai siswa :\n";
    for (i = 0; i < MAX; i++)
        cout << "nilai k-" << i + 1 << "=" << nilai[i] << endl;
    cout << "\n nilai tahunan : \n";
    for (i = 0; i < MAX; i++)
    {
        for (j = 0; j < MAX; j++)
            cout << nilai_tahun[i][j];
        cout << "\n";
    }
    return 0;
}
```

Program C++ ini menerima input lima nilai siswa ke dalam array satu dimensi lalu menampilkannya kembali ke layar. Selain itu, program mencetak matriks 5x5 dari array dua dimensi nilai_tahun yang telah diinisialisasi secara statis.

### 2. ...

```C++
#include <iostream>
using namespace std;
int main()
{
    int x, y;
    int *px;
    x = 87;
    px = &x;
    y = *px;
    cout << "Alamat x= " << &x << endl;
    cout << "Isi px= " << px << endl;
    cout << "Isi X= " << x << endl;
    cout << "Nilai yang ditunjuk px= " << *px << endl;
    cout << "Nilai y= " << y << endl;
    return 0;
}
```

Kode ini memperlihatkan cara kerja pointer yang menyimpan lokasi alamat memori variabel x ke dalam px. Melalui rujukan alamat tersebut, program dapat mengambil nilai 87 dan menyalinnya ke variabel y.

### 3. ...

```C++
#include <iostream>
using namespace std;
int maks3(int a, int b, int c);
int main()
{
    int x, y, z;
    cout << "masukkan nilai bilangan ke-1 =";
    cin >> x;
    cout << "masukkan nilai bilangan ke-2 =";
    cin >> y;
    cout << "masukkan nilai bilangan ke-3 =";
    cin >> z;
    cout << "nilai maksimumnya adalah ="
         << maks3(x, y, z);
    return 0;
}
int maks3(int a, int b, int c)
{
    int temp_max = a;
    if (b > temp_max)
        temp_max = b;
    if (c > temp_max)
        temp_max = c;
    return (temp_max);
}
```

Kode ini meminta pengguna memasukkan tiga angka, kemudian memanfaatkan sebuah fungsi untuk membandingkannya satu per satu. Melalui proses perbandingan tersebut, program dapat menentukan dan menampilkan angka dengan nilai tertinggi.

### 4. ...

```C++
#include <iostream>
using namespace std;
void tulis(int x);
int main()
{
    int jum;
    cout << "jumlah baris kata =";
    cin >> jum;
    tulis(jum);
    return 0;
}
void tulis(int x)
{
    for (int i = 0; i < x; i++)
        cout << "baris ke - " << i + 1 << endl;
}
```

Kode ini meminta pengguna memasukkan jumlah baris yang diinginkan, lalu memanggil fungsi khusus untuk mencetaknya. Fungsi tersebut memanfaatkan perulangan untuk menampilkan teks urutan baris ke layar sesuai dengan angka yang dimasukkan.

### 5. ...

```C++
#include <iostream>
using namespace std;

void tukarValue(int &x, int &y) {
    int temp = x;
    x = y;
    y = temp;
}

void tukarPointer(int *x, int *y) {
    int temp = *x;
    *x = *y;
    *y = temp;
}

void tukarReference(int &x, int &y) {
    int temp = x;
    x = y;
    y = temp;
}   

int main() {
    int a = 5, b = 10;

    cout << "Sebelum tukarValue: a = " << a << ", b = " << b << endl;
    tukarValue(a, b);
    cout << "Setelah tukarValue: a = " << a << ", b = " << b << endl;

    cout << "Sebelum tukarPointer: a = " << a << ", b = " << b << endl;
    tukarPointer(&a, &b);
    cout << "Setelah tukarPointer: a = " << a << ", b = " << b << endl;

    cout << "Sebelum tukarReference: a = " << a << ", b = " << b << endl;
    tukarReference(a, b);
    cout << "Setelah tukarReference: a = " << a << ", b = " << b << endl;

    return 0;
}
```

Program ini memperlihatkan beberapa cara untuk menukar nilai dua variabel menggunakan metode referensi dan pointer. Melalui rujukan alamat memori tersebut, setiap fungsi dapat mengubah isi variabel asli secara langsung sehingga nilainya berhasil saling bertukar.


## Unguided

### 1. (Soal 1)

```C++
#include <iostream>
using namespace std;

const int N = 3;

void inputMatriks(int M[N][N], char nama) {
    cout << "Masukkan elemen matriks " << nama << " (3x3):\n";
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            cout << nama << "[" << i << "][" << j << "]: ";
            cin >> M[i][j];
        }
    }
}

void cetakMatriks(const int M[N][N]) {
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            cout << M[i][j] << "\t";
        }
        cout << endl;
    }
}

void tambahMatriks(const int A[N][N], const int B[N][N], int C[N][N]) {
    for (int i = 0; i < N; i++)
        for (int j = 0; j < N; j++)
            C[i][j] = A[i][j] + B[i][j];
}

void kurangMatriks(const int A[N][N], const int B[N][N], int C[N][N]) {
    for (int i = 0; i < N; i++)
        for (int j = 0; j < N; j++)
            C[i][j] = A[i][j] - B[i][j];
}

void kaliMatriks(const int A[N][N], const int B[N][N], int C[N][N]) {
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            C[i][j] = 0;
            for (int k = 0; k < N; k++) {
                C[i][j] += A[i][k] * B[k][j];
            }
        }
    }
}

int main() {
    int A[N][N], B[N][N], Hasil[N][N];

    inputMatriks(A, 'A');
    cout << endl;
    inputMatriks(B, 'B');

    cout << "\n--- Hasil Penjumlahan (A + B) ---\n";
    tambahMatriks(A, B, Hasil);
    cetakMatriks(Hasil);

    cout << "\n--- Hasil Pengurangan (A - B) ---\n";
    kurangMatriks(A, B, Hasil);
    cetakMatriks(Hasil);

    cout << "\n--- Hasil Perkalian (A * B) ---\n";
    kaliMatriks(A, B, Hasil);
    cetakMatriks(Hasil);

    return 0;
}
```

### Output Soal 1 :

##### Output 1
<img width="1732" height="208" alt="Soal3_1" src=https://github.com/Ftoo784/109082500086_Abyan-Fito-Arrasyid/blob/main/109082500086_Abyan-Fito-Arrasyid_Modul%202/Output/Soal1.png />



##### Output 2
<img width="1732" height="208" alt="Soal3_1" src=https://github.com/Ftoo784/109082500086_Abyan-Fito-Arrasyid/blob/main/109082500086_Abyan-Fito-Arrasyid_Modul%202/Output/Soal1(2).png />



Program ini menerima input elemen dua matriks tiga kali tiga dari pengguna, lalu memproses operasi penjumlahan, pengurangan, dan perkalian di antara keduanya. Seluruh hasil perhitungan tersebut kemudian ditampilkan ke layar secara bertahap melalui fungsi pencetakan matriks.

### 2. (Soal 2)

```C++
#include <iostream>
using namespace std;

void tukarReference3(int &a, int &b, int &c) {
    int temp = a;
    a = b;
    b = c;
    c = temp;
}

void tukarPointer3(int *a, int *b, int *c) {
    int temp = *a;
    *a = *b;
    *b = *c;
    *c = temp;
}

int main() {
    int x = 67, y = 69, z = 911;

    cout << "Kondisi Awal: x = " << x << ", y = " << y << ", z = " << z << endl;

    tukarReference3(x, y, z);
    cout << "Setelah tukarReference3: x = " << x << ", y = " << y << ", z = " << z << endl;

    tukarPointer3(&x, &y, &z);
    cout << "Setelah tukarPointer3: x = " << x << ", y = " << y << ", z = " << z << endl;

    return 0;
}
```

### Output Soal 2 :

##### Output 1 
<img width="1732" height="208" alt="Soal3_1" src=https://github.com/Ftoo784/109082500086_Abyan-Fito-Arrasyid/blob/main/109082500086_Abyan-Fito-Arrasyid_Modul%202/Output/Soal2.png />

##### Output 2
<img width="1732" height="208" alt="Soal3_1" src=https://github.com/Ftoo784/109082500086_Abyan-Fito-Arrasyid/blob/main/109082500086_Abyan-Fito-Arrasyid_Modul%202/Output/Soal2(2).png />

Program ini menggeser posisi nilai tiga variabel secara berurutan menggunakan dua metode, yaitu referensi dan pointer. Kedua fungsi tersebut secara langsung mengubah nilai variabel asli melalui rujukan alamat memori, sehingga susunan nilai variabel x, y, dan z saling berpindah.

### 3. (Soal 3)

```C++
#include <iostream>
using namespace std;

int cariMaksimum(int arr[], int n) {
    int maks = arr[0];
    for (int i = 1; i < n; i++) {
        if (arr[i] > maks) {
            maks = arr[i];
        }
    }
    return maks;
}

int cariMinimum(int arr[], int n) {
    int min = arr[0];
    for (int i = 1; i < n; i++) {
        if (arr[i] < min) {
            min = arr[i];
        }
    }
    return min;
}

void hitungRataRata(int arr[], int n, float &rata) {
    float total = 0;
    for (int i = 0; i < n; i++) {
        total += arr[i];
    }
    rata = total / n;
}

void tampilkanArray(int arr[], int n) {
    cout << "Isi array: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    int arrA[] = {12, 34, 56, 78, 90, 23, 45, 67, 89, 10};
    int n = sizeof(arrA) / sizeof(arrA[0]);
    int pilihan;
    float rataRata = 0;

    do {
        cout << "\n--- Menu Program Array ---\n";
        cout << "1. Tampilkan isi array\n";
        cout << "2. cari nilai maksimum\n";
        cout << "3. cari nilai minimum\n";
        cout << "4. Hitung nilai rata - rata\n";
        cout << "5. Keluar\n";
        cout << "Pilih menu: ";
        cin >> pilihan;

        switch (pilihan) {
            case 1:
                tampilkanArray(arrA, n);
                break;
            case 2:
                cout << "Nilai maksimum = " << cariMaksimum(arrA, n) << endl;
                break;
            case 3:
                cout << "Nilai minimum = " << cariMinimum(arrA, n) << endl;
                break;
            case 4:
                hitungRataRata(arrA, n, rataRata);
                cout << "Nilai rata - rata = " << rataRata << endl;
                break;
            case 5:
                cout << "Program selesai." << endl;
                break;
            default:
                cout << "Pilihan tidak valid!" << endl;
        }
    } while (pilihan != 5);

    return 0;
}
```

### Output Soal 3 :

##### Output 1
<img width="1732" height="208" alt="Soal3_1" src=https://github.com/Ftoo784/109082500086_Abyan-Fito-Arrasyid/blob/main/109082500086_Abyan-Fito-Arrasyid_Modul%202/Output/Soal3.png />



##### Output 2
<img width="1732" height="208" alt="Soal3_1" src=https://github.com/Ftoo784/109082500086_Abyan-Fito-Arrasyid/blob/main/109082500086_Abyan-Fito-Arrasyid_Modul%202/Output/Soal3(2).png />



Program interaktif ini menyediakan menu pilihan untuk mengolah sekumpulan data angka di dalam array. Melalui pemanggilan fungsi tertentu, program dapat menampilkan seluruh elemen array, menentukan nilai tertinggi dan terendah, serta menghitung nilai rata-rata sesuai interaksi pengguna.

## Kesimpulan
mendemonstrasikan konsep dasar pemrosesan data melalui pengolahan array, penggunaan pointer, dan penerapan fungsi modular. Seluruh teknik tersebut dirancang untuk membantu pengelolaan memori serta penyusunan struktur logika program secara efisien.
...

## Referensi

[1] Siahaan, A., & Tantular, R. (2025). Penerapan Konsep Array Pada Struktur Data Untuk Peningkatan Efisiensi Pencarian Dan Penyimpanan Data. Jurnal Sains Informatika Terapan, 4(3), 112–118.
<br>[2] Mulyana, A., & Pratama, R. (2024). Analisis Efisiensi Penggunaan Pointer dan Alokasi Memori pada Bahasa C++. Jurnal Edukasi dan Teknologi Informasi, 5(1), 45–52.
<br>[3] Wijaya, H., & Setiawan, B. (2025). Perbandingan Efisiensi Pass-by-Value dan Pass-by-Reference pada Eksekusi Fungsi C++. Jurnal Algoritma dan Pemrograman, 6(2), 88–95.
<br>[4] Muryani, S., & Kurniawan, D. (2023). Pengolahan Operasi Matriks Berbasis Array Dua Dimensi pada Pemrograman C++. Jurnal Teknokom, 11(1), 34–40.
<br>[5] Jaya, T. D. (2025). Dasar Pemrograman C++ dan Penerapan Konsep Modularisasi Fungsi. Jurnal Riset Pemrograman, 3(1), 15–22.
<br>[6] Nugroho, A., & Sanjaya, M. (2024). Perancangan Menu Interaktif Berbasis Do-While dan Switch-Case pada C++. Jurnal Komputasi dan Sistem Informasi, 8(2), 101–108.
