# <h1 align="center">Laporan Praktikum Modul 5 </h1>
<p align="center">[Abyan Fito Arrasyid] - [109082500086]</p>

### 1. [Soal]
#### soal1.go

```go
package main

import "fmt"
func main() {
    var N int
    fmt.Scan(&N)

    for i := 1; i <= N; i++ {
        for j := 1; j <= i; j++ {
            fmt.Print("*")
        }
        fmt.Println()
    }
}
```
### Output Soal 1 :
![Screenshot Output soal1](https://github.com/Ftoo784/109082500086_Abyan-Fito-Arrasyid/blob/main/Modul5/Output/Soal1.png)
[Program ini digunakan untuk menghasilkan pola segitiga siku-siku menggunakan karakter bintang sesuai dengan input dari pengguna. Program bekerja dengan menerima nilai integer sebagai penentu tinggi pola, kemudian menggunakan logika perulangan bertingkat untuk menyusun karakter secara sistematis. Perulangan utama berfungsi untuk mengatur alur baris secara vertikal, sementara perulangan di dalamnya secara dinamis mencetak jumlah bintang yang meningkat secara linear mengikuti nomor baris yang sedang berjalan. Hasil akhirnya adalah sebuah struktur pola geometris, di mana setiap baris baru akan dieksekusi secara otomatis hingga mencapai batas nilai yang telah ditentukan, memastikan output yang dihasilkan rapi dan sesuai dengan spesifikasi input yang diberikan.]

### 2. [Soal2]
#### soal2.go

```go
package main

import "fmt"

func fibonacci(n int) int {
    if n == 0 {
        return 0
    } else if n == 1 {
        return 1
    }
    return fibonacci(n-1) + fibonacci(n-2)
}

func main() {
    fmt.Print("n   ")
    for i := 0; i <= 10; i++ {
        fmt.Printf("%d ", i)
    }
    fmt.Println()

    fmt.Print("Sₙ  ")
    for i := 0; i <= 10; i++ {
        fmt.Printf("%d ", fibonacci(i))
    }
    fmt.Println()
}

```
### Output Soal 2 :
![Screenshot Output soal2](https://github.com/Ftoo784/109082500086_Abyan-Fito-Arrasyid/blob/main/Modul5/Output/Soal2.png)
[Program ini digunakan untuk menghitung dan menampilkan deret angka Fibonacci secara berurutan dari indeks 0 hingga 10. Secara teknis, program ini menggunakan metode rekursi pada fungsi `fibonacci` untuk menentukan nilai setiap elemen, di mana setiap angka didapatkan dari penjumlahan dua angka sebelumnya dengan kondisi dasar nilai 0 dan 1. Pada bagian eksekusi utama, program melakukan iterasi sistematis untuk memformat output ke dalam bentuk tabel sederhana yang memetakan hubungan antara indeks $n$ dengan hasil deret S &_n. Mekanisme ini memastikan data tersaji secara terstruktur, memudahkan pengguna untuk melihat perkembangan nilai deret yang meningkat secara eksponensial seiring bertambahnya indeks, sekaligus mendemonstrasikan penerapan algoritma rekursif dalam menangani barisan matematika kompleks.] 

### 3. [Soal3]
#### soal3.go

```go
package main

import "fmt"

func main() {
    var N int
    fmt.Scan(&N)

    for i := 1; i <= N; i++ {
        if N%i == 0 {
            fmt.Print(i, " ")
        }
    }
}

```
### Output Soal 3 :
![Screenshot Output soal3](https://github.com/Ftoo784/109082500086_Abyan-Fito-Arrasyid/blob/main/Modul5/Output/Soal3.png)
[Program ini digunakan untuk mengidentifikasi dan menampilkan seluruh faktor pembagi dari suatu bilangan bulat positif yang diinput oleh pengguna. Secara operasional, program menerima nilai variabel N dan melakukan pemindaian sistematis menggunakan struktur perulangan yang berjalan dari angka satu hingga nilai N itu sendiri. Di dalam setiap iterasi, program menerapkan logika pengujian modulus untuk memeriksa apakah bilangan tersebut habis dibagi oleh indeks perulangan saat ini tanpa sisa. Jika kondisi terpenuhi, angka tersebut diklasifikasikan sebagai faktor dan langsung dicetak ke layar secara horizontal dengan spasi sebagai pemisah. Mekanisme ini secara efektif menyaring komponen pembagi bilangan secara tuntas, memberikan hasil yang akurat dalam memetakan semua pembagi asli dari angka yang diuji.]

### 4. [Soal4]
#### soal4.go

```go
package main

import "fmt"
func tampilkanBarisan(n int) {
	if n == 1 {
		fmt.Print(n, " ")
		return
	}

	fmt.Print(n, " ")
	tampilkanBarisan(n - 1)
	fmt.Print(n, " ")
}

func main() {
	var n int
	fmt.Scan(&n)
	tampilkanBarisan(n)
	fmt.Println()
}
```
### Output Soal 4 :
![Screenshot Output soal4](https://github.com/Ftoo784/109082500086_Abyan-Fito-Arrasyid/blob/main/Modul5/Output/Soal4.png)
[Program yang menggunakan teknik rekursi untuk menghasilkan barisan bilangan dengan pola simetris atau pencerminan. Secara teknis, fungsi `tampilkanBarisan` bekerja dengan mencetak nilai n saat ini sebelum melakukan pemanggilan fungsi itu sendiri secara turun atau descending dan mencetak kembali nilai n setelah pemanggilan rekursif tersebut selesai secara naik atau ascending. Proses ini berlanjut hingga mencapai kondisi berhenti ketika n bernilai satu, di mana program hanya akan mencetak angka satu kali. Hasil akhirnya adalah sebuah urutan angka yang menyusut hingga ke titik pusat dan kemudian berkembang kembali ke nilai semula, menciptakan alur logika yang dihasilkan dalam bentuk barisan bilangan horizontal yang rapi dan terstruktur sesuai dengan input yang dimasukkan oleh pengguna.]

### 5. [Soal5]
#### soal5.go

```go
package main

import "fmt"
func cetakGanjil(n int) {
	if n <= 0 {
		return
	}

	cetakGanjil(n - 1)
	if n%2 != 0 {
		fmt.Printf("%d ", n)
	}
}

func main() {
	var n int
	fmt.Scan(&n)
	cetakGanjil(n)
	fmt.Println()
}
```
### Output Soal 5 :
![Screenshot Output soal5](https://github.com/Ftoo784/109082500086_Abyan-Fito-Arrasyid/blob/main/Modul5/Output/Soal5.png)
[Program ini memanfaatkan prinsip rekursi untuk menyaring dan menampilkan deret bilangan ganjil dari satu hingga batas nilai n yang ditentukan. Secara mekanisme, fungsi `cetakGanjil` bekerja dengan melakukan pemanggilan diri sendiri terlebih dahulu menuju nilai terkecil sebelum mengeksekusi perintah cetak, yang secara efektif menciptakan urutan penampilan dari kecil ke besar. Di dalam setiap tahapan rekursi yang kembali ke atas, program menerapkan pengujian logika modulus untuk memvalidasi apakah bilangan tersebut tidak habis dibagi dua jika teridentifikasi sebagai bilangan ganjil, maka angka tersebut akan ditampilkan ke layar. Pola ini memastikan bahwa meskipun proses penelusuran dimulai dari nilai n, output yang dihasilkan tetap tersusun secara kronologis berurutan, memberikan daftar bilangan ganjil yang bersih dan terformat secara horizontal.]

### 6. [Soal6]
#### soal6.go

```go
package main

import "fmt"
func pangkat(x int, y int) int {
	if y == 0 {
		return 1
	}
	return x * pangkat(x, y-1)
}

func main() {
	var x, y int
	fmt.Scan(&x, &y)
	fmt.Println(pangkat(x, y))
}
```
### Output Soal 6 :
![Screenshot Output soal6](https://github.com/Ftoo784/109082500086_Abyan-Fito-Arrasyid/blob/main/Modul5/Output/Soal6.png)
[Program ini merupakan implementasi bahasa pemrograman Go yang dirancang untuk menghitung hasil perpangkatan dua bilangan bulat menggunakan pendekatan algoritma rekursif. Secara operasional, fungsi `pangkat` menerima basis x dan eksponen y, kemudian secara berulang mengalikan basis tersebut dengan hasil pemanggilan dirinya sendiri sambil mengurangi nilai eksponen satu per satu. Kondisi berhenti ditetapkan pada saat eksponen bernilai nol, di mana program akan mengembalikan nilai satu sebagai identitas perkalian. Mekanisme ini secara efektif memecah operasi perpangkatan menjadi serangkaian perkalian berantai yang dieksekusi melalui tumpukan fungsi, sehingga menghasilkan kalkulasi akhir yang akurat sesuai dengan prinsip matematika eksponensial berdasarkan input yang diberikan oleh pengguna.]
