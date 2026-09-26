# <h1 align="center">Laporan Praktikum Modul 1 - Codeblocks IDE & Pengenalan Bahas C++ (Bagian Pertama)</h1>

<p align="center">Abyan FIto Arrasyid - 109082500086</p>

## Dasar Teori

isi dengan penjelasan dasar teori disertai referensi jurnal (gunakan kurung siku [] untuk pernyataan yang mengambil refernsi dari jurnal).
contoh :
Linked list atau yang disebut juga senarai berantai adalah Salah satu bentuk struktur data yang berisi kumpulan data yang tersusun secara sekuensial, saling bersambungan, dinamis, dan terbatas[1]. Linked list terdiri dari sejumlah node atau simpul yang dihubungkan secara linier dengan bantuan pointer.

### A. Bahasa Pemrograman C++<br/>
C++ merupakan bahasa pemrograman yang dikembangkan oleh Bjarne Stroustrup pada awal tahun 1980-an dengan berbasiskan bahasa C. C++ dikembangkan dengan menambahkan berbagai fasilitas, salah satunya adalah konsep kelas serta pembebanan operator dan fungsi. Bahasa C++ dapat digunakan untuk membuat berbagai jenis program dan dalam pembelajaran pemrograman dasar dapat digunakan untuk memahami konsep struktur program, tipe data, variabel, operator, percabangan, perulangan, serta fungsi. Modul praktikum menggunakan bahasa C++ sebagai bahasa pemrograman utama dalam implementasi program.

#### 1. Struktur Program C++<br/>
Struktur program C++ secara umum terdiri atas bagian deklarasi library, deklarasi konstanta, deklarasi tipe data, deklarasi variabel, deklarasi fungsi atau prosedur, dan fungsi utama main(). Fungsi main() merupakan bagian utama yang menjadi tempat program mulai dieksekusi. Penggunaan library seperti <iostream> memungkinkan program menggunakan fasilitas input dan output seperti cin dan cout.

Setiap statement pada bahasa C++ umumnya diakhiri dengan tanda titik koma (;). Variabel yang digunakan dalam program juga harus dideklarasikan terlebih dahulu sebelum digunakan. Struktur program yang terorganisasi diperlukan agar kode dapat dibaca dan dikembangkan dengan lebih mudah.

#### 2. Identifier, Tipe Data, dan Variabel<br/>
Identifier merupakan nama yang digunakan untuk membedakan variabel, konstanta, fungsi, maupun objek lain yang didefinisikan dalam program. Bahasa C++ bersifat case sensitive, sehingga penggunaan huruf besar dan huruf kecil pada identifier dianggap berbeda.

Tipe data digunakan untuk menentukan jenis nilai yang dapat disimpan oleh suatu variabel. Beberapa tipe data dasar yang digunakan dalam C++ antara lain char untuk karakter, int untuk bilangan bulat, float dan double untuk bilangan pecahan. Variabel merupakan tempat penyimpanan data yang nilainya dapat berubah selama program dijalankan.

#### 3. Konstanta<br/>
Konstanta merupakan nilai yang bersifat tetap selama program berjalan. Dalam C++, konstanta dapat dideklarasikan menggunakan kata kunci const. Contohnya adalah const float phi = 3.14;. Dengan menggunakan konstanta, suatu nilai dapat dibuat agar tidak berubah secara tidak sengaja selama program dijalankan.

### B. Input, Output, dan Operator<br/>

Input dan output merupakan bagian penting dalam program karena memungkinkan program berinteraksi dengan pengguna. Dalam C++, operasi input dan output dapat dilakukan menggunakan fasilitas yang tersedia pada library <iostream>. Selain itu, operator digunakan untuk melakukan berbagai operasi terhadap data dan variabel.

#### 1. Input dan Output<br/>
Output digunakan untuk menampilkan informasi kepada pengguna. Dalam C++, fungsi atau objek cout digunakan untuk menampilkan data ke layar. Sementara itu, input digunakan untuk menerima data yang diberikan oleh pengguna melalui keyboard dan dapat dilakukan menggunakan cin.

Operator << digunakan bersama cout untuk mengirimkan data ke output, sedangkan operator >> digunakan bersama cin untuk memasukkan data dari input ke dalam variabel. Penggunaan cin dan cout merupakan salah satu konsep dasar yang umum diperkenalkan dalam pembelajaran bahasa C++

#### 2. Operator Aritmatika dan Assignment<br/>
Operator merupakan simbol yang digunakan untuk melakukan operasi atau manipulasi terhadap data. Operator aritmatika dalam C++ meliputi penjumlahan (+), pengurangan (-), perkalian (*), pembagian (/), dan modulus (%). Operator tersebut digunakan untuk melakukan perhitungan terhadap nilai atau variabel.

Selain operator aritmatika, terdapat operator assignment yang digunakan untuk memberikan atau mengubah nilai suatu variabel. Operator assignment dasar adalah =, sedangkan bentuk lainnya antara lain +=, -=, *=, /=, dan %=.

#### 3. Operator Logika dan Unary<br/>
Operator logika digunakan untuk melakukan operasi terhadap kondisi yang menghasilkan nilai benar atau salah. Operator logika yang umum digunakan dalam C++ adalah && untuk AND, || untuk OR, dan ! untuk NOT.

C++ juga memiliki operator unary seperti ++ dan --. Operator ++ digunakan untuk menambah nilai suatu variabel sebesar satu, sedangkan -- digunakan untuk mengurangi nilai sebesar satu. Operator tersebut dapat digunakan dalam bentuk prefix maupun postfix. Pada prefix, perubahan nilai dilakukan sebelum nilai digunakan dalam ekspresi, sedangkan pada postfix, nilai digunakan terlebih dahulu kemudian dilakukan perubahan.
## Guided

### 1. ...

```C++
#include <iostream>
using namespace std;
int main(){
int W, X, Y; float Z;
X = 7; Y = 3; W = 1;
Z = (X + Y)/(Y + W);
cout<< "Nilai z = " << Z << endl;
return 0;
}
```

Program ini digunakan untuk menghitung nilai `Z` dari variabel `X`, `Y`, dan `W`. Nilai `X = 7`, `Y = 3`, dan `W = 1`, kemudian `Z` dihitung dengan rumus `(X + Y) / (Y + W)`. Hasil perhitungan ditampilkan menggunakan `cout`.

### 2. ...

```C++
#include <iostream>
using namespace std;
int main(){
int r = 10;
int s;
s=10 + ++r;
cout<< "Nilai r= "<<r<<endl;
cout<< "Nilai s= "<<s<<endl;
return 0;
}
```
Program ini mendeklarasikan variabel r dengan nilai 10 dan variabel s. Pada s = 10 + ++r, operator ++r menaikkan nilai r terlebih dahulu menjadi 11, kemudian ditambahkan dengan 10 sehingga nilai s menjadi 21. Selanjutnya, cout digunakan untuk menampilkan nilai r dan s, yaitu 11 dan 21.

### 3. ...

```C++
#include <iostream>
#include <stdlib.h>
using namespace std;
int main(){
int r = 10;
int s;
s=10 + r++;
cout<< "Nilai r= "<<r<<endl;
cout<< "Nilai s= "<<s<<endl;
return 0;
}
```

Program ini mendeklarasikan `r` dengan nilai 10 dan `s` sebagai variabel integer. Pada `s = 10 + r++`, nilai `r` digunakan terlebih dahulu yaitu 10, kemudian `r` bertambah menjadi 11. Sehingga nilai `s` menjadi 20. Perintah `cout` menampilkan nilai `r` yaitu 11 dan nilai `s` yaitu 20.

### 4. ...

```C++
#include <iostream>
using namespace std;
int main(){
double tot_pembelian, diskon;
cout<<"total pembelian: Rp";
cin>>tot_pembelian;
diskon = 0;
if(tot_pembelian >= 100000)
diskon = 0.05*tot_pembelian;
cout<<"besar diskon = Rp" <<diskon;
}
```

Program ini digunakan untuk menghitung diskon berdasarkan total pembelian. Variabel `tot_pembelian` dan `diskon` bertipe `double`, kemudian pengguna diminta memasukkan total pembelian. Jika total pembelian minimal Rp100.000, maka diskon yang diberikan sebesar 5% dari total pembelian. Hasil diskon kemudian ditampilkan menggunakan `cout`.


### 5. ...

```C++
#include <iostream>
using namespace std;
int main(){
double tot_pembelian, diskon;
cout<<"total pembelian: Rp";
cin>>tot_pembelian;
diskon = 0;
if(tot_pembelian >= 100000)
diskon = 0.05*tot_pembelian;
else
diskon = 0;
cout<<"besar diskon = Rp" <<diskon;
}
```

Program ini digunakan untuk menghitung diskon berdasarkan total pembelian. Jika total pembelian minimal Rp100.000, maka diberikan diskon sebesar 5%. Jika kurang dari Rp100.000, maka tidak mendapatkan diskon. Hasil diskon kemudian ditampilkan menggunakan `cout`.

### 6. ...

```C++
#include <iostream>
using namespace std;
int main(){
int kode_hari;
puts("Menentukan hari kerja/libur\n");
puts("1=Senin 3=Rabu 5=Jumat 7=Minggu ");
puts("2=Selasa 4=Kamis 6=Sabtu ");
cin>>kode_hari;
switch(kode_hari){
case 1:
case 2:
case 3:
case 4:
case 5:
cout<<"Hari Kerja"<<endl;
break;
case 6:
case 7:
cout<<"Hari Libur"<<endl;
break;
default:
cout<<"Kode masukan salah!!!"<<endl;
}
return 0;
}
```

Program ini digunakan untuk menentukan apakah suatu hari termasuk hari kerja atau hari libur berdasarkan kode hari yang dimasukkan. Pernyataan switch memeriksa kode 1–5 sebagai hari kerja, sedangkan kode 6–7 sebagai hari libur. Jika kode yang dimasukkan tidak sesuai, program menampilkan pesan bahwa kode masukan salah.

### 7. ...

```C++
#include <iostream>
using namespace std;
int main(){
int jum;
cout<<"jumlah perulangan: ";
cin>>jum;
for(int i=0; i<jum; i++){
cout<<"saya pintar\n";
}
return 0;
}
```

Program ini digunakan untuk menampilkan kalimat **"saya pintar"** sebanyak jumlah perulangan yang dimasukkan pengguna. Perulangan `for` menggunakan variabel `i` yang dimulai dari 0 dan berjalan selama `i < jum`. Setelah setiap perulangan, nilai `i` bertambah satu hingga mencapai jumlah yang ditentukan.

### 8. ...

```C++
#include <iostream>
using namespace std;
int main(){
int i=1;
int jum;
cout<<"masukan banyak baris: ";
cin>>jum;
while(i<=jum){
cout<<"baris ke-"<<i<<endl;
i++; 
}
return 0;
}
```

Program ini digunakan untuk menampilkan nomor baris sesuai jumlah yang dimasukkan. Perulangan `while` berjalan selama `i <= jum`, kemudian `i++` digunakan untuk menambah nilai `i` hingga jumlah baris yang ditentukan tercapai.

### 9. ...

```C++
#include <iostream>
using namespace std;
int main(){
int i = 1;
int jum;
cin >> jum;
do{
cout << "baris ke-" <<(i+1)<<endl;
i++;
} while(i<jum);
return 0;
}
```

Program ini digunakan untuk menampilkan nomor baris berdasarkan jumlah yang dimasukkan pengguna. Perulangan `do-while` menjalankan perintah terlebih dahulu, kemudian memeriksa kondisi `i < jum`. Nilai `i` bertambah satu menggunakan `i++`, sedangkan `(i+1)` digunakan untuk menampilkan nomor baris.

### 10. ...

```C++
#include <iostream>
#define MAX 5
using namespace std;
int main(){
int i;
struct data{
char nama[40];
int nilai;
};
data siswa[MAX];
for(i=0; i<MAX; i++){
cout<<"masukkan data ke-"<<i+1<<endl;
cout<<"nama = ";
cin>>siswa[i].nama;
cout<<"nilai = ";
cin>>siswa[i].nilai;
}
cout<<"\ndata siswa\n";
cout<<"=======";
for(i=0; i<MAX; i++){
cout<<"\n\ndata ke-"<<i+1;
cout<<"\n\nnama="<<siswa[i].nama;
cout<<"\n\nnilai="<<siswa[i].nilai;
}
return 0;
}
```

Program ini digunakan untuk menyimpan dan menampilkan data 5 siswa menggunakan `struct`. Struktur `data` memiliki atribut `nama` dan `nilai`, kemudian `data siswa[MAX]` membuat array untuk 5 siswa. Perulangan `for` digunakan untuk memasukkan data setiap siswa dan kemudian menampilkan seluruh data yang telah dimasukkan.

### 11. ...

```C++
#include <iostream>
using namespace std;

float ctof(float celcius);
int main() {
float celcius, fahrenheit;
cout <<"nilai Celcius? ";
cin >> celcius;
fahrenheit = ctof(celcius);
cout<<celcius<<" Celcius adalah "<<fahrenheit<<" Fahrenheit"<<endl;
return 0;
}

float ctof(float celcius){
return (celcius * 1.8) + 32;
}
```

Program ini digunakan untuk mengonversi suhu dari Celcius ke Fahrenheit. Fungsi `ctof()` menerima nilai Celcius sebagai parameter dan menghitungnya dengan rumus `(Celcius × 1.8) + 32`. Hasil konversi kemudian ditampilkan oleh program.

## Unguided

### 1. (isi dengan soal unguided 1)

```C++
#include <iostream>
using namespace std;

int main() {
    float b1, b2, total;
    cout << "Masukkan bilangan pertama: ";
    cin >> b1;
    cout << "Masukkan bilangan kedua: ";
    cin >> b2;
    total = b1 + b2;
    cout << "Penjumlahan: " << total << endl;
    total = b1 - b2;
    cout << "Pengurangan: " << total << endl;
    total = b1 * b2;
    cout << "Perkalian: " << total << endl;
    total = b1 / b2;
    cout << "Pembagian: " << total << endl;
    return 0;
}
```

### Output Unguided 1 :

##### Output 1

<img width="1658" height="215" alt="Soal1_1" src= "https://github.com/Ftoo784/109082500086_Abyan-Fito-Arrasyid/blob/main/109082500086_Abyan%20Fito%20Arrasyid_MODUL%201/Output/Soal_1.png" />


##### Output 2

<img width="1728" height="203" alt="Soal1_2" src= "https://github.com/Ftoo784/109082500086_Abyan-Fito-Arrasyid/blob/main/109082500086_Abyan%20Fito%20Arrasyid_MODUL%201/Output/Soal_1(2).png" />


Program ini digunakan untuk melakukan operasi aritmatika pada dua bilangan yang dimasukkan pengguna. Program menghitung penjumlahan, pengurangan, perkalian, dan pembagian menggunakan variabel `b1` dan `b2`, kemudian setiap hasilnya disimpan dalam `total` dan ditampilkan menggunakan `cout`.

### 2. (isi dengan soal unguided 2)

```C++
#include <iostream>
#include <string>
using namespace std;

int main() {
    int angka;
    string teks[] = {"nol", "satu", "dua", "tiga", "empat", "lima", "enam", "tujuh", "delapan", "sembilan", "sepuluh", "sebelas"};
    string kapital[] = {"", "Satu", "Dua", "Tiga", "Empat", "Lima", "Enam", "Tujuh", "Delapan", "Sembilan"};

    cout << "Masukkan angka (0 - 100): ";
    cin >> angka;

    if (angka < 0 || angka > 100) {
        cout << "Hanya angka 0 - 100" << endl;
        return 0;
    }

    cout << angka << " : ";

    if (angka >= 0 && angka <= 11) {
        cout << teks[angka];
    } 
    else if (angka >= 12 && angka <= 19) {
        cout << teks[angka % 10] << " belas";
    } 
    else if (angka >= 20 && angka <= 99) {
        cout << teks[angka / 10] << " puluh";
        if (angka % 10 != 0) {
            cout << " " << kapital[angka % 10];
        }
    } 
    else if (angka == 100) {
        cout << "seratus";
    }

    cout << endl;
    return 0;
}
```

### Output Unguided 2 :

##### Output 1

<img width="1721" height="200" alt="Soal2_1" src="https://github.com/Ftoo784/109082500086_Abyan-Fito-Arrasyid/blob/main/109082500086_Abyan%20Fito%20Arrasyid_MODUL%201/Output/Soal_2.png" />


##### Output 2

<img width="1720" height="191" alt="Soal2_2" src="https://github.com/Ftoo784/109082500086_Abyan-Fito-Arrasyid/blob/main/109082500086_Abyan%20Fito%20Arrasyid_MODUL%201/Output/Soal_2(2).png" />


Program ini digunakan untuk mengubah angka 0–100 menjadi bentuk tulisan dalam bahasa Indonesia. Program menggunakan array `teks` dan `kapital` untuk menyimpan kata bilangan, kemudian `if-else` menentukan bentuk penulisan berdasarkan nilai angka, seperti satuan, belasan, puluhan, dan seratus. Jika angka di luar 0–100, program menampilkan pesan bahwa input tidak valid.

### 3. (isi dengan soal unguided 3)

```C++
#include <iostream>
using namespace std;

int main() {
    int n;
    
    cout << "input: ";
    cin >> n;
    
    cout << "output:\n";
    
    for (int i = n; i >= 0; i--) {
        
        for (int j = 0; j < n - i; j++) {
            cout << "  ";
        }

        for (int j = i; j >= 1; j--) {
            cout << j << " ";
        }

        cout << "*";

        for (int j = 1; j <= i; j++) {
            cout << " " << j;
        }
        
        cout << endl;
    }

    return 0;
}
```

### Output Unguided 3 :

##### Output 1

<img width="1732" height="208" alt="Soal3_1" src="https://github.com/Ftoo784/109082500086_Abyan-Fito-Arrasyid/blob/main/109082500086_Abyan%20Fito%20Arrasyid_MODUL%201/Output/Soal_3.png" />


##### Output 2

<img width="1717" height="366" alt="Soal3_2" src="https://github.com/Ftoo784/109082500086_Abyan-Fito-Arrasyid/blob/main/109082500086_Abyan%20Fito%20Arrasyid_MODUL%201/Output/Soal_3(2).png" />


Program ini digunakan untuk membuat pola angka berbentuk segitiga berdasarkan nilai `n` yang dimasukkan. Perulangan `for` pertama mengatur jumlah baris, sedangkan perulangan berikutnya digunakan untuk mencetak spasi, angka dari besar ke kecil, tanda `*`, dan angka dari kecil ke besar.

## Kesimpulan
C++ memiliki berbagai konsep dasar seperti variabel, operator, percabangan, perulangan, array, struct, dan fungsi. Konsep-konsep tersebut digunakan untuk membuat program sederhana, mulai dari perhitungan sampai pengolahan data dan pembuatan pola.
...

## Referensi

[1] Triase. (2020). Diktat Edisi Revisi : STRUKTUR DATA. Medan: UNIVERSTAS ISLAM NEGERI SUMATERA UTARA MEDAN.
<br>[2] Dewi, L. J. E. (2010). Media Pembelajaran Bahasa Pemrograman C++. Jurnal Pendidikan Teknologi dan Kejuruan, 7(1).
<br>[3] Vahrenhold, J., et al. (2021). Developing An Understanding Of Variables And Expressions In Introductory Programming Courses. European Proceedings.
<br>[4] Conditional statements, looping constructs, and program comprehension: an experimental study. International Journal of Man-Machine Studies, 28(1), 45–66, 1988.
<br>[5] A Systematic Review of Approaches for Evaluating Students’ Function-Level Code Structure Knowledge with a Catalog of All Discussed Patterns. ACM Transactions on Computing Education, 26(2), 2026
<br>[6] Nugroho, A. Y., & Sutanto, N. H. (2024). Exploring the Code Foundation: A Literature Review of Data Structures in C++. International Journal of Mechanical, Industrial and Control Systems Engineering, 1(3).
