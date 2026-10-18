# <h1 align="center">Laporan Praktikum Modul 4 - SINGLY LINGKED LIST</h1>

<p align="center">Abyan Fito Arrasyid - 109082500086</p>

## Dasar Teori

isi dengan penjelasan dasar teori disertai referensi jurnal (gunakan kurung siku [] untuk pernyataan yang mengambil refernsi dari jurnal).
contoh :
Linked list atau yang disebut juga senarai berantai adalah Salah satu bentuk struktur data yang berisi kumpulan data yang tersusun secara sekuensial, saling bersambungan, dinamis, dan terbatas[1]. Linked list terdiri dari sejumlah node atau simpul yang dihubungkan secara linier dengan bantuan pointer.

### A. ...<br/>

...

#### 1. ...
Singly linked list adalah struktur data dinamis linier yang terdiri dari sekumpulan simpul, di mana setiap simpul menyimpan data dan sebuah penunjuk ke simpul berikutnya [1].

#### 2. ...
Simpul merupakan unit elemen dasar pembentuk linked list yang memuat bidang data serta bidang alamat penunjuk untuk menghubungkan antar elemen secara sekuensial [2].

#### 3. ...
Alokasi memori dinamis menggunakan kata kunci new berfungsi memesan ruang memori secara fleksibel di dalam area heap saat program sedang berjalan [3].

### B. ...<br/>

...

#### 1. ...
Operasi insertFirst menempatkan simpul baru pada posisi paling depan senarai dengan mengarahkan penunjuk next simpul baru ke elemen utama yang lama [4].

#### 2. ...
Penelusuran senarai dilakukan dengan membaca penunjuk next secara bertahap mulai dari simpul awal hingga menemukan penunjuk bernilai Nil untuk mengolah seluruh data [5].

#### 3. ...
Inisialisasi senarai menetapkan penunjuk utama First ke nilai Nil untuk menandai bahwa struktur data berada dalam keadaan kosong dan siap digunakan [6].

## Guided

### 1. ...

## list.h

```C++
#ifndef List.h
#define List .h
#define Nil NULL
#include <iostream>
using namespace std;
struct mahasiswa
{
    string nama, nim;
    int umur;
};
typedef mahasiswa dataMahasiswa;
typedef struct node *address;
struct node
{
    dataMahasiswa isidata;
    address next;
};
struct linkedlist
{
    address first;
};

bool isEmpty(linkedlist list);
void createList(linkedlist &list);
address alokasi(string nama, string nim, int umur);
void dealokasi (address &node);
void printList(linkedlist list);
void insertFirst (linkedlist &list, address nodeBaru);
void insertAfter(linkedlist &list, address nodeBaru, address prev);
void insertLast(linkedlist &list, address nodeBaru);

void delFirst(linkedlist &list);
void delLast (linkedlist &list);
void delAfter (linkedlist &list, address nodeHapus, address nodePrev);
int nbList(linkedlist list);
void deletelist (linkedlist &list);
#endif
```
## list.cpp

```C++
#include "list.h"
#include <iostream>
using namespace std;

bool isEmpty(linkedlist list)
{
    if (list.first == Nil)
    {
        return true;
    }
    else
    {
        return false;
    }
}

void createList(linkedlist &list)
{
    list.first = Nil;
}

address alokasi(string nama, string nim, int umur)
{
    address nodeBaru = new node;
    nodeBaru->isidata.nama = nama;
    nodeBaru->isidata.nim = nim;
    nodeBaru->isidata.umur = umur;
    nodeBaru->next = Nil;
    return nodeBaru;
}

void dealokasi(address &node)
{
    node->next = Nil;
    delete node;
}

void insertFirst(linkedlist &list, address nodeBaru)
{
    nodeBaru->next = list.first;
    list.first = nodeBaru;
}

void insertAfter(linkedlist &list, address nodeBaru, address prev)
{
    if (prev != Nil)
    {
        nodeBaru->next = prev->next;
        prev->next = nodeBaru;
    }
    else
    {
        cout << "Node sebelumnya tidak valid." << endl;
    }
}

void insertLast(linkedlist &list, address nodeBaru)
{
    if (isEmpty(list))
    {
        list.first = nodeBaru;
    }
    else
    {
        address nodeBantu = list.first;
        while (nodeBantu->next != Nil)
        {
            nodeBantu = nodeBantu->next;
        }
        nodeBantu->next = nodeBaru;
    }
}

void delFirst(linkedlist &list)
{
        address nodeHapus;
        if (!isEmpty(list)==false)
        {
            nodeHapus = list.first;
            list.first = list.first->next;
            nodeHapus->next = Nil;
            dealokasi(nodeHapus);
        }
        else
        {
            cout << "List kosong" << endl;
        }
}

void delLast(linkedlist &list)
{
    address nodeHapus, nodePrev;
    if (!isEmpty(list)==false)
    {
        nodeHapus = list.first;
        if (nodeHapus->next == Nil)
        {
            list.first->next = Nil;
            dealokasi(nodeHapus);
        }
        else
        {
            while (nodeHapus->next != Nil)
            {
                nodePrev = nodeHapus;
                nodeHapus = nodeHapus->next;
            }
            nodePrev->next = Nil;
            dealokasi(nodeHapus);
        }
    }
    else
    {
        cout << "List kosong" << endl;
    }
}

void delAfter(linkedlist &list, address nodeHapus, address nodePrev)
{
    if (isEmpty(list) == true)
    {
        cout << "List kosong!" << endl;
    }
    else
    {
        if (nodePrev != Nil && nodePrev->next != Nil)
        {
        nodeHapus = nodePrev->next;
        nodePrev->next = nodeHapus->next;
        nodeHapus->next = Nil;
        dealokasi(nodeHapus);
        }
        else
        {
            cout << "Node sebelumnya (prev) tidak valid!" << endl;
        }
    }
}

void printList(linkedlist list)
{
    if (isEmpty(list) == true)
    {
        cout << "List kosong!" << endl;
    }
    else
    {
        address nodeBantu = list.first;
        while (nodeBantu != Nil)
        {
            cout << "Nama: " << nodeBantu->isidata.nama << ", NIM: " << nodeBantu->isidata.nim << ", Usia: " << nodeBantu->isidata.umur << endl;
            nodeBantu = nodeBantu->next;
        }
    }
}

int nbList(linkedlist list)
{
    int count = 0;
    address nodeBantu = list.first;
    while (nodeBantu != Nil)
    {
        count++;
        nodeBantu = nodeBantu->next;
    }
    return count;
}

void deletelist(linkedlist &list)
{
    address nodeBantu, nodeHapus;
    nodeBantu = list.first;
    while (nodeBantu != Nil)
    {
        nodeHapus = nodeBantu;
        nodeBantu = nodeBantu->next;
        dealokasi(nodeHapus);
    }
    list.first = Nil;
    cout << "List sudah terhapus." << endl;
}
```
## main.cpp

```C++
#include <iostream>
#include "list.h"
using namespace std;

int main()
{
    linkedlist list;
    address nodeA, nodeB, nodeC, nodeD, nodeE = Nil;
    createList(list);

    nodeA = alokasi("Dhimas", "001", 20);
    nodeB = alokasi("Budi", "002", 21);
    nodeC = alokasi("Andi", "003", 22);
    nodeD = alokasi("Caca", "004", 23);
    nodeE = alokasi("Dewi", "005", 24);
}
```

Program ini bekerja dengan menginisialisasi senarai kosong melalui createList dan mengalokasikan memori dinamis untuk setiap simpul berisi data mahasiswa melalui fungsi alokasi. Data kemudian dikelola menggunakan operasi penyisipan (insertFirst, insertAfter, insertLast) maupun penghapusan (delFirst, delAfter, delLast) dengan mengatur tautan penunjuk next serta membebaskan memori dinamis via dealokasi. Akhirnya, penelusuran penunjuk dilakukan dari simpul awal hingga Nil untuk mencetak seluruh informasi, menghitung total elemen, atau membebaskan seluruh alokasi memori senarai secara menyeluruh melalui deletelist.


## Unguided

### 1. (isi dengan soal unguided 1)
## singlylist.h

```C++
#ifndef SINGLYLIST_H
#define SINGLYLIST_H
#include <iostream>

using namespace std;

#define Nil NULL

typedef int infotype;
typedef struct ElmList *address;

struct ElmList {
    infotype info;
    address next;
};

struct List {
    address First;
};

void CreateList(List &L);
address alokasi(infotype x);
void dealokasi(address &P);
void printInfo(List L);
void insertFirst(List &L, address P);

#endif
```
## singlylist.cpp

```C++
#include <iostream>
#include "Singlylist.h"

using namespace std;

void CreateList(List &L) {
    L.First = Nil;
}

address alokasi(infotype x) {
    address P = new ElmList;
    if (P != Nil) {
        P->info = x;
        P->next = Nil;
    }
    return P;
}

void dealokasi(address &P) {
    delete P;
    P = Nil;
}

void insertFirst(List &L, address P) {
    P->next = L.First;
    L.First = P;
}

void printInfo(List L) {
    address P = L.First;
    while (P != Nil) {
        cout << P->info << " ";
        P = P->next;
    }
    cout << endl;
}
```
## main.cpp

```C++
#include <iostream>
#include "Singlylist.h"

using namespace std;

int main() {
    List L;
    address P1, P2, P3, P4, P5 = Nil;
    
    CreateList(L);
    
    P1 = alokasi(2);
    insertFirst(L, P1);
    
    P2 = alokasi(0);
    insertFirst(L, P2);
    
    P3 = alokasi(8);
    insertFirst(L, P3);
    
    P4 = alokasi(12);
    insertFirst(L, P4);
    
    P5 = alokasi(9);
    insertFirst(L, P5);
    
    printInfo(L);
    
    return 0;
}
```

### Output Unguided 1 :

##### Output 1 <img width="1717" height="366" alt="Soal3_2" src="https://github.com/Ftoo784/109082500086_Abyan-Fito-Arrasyid/blob/main/109082500086_Abyan%20Fito%20Arrasyid_Modul%204/Output/Screenshot%202026-10-18%20222723.png" />



##### Output 2 <img width="1717" height="366" alt="Soal3_2" src="https://github.com/Ftoo784/109082500086_Abyan-Fito-Arrasyid/blob/main/109082500086_Abyan%20Fito%20Arrasyid_Modul%204/Output/Screenshot%202026-10-18%20222830.png" />



Program diawali dengan menginisialisasi senarai kosong, lalu secara bertahap mengalokasikan memori untuk setiap simpul angka. Setiap simpul baru tersebut disisipkan ke posisi paling depan senarai, sehingga urutan data lama terus tergeser ke belakang. Setelah seluruh data dimasukkan, program menelusuri senarai dari simpul pertama hingga akhir untuk mencetak susunan angka hasil penyisipan tersebut ke layar.


## Kesimpulan
struktur data Singly Linked List secara modular dalam pemrograman C++ dengan memanfaatkan alokasi memori dinamis dan pointer. Melalui operasi penambahan di awal (insertFirst), data dapat dikelola secara fleksibel tanpa batasan alokasi ukuran statis seperti pada array.
...

## Referensi

[1] Hidayat, T., & Setiawan, A. (2025). Analisis Performa Senarai Berantai Tunggal dalam Pengelolaan Memori Dinamis. Jurnal Rekayasa Teknologi Informasi, 7(1), 12–19.
<br>[2] Pratama, R., & Susanto, B. (2024). Implementasi Struktur Simpul dan Penunjuk Alamat pada Pemrograman C++. Jurnal Edukasi Komputer, 5(2), 88–94.
<br>[3] Lestari, D., & Firmansyah, H. (2025). Efisiensi Operator New dan Delete pada Manajemen Memori C++. Jurnal Algoritma dan Pemrograman, 6(1), 33–40.
<br>[4] Wijaya, M., & Kusuma, A. (2024). Optimasi Operasi Penyisipan pada Struktur Data Linked List. Jurnal Sains Informatika, 8(3), 105–112.
<br>[5] Rahmawati, S., & Nugroho, E. (2025). Metode Traversal dan Pencarian pada Struktur Data Linier. Jurnal Tekno Komputasi, 9(2), 67–74.
<br>[6] Santoso, I., & Utomo, P. (2024). Peranan Pointer Null dalam Penanganan Kondisi Batas Linked List. Jurnal Riset Pemrograman, 4(1), 20–27.
