# <h1 align="center">Laporan Praktikum Modul 9 </h1>
<p align="center">[Abyan Fito Arrasyid] - [109082500086]</p>

### 1. [Soal]
#### soal1.go

```go
package main
import (
	"fmt"
	"math"
)

func main() {
	var x1, y1, r1 int
	var x2, y2, r2 int
	var x, y int

	fmt.Scan(&x1, &y1, &r1)
	fmt.Scan(&x2, &y2, &r2)
	fmt.Scan(&x, &y)

	d1 := math.Sqrt(float64((x-x1)*(x-x1) + (y-y1)*(y-y1)))
	d2 := math.Sqrt(float64((x-x2)*(x-x2) + (y-y2)*(y-y2)))

	inside1 := d1 <= float64(r1)
	inside2 := d2 <= float64(r2)

	if inside1 && inside2 {
		fmt.Println("Titik di dalam lingkaran 1 dan 2")
	} else if inside1 {
		fmt.Println("Titik di dalam lingkaran 1")
	} else if inside2 {
		fmt.Println("Titik di dalam lingkaran 2")
	} else {
		fmt.Println("Titik di luar lingkaran 1 dan 2")
	}
}
```
### Output Soal 1 :
![Screenshot Output soal1](https://github.com/Ftoo784/109082500086_Abyan-Fito-Arrasyid/blob/main/Modul5/output/Soal1.png)
[Program ini digunakan untuk menghitung dan menampilkan deret angka Fibonacci secara berurutan dari indeks 0 hingga 10. Secara teknis, program ini menggunakan metode rekursi pada fungsi `fibonacci` untuk menentukan nilai setiap elemen, di mana setiap angka didapatkan dari penjumlahan dua angka sebelumnya dengan kondisi dasar nilai 0 dan 1. Pada bagian eksekusi utama, program melakukan iterasi sistematis untuk memformat output ke dalam bentuk tabel sederhana yang memetakan hubungan antara indeks $n$ dengan hasil deret S &_n. Mekanisme ini memastikan data tersaji secara terstruktur, memudahkan pengguna untuk melihat perkembangan nilai deret yang meningkat secara eksponensial seiring bertambahnya indeks, sekaligus mendemonstrasikan penerapan algoritma rekursif dalam menangani barisan matematika kompleks.]

### 2. [Soal2]
#### soal2.go

```go
package main
import "fmt"

func main() {
	var n int
	fmt.Scan(&n)

	arr := make([]int, n)

	for i := 0; i < n; i++ {
		fmt.Scan(&arr[i])
	}

	fmt.Println("Semua:")
	for i := 0; i < n; i++ {
		fmt.Print(arr[i], " ")
	}

	fmt.Println("\nGanjil:")
	for i := 1; i < n; i += 2 {
		fmt.Print(arr[i], " ")
	}

	fmt.Println("\nGenap:")
	for i := 0; i < n; i += 2 {
		fmt.Print(arr[i], " ")
	}

	var x int
	fmt.Scan(&x)
	fmt.Println("\nKelipatan:")
	for i := 0; i < n; i++ {
		if i%x == 0 {
			fmt.Print(arr[i], " ")
		}
	}

	var del int
	fmt.Scan(&del)

	fmt.Println("\nSetelah hapus:")
	for i := 0; i < n; i++ {
		if i != del {
			fmt.Print(arr[i], " ")
		}
	}

	var sum int
	for i := 0; i < n; i++ {
		sum += arr[i]
	}
	fmt.Println("\nRata-rata:", sum/n)

	var cari, count int
	fmt.Scan(&cari)

	for i := 0; i < n; i++ {
		if arr[i] == cari {
			count++
		}
	}
	fmt.Println("Frekuensi:", count)
}
```
### Output Soal 2 :
![Screenshot Output soal2](https://github.com/Ftoo784/109082500086_Abyan-Fito-Arrasyid/blob/main/Modul5/output/Soal2.png)
[Program ini digunakan untuk menghasilkan pola segitiga siku-siku menggunakan karakter bintang sesuai dengan input dari pengguna. Program bekerja dengan menerima nilai integer sebagai penentu tinggi pola, kemudian menggunakan logika perulangan bertingkat untuk menyusun karakter secara sistematis. Perulangan utama berfungsi untuk mengatur alur baris secara vertikal, sementara perulangan di dalamnya secara dinamis mencetak jumlah bintang yang meningkat secara linear mengikuti nomor baris yang sedang berjalan. Hasil akhirnya adalah sebuah struktur pola geometris, di mana setiap baris baru akan dieksekusi secara otomatis hingga mencapai batas nilai yang telah ditentukan, memastikan output yang dihasilkan rapi dan sesuai dengan spesifikasi input yang diberikan.] 

### 3. [Soal3]
#### soal3.go

```go
package main
import "fmt"

func main() {
	var klubA, klubB string
	fmt.Print("Klub A : ")
	fmt.Scan(&klubA)
	fmt.Print("Klub B : ")
	fmt.Scan(&klubB)
	var skorA, skorB int
	var hasil []string
	i := 1
	for {
		fmt.Printf("Pertandingan %d : ", i)
		fmt.Scan(&skorA, &skorB)

		if skorA < 0 || skorB < 0 {
			break
		}

		if skorA > skorB {
			hasil = append(hasil, klubA)
		} else if skorB > skorA {
			hasil = append(hasil, klubB)
		} else {
			hasil = append(hasil, "Draw")
		}

		i++
	}
	for j := 0; j < len(hasil); j++ {
		fmt.Println("Hasil", j+1, ":", hasil[j])
	}

	fmt.Println("Pertandingan selesai")
}

```
### Output Soal 3 :
![Screenshot Output soal3](https://github.com/Ftoo784/109082500086_Abyan-Fito-Arrasyid/blob/main/Modul5/output/Soal3.png)
[Program ini digunakan untuk mengidentifikasi dan menampilkan seluruh faktor pembagi dari suatu bilangan bulat positif yang diinput oleh pengguna. Secara operasional, program menerima nilai variabel N dan melakukan pemindaian sistematis menggunakan struktur perulangan yang berjalan dari angka satu hingga nilai N itu sendiri. Di dalam setiap iterasi, program menerapkan logika pengujian modulus untuk memeriksa apakah bilangan tersebut habis dibagi oleh indeks perulangan saat ini tanpa sisa. Jika kondisi terpenuhi, angka tersebut diklasifikasikan sebagai faktor dan langsung dicetak ke layar secara horizontal dengan spasi sebagai pemisah. Mekanisme ini secara efektif menyaring komponen pembagi bilangan secara tuntas, memberikan hasil yang akurat dalam memetakan semua pembagi asli dari angka yang diuji.]

### 4. [Soal4]
#### soal4.go

```go
package main

import "fmt"

const NMAX = 9

type tabel [NMAX]rune

func isiArray(t *tabel, n *int) {
	var ch rune
	for {
		fmt.Scanf("%c", &ch)
		if ch == '.' || *n >= NMAX {
			break
		}
		t[*n] = ch
		*n++
	}
}

func cetakArray(t tabel, n int) {
	for i := 0; i < n; i++ {
		fmt.Printf("%c", t[i])
	}
	fmt.Println()
}

func balikkanArray(t *tabel, n int) {
	for i := 0; i < n/2; i++ {
		t[i], t[n-1-i] = t[n-1-i], t[i]
	}
}

func palindrom(t tabel, n int) bool {
	for i := 0; i < n/2; i++ {
		if t[i] != t[n-1-i] {
			return false
		}
	}
	return true
}

func main() {
	var tab tabel
	var n int
	isiArray(&tab, &n)

	fmt.Print("Reverse teks: ")
	balikkanArray(&tab, n)
	cetakArray(tab, n)

	if palindrom(tab, n) {
		fmt.Println("Palindrom: true")
	} else {
		fmt.Println("Palindrom: false")
	}
}
```
### Output Soal 4 :
![Screenshot Output soal4](https://github.com/Ftoo784/109082500086_Abyan-Fito-Arrasyid/blob/main/Modul5/output/Soal4.png)
[Program yang menggunakan teknik rekursi untuk menghasilkan barisan bilangan dengan pola simetris atau pencerminan. Secara teknis, fungsi `tampilkanBarisan` bekerja dengan mencetak nilai n saat ini sebelum melakukan pemanggilan fungsi itu sendiri secara turun atau descending dan mencetak kembali nilai n setelah pemanggilan rekursif tersebut selesai secara naik atau ascending. Proses ini berlanjut hingga mencapai kondisi berhenti ketika n bernilai satu, di mana program hanya akan mencetak angka satu kali. Hasil akhirnya adalah sebuah urutan angka yang menyusut hingga ke titik pusat dan kemudian berkembang kembali ke nilai semula, menciptakan alur logika yang dihasilkan dalam bentuk barisan bilangan horizontal yang rapi dan terstruktur sesuai dengan input yang dimasukkan oleh pengguna.]
akhir yang akurat sesuai dengan prinsip matematika eksponensial berdasarkan input yang diberikan oleh pengguna.]

