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
![Screenshot Output soal1](https://github.com/Ftoo784/109082500086_Abyan-Fito-Arrasyid/blob/main/Modul9/output/Soal1.png)
[Program ini membaca dua lingkaran yang masing-masing didefinisikan oleh koordinat pusat dan jari-jari, lalu membaca satu titik sembarang. Program kemudian menghitung jarak titik tersebut ke masing-masing pusat lingkaran menggunakan rumus jarak Euclidean. Jika jarak titik ke pusat lingkaran lebih kecil atau sama dengan jari-jari, maka titik dianggap berada di dalam lingkaran tersebut. Berdasarkan hasil pengecekan terhadap kedua lingkaran, program menentukan apakah titik berada di dalam lingkaran pertama, lingkaran kedua, keduanya, atau di luar keduanya, lalu menampilkan hasilnya sesuai format yang diminta.]

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
![Screenshot Output soal2](https://github.com/Ftoo784/109082500086_Abyan-Fito-Arrasyid/blob/main/Modul9/output/Soal2.png)
Baris pertama adalah jumlah elemen array, lalu diikuti isi array sebanyak n angka. Setelah itu dimasukkan nilai x untuk indeks kelipatan, kemudian indeks yang ingin dihapus, dan terakhir angka yang ingin dicari frekuensinya. Program ini bekerja dengan membaca sejumlah bilangan ke dalam array, lalu menampilkan berbagai informasi seperti seluruh isi array, elemen pada indeks ganjil dan genap, serta elemen dengan indeks kelipatan tertentu. Program juga dapat menghapus elemen pada indeks tertentu dan menampilkan hasil array setelah penghapusan. Selanjutnya, program menghitung rata-rata dan standar deviasi dari data yang ada, lalu menghitung berapa kali suatu angka muncul di dalam array.] 

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
![Screenshot Output soal3](https://github.com/Ftoo784/109082500086_Abyan-Fito-Arrasyid/blob/main/Modul9/output/Soal3.png)
[Program ini digunakan untuk menentukan hasil dari beberapa pertandingan antara dua klub yang diinput oleh pengguna. Pertama, pengguna diminta untuk memasukkan nama dua klub yang akan bertanding. Setelah itu, program akan membaca skor dari setiap pertandingan secara berulang. Setiap skor terdiri dari dua bilangan yang mewakili jumlah gol dari masing-masing klub. Proses input ini akan terus berlangsung hingga pengguna memasukkan nilai negatif pada salah satu skor sebagai tanda untuk menghentikan input.
Selama proses tersebut, program tidak langsung menampilkan hasil pertandingan, melainkan menyimpan terlebih dahulu hasilnya ke dalam sebuah struktur data berupa slice. Jika skor klub A lebih besar dari klub B, maka nama klub A disimpan sebagai pemenang. Sebaliknya, jika skor klub B lebih besar, maka nama klub B yang disimpan. Jika kedua skor sama, maka hasil pertandingan dicatat sebagai “Draw”.
Setelah seluruh data pertandingan selesai dimasukkan, program kemudian menampilkan hasil dari setiap pertandingan secara berurutan sesuai dengan urutan input.]

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
![Screenshot Output soal4](https://github.com/Ftoo784/109082500086_Abyan-Fito-Arrasyid/blob/main/Modul9/output/Soal4.png)
[Program ini bertujuan untuk membaca sekumpulan karakter dari input pengguna, kemudian memprosesnya untuk dibalik dan diperiksa apakah termasuk palindrom atau tidak. Data karakter disimpan dalam sebuah array bertipe rune dengan kapasitas maksimum tertentu. Proses pengisian array dilakukan satu per satu hingga pengguna memasukkan tanda titik sebagai penanda akhir atau kapasitas array telah penuh.
Setelah data berhasil disimpan, program membalik urutan karakter dalam array menggunakan proses pertukaran elemen dari kedua ujung menuju tengah. Hasil pembalikan tersebut kemudian ditampilkan ke layar sebagai teks terbalik. Selanjutnya, program melakukan pemeriksaan palindrom dengan cara membandingkan karakter dari sisi depan dan belakang secara berpasangan. Jika seluruh pasangan karakter sama, maka teks tersebut dinyatakan sebagai palindrom, sebaliknya jika terdapat perbedaan maka bukan palindrom. Pada akhirnya, program menampilkan hasil pemeriksaan tersebut dalam bentuk nilai boolean.]

